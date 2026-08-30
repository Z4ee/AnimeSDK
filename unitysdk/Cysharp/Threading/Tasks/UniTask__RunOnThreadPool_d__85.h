#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__85_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BB7E50)
#define CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__85_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask__RunOnThreadPool_d__85_TypeDefinitionIndex = 42768;

	struct alignas(8) UniTask__RunOnThreadPool_d__85
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::System::Object* __7__wrap1; // 0x28
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* action; // 0x30
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x38
		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter __u__1; // 0x48
		::System::Boolean configureAwait; // 0x49
		::System::Int32 __7__wrap2; // 0x4C
		::System::Int32 __1__state; // 0x50
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__3; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__85_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__85_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
