#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0xA79E00)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3E5700)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToMainThreadAwaitable_TypeDefinitionIndex = 31273;

	struct alignas(8) SwitchToMainThreadAwaitable
	{
		::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE__CTOR_OFFSET))(this, playerLoopTiming, cancellationToken);
		}

		/*
		::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_GETAWAITER_OFFSET))(this);
		}
		*/
	};
}
