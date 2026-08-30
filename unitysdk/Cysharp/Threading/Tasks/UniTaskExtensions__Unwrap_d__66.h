#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA9E30)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__66_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Unwrap_d__66_TypeDefinitionIndex = 42847;

	struct alignas(8) UniTaskExtensions__Unwrap_d__66
	{
		::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>* task; // 0x10
		::System::Runtime::CompilerServices::TaskAwaiter_1<::Cysharp::Threading::Tasks::UniTask> __u__1; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__66_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__66_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
