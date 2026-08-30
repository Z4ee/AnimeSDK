#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class AsyncSubject_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASKOBSERVABLEEXTENSIONS__FIRE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BB81E0)
#define CYSHARP_THREADING_TASKS_UNITASKOBSERVABLEEXTENSIONS__FIRE_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskObservableExtensions__Fire_d__4_TypeDefinitionIndex = 42859;

	struct alignas(8) UniTaskObservableExtensions__Fire_d__4
	{
		::Cysharp::Threading::Tasks::UniTask task; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
		::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>* subject; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKOBSERVABLEEXTENSIONS__FIRE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKOBSERVABLEEXTENSIONS__FIRE_D__4_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
