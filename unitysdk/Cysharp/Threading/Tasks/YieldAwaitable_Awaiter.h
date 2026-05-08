#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x304470)
#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9D7850)
#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9D78C0)
#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x2E85F0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int YieldAwaitable_Awaiter_TypeDefinitionIndex = 28615;

	struct alignas(4) YieldAwaitable_Awaiter
	{
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x10

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER__CTOR_OFFSET))(this, timing);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER_ONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void UnsafeOnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, continuation);
		}
	};
}
