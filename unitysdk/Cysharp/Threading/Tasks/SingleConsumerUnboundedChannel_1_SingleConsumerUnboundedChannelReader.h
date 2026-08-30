#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/ChannelReader_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class SingleConsumerUnboundedChannel_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader_TypeDefinitionIndex = 42563;

	template <typename T>
	class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader : public ::Cysharp::Threading::Tasks::ChannelReader_1<T>
	{
	public:
		::System::Action_1<::System::Object*>* CancellationCallbackDelegate; // 0x0
		::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>* parent; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Boolean> core; // 0x0
		::System::Boolean isWaiting; // 0x0
	};
}
