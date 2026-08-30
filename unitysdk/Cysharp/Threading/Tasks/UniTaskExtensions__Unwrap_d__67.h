#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__67_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BB8190)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__67_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Unwrap_d__67_TypeDefinitionIndex = 42848;

	struct alignas(8) UniTaskExtensions__Unwrap_d__67
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Cysharp::Threading::Tasks::UniTask> __u__1; // 0x30
		::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>* task; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean continueOnCapturedContext; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__67_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__67_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
