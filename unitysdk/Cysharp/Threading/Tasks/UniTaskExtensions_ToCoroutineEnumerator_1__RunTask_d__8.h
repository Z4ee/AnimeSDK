#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskExtensions_ToCoroutineEnumerator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_ToCoroutineEnumerator_1__RunTask_d__8_TypeDefinitionIndex = 42824;

	template <typename T>
	struct UniTaskExtensions_ToCoroutineEnumerator_1__RunTask_d__8
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
		::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator_1<T>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> __u__1; // 0x0
	};
}
