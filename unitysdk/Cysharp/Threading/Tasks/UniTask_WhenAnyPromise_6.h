#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_7.h"

namespace Cysharp::Threading::Tasks { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class UniTask_WhenAnyPromise_6; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAnyPromise_6_TypeDefinitionIndex = 42721;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class UniTask_WhenAnyPromise_6 : public ::System::Object
	{
	public:
		::System::Int32 completedCount; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<::System::Int32, T1, T2, T3, T4, T5, T6>> core; // 0x0
	};
}
