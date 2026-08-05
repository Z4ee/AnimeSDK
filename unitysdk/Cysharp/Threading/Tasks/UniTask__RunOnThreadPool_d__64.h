#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAC8270)
#define CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__64_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask__RunOnThreadPool_d__64_TypeDefinitionIndex = 31886;

	struct alignas(8) UniTask__RunOnThreadPool_d__64
	{
		::System::Object* __7__wrap1; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::System::Action* action; // 0x30
		::System::Boolean configureAwait; // 0x38
		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter __u__1; // 0x39
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__2; // 0x3C
		::System::Int32 __1__state; // 0x40
		::System::Int32 __7__wrap2; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__64_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__64_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
