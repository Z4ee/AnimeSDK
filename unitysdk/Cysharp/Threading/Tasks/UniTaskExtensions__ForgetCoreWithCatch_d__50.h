#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__FORGETCOREWITHCATCH_D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA9DF0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__FORGETCOREWITHCATCH_D__50_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__ForgetCoreWithCatch_d__50_TypeDefinitionIndex = 42837;

	struct alignas(8) UniTaskExtensions__ForgetCoreWithCatch_d__50
	{
		::System::Action_1<::System::Exception*>* exceptionHandler; // 0x10
		::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter __u__2; // 0x18
		::System::Exception* _ex_5__4; // 0x28
		::System::Object* __7__wrap1; // 0x30
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x48
		::Cysharp::Threading::Tasks::UniTask task; // 0x50
		::System::Int32 __1__state; // 0x60
		::System::Boolean handleExceptionOnMainThread; // 0x64
		::System::Int32 __7__wrap2; // 0x68

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__FORGETCOREWITHCATCH_D__50_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__FORGETCOREWITHCATCH_D__50_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
