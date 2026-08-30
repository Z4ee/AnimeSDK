#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__84_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA9AF0)
#define CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__84_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask__RunOnThreadPool_d__84_TypeDefinitionIndex = 42767;

	struct alignas(8) UniTask__RunOnThreadPool_d__84
	{
		::System::Action_1<::System::Object*>* action; // 0x10
		::System::Object* state; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Object* __7__wrap1; // 0x38
		::System::Int32 __7__wrap2; // 0x40
		::System::Int32 __1__state; // 0x44
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__2; // 0x48
		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter __u__1; // 0x4C
		::System::Boolean configureAwait; // 0x4D

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__84_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__84_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
