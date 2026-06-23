#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { class UniTaskExtensions_ToCoroutineEnumerator; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR__RUNTASK_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA81AB0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR__RUNTASK_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_ToCoroutineEnumerator__RunTask_d__6_TypeDefinitionIndex = 31296;

	struct alignas(8) UniTaskExtensions_ToCoroutineEnumerator__RunTask_d__6
	{
		::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask task; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR__RUNTASK_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR__RUNTASK_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
