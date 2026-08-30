#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Cysharp::Threading::Tasks { template <typename T1, typename T2> class UniTask_WhenAllPromise_2; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAllPromise_2_TypeDefinitionIndex = 42681;

	template <typename T1, typename T2>
	class UniTask_WhenAllPromise_2 : public ::System::Object
	{
	public:
		T1 t1; // 0x0
		T2 t2; // 0x0
		::System::Int32 completedCount; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<T1, T2>> core; // 0x0
	};
}
