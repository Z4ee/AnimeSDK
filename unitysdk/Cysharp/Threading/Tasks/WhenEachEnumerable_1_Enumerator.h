#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/WhenEachResult_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/WhenEachState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class Channel_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class WhenEachEnumerable_1_Enumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int WhenEachEnumerable_1_Enumerator_TypeDefinitionIndex = 42793;

	template <typename T>
	class WhenEachEnumerable_1_Enumerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::Channel_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>* channel; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>* channelEnumerator; // 0x0
		::System::Int32 completeCount; // 0x0
		::Cysharp::Threading::Tasks::WhenEachState state; // 0x0
	};
}
