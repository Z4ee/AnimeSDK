#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2DFB9E0)
#define CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BA95C0)
#define CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA94E0)
#define CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA9640)
#define CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA9640)
#define CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x31FA0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ReturnToMainThread_Awaiter_TypeDefinitionIndex = 42781;

	struct alignas(8) ReturnToMainThread_Awaiter
	{
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER__CTOR_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_GETAWAITER_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}
	};
}
