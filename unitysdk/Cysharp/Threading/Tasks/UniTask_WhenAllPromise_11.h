#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueTuple_8.h"

namespace Cysharp::Threading::Tasks { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> class UniTask_WhenAllPromise_11; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAllPromise_11_TypeDefinitionIndex = 42699;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	class UniTask_WhenAllPromise_11 : public ::System::Object
	{
	public:
		T1 t1; // 0x0
		T2 t2; // 0x0
		T3 t3; // 0x0
		T4 t4; // 0x0
		T5 t5; // 0x0
		T6 t6; // 0x0
		T7 t7; // 0x0
		T8 t8; // 0x0
		T9 t9; // 0x0
		T10 t10; // 0x0
		T11 t11; // 0x0
		::System::Int32 completedCount; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, ::System::ValueTuple_4<T8, T9, T10, T11>>> core; // 0x0
	};
}
