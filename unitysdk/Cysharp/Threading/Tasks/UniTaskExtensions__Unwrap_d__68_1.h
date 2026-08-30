#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Unwrap_d__68_1_TypeDefinitionIndex = 42849;

	template <typename T>
	struct UniTaskExtensions__Unwrap_d__68_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T> __t__builder; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task_1<T>*> task; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Threading::Tasks::Task_1<T>*> __u__1; // 0x0
		::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2; // 0x0
	};
}
