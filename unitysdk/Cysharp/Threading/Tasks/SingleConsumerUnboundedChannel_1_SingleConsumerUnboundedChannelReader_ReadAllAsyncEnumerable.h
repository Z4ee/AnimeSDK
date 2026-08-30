#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader_ReadAllAsyncEnumerable_TypeDefinitionIndex = 42564;

	template <typename T>
	class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader_ReadAllAsyncEnumerable : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* CancellationCallback1Delegate; // 0x0
		::System::Action_1<::System::Object*>* CancellationCallback2Delegate; // 0x0
		::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>* parent; // 0x0
		::System::Threading::CancellationToken cancellationToken1; // 0x0
		::System::Threading::CancellationToken cancellationToken2; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration1; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration2; // 0x0
		T current; // 0x0
		::System::Boolean cacheValue; // 0x0
		::System::Boolean running; // 0x0
	};
}
