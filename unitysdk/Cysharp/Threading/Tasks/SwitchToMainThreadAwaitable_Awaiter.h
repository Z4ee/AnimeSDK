#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9D8120)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9D8110)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9D81A0)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9D8210)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x3A4A20)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToMainThreadAwaitable_Awaiter_TypeDefinitionIndex = 28618;

	struct alignas(8) SwitchToMainThreadAwaitable_Awaiter
	{
		::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER__CTOR_OFFSET))(this, playerLoopTiming, cancellationToken);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_ONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void UnsafeOnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, continuation);
		}
	};
}
