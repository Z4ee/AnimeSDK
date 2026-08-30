#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BDEC30)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BDEE20)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB8760)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB8760)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x39A9C20)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToMainThreadAwaitable_Awaiter_TypeDefinitionIndex = 42779;

	struct alignas(8) SwitchToMainThreadAwaitable_Awaiter
	{
		::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}
	};
}
