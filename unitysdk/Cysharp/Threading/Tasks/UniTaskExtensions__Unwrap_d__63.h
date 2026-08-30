#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__63_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA9E20)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__63_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Unwrap_d__63_TypeDefinitionIndex = 42844;

	struct alignas(8) UniTaskExtensions__Unwrap_d__63
	{
		::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::UniTask> task; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x40
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Cysharp::Threading::Tasks::UniTask> __u__1; // 0x50
		::System::Int32 __1__state; // 0x70

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__63_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__UNWRAP_D__63_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
