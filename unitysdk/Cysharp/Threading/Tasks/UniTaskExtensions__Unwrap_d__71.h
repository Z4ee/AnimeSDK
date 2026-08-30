#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { class Task; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BB81B0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__71_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Unwrap_d__71_TypeDefinitionIndex = 42852;

	struct alignas(8) UniTaskExtensions__Unwrap_d__71
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Threading::Tasks::Task*> __u__1; // 0x30
		::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*> task; // 0x48
		::System::Boolean continueOnCapturedContext; // 0x60
		::System::Int32 __1__state; // 0x64

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__71_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__71_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
