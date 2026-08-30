#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS__TOCANCELLATIONTOKENCORE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA9420)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS__TOCANCELLATIONTOKENCORE_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CancellationTokenExtensions__ToCancellationTokenCore_d__6_TypeDefinitionIndex = 42550;

	struct alignas(8) CancellationTokenExtensions__ToCancellationTokenCore_d__6
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask task; // 0x18
		::System::Threading::CancellationTokenSource* cts; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS__TOCANCELLATIONTOKENCORE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS__TOCANCELLATIONTOKENCORE_D__6_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
