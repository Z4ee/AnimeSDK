#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS__WAITASYNC_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA9F30)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS__WAITASYNC_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions__WaitAsync_d__11_TypeDefinitionIndex = 42886;

	struct alignas(8) UnityAsyncExtensions__WaitAsync_d__11
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::Unity::Jobs::JobHandle jobHandle; // 0x28
		::System::Int32 __1__state; // 0x38
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x3C
		::Cysharp::Threading::Tasks::PlayerLoopTiming waitTiming; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS__WAITASYNC_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS__WAITASYNC_D__11_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
