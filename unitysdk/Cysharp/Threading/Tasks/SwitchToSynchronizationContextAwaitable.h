#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading { class SynchronizationContext; }

#define CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2DFB9E0)
#define CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x80380)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToSynchronizationContextAwaitable_TypeDefinitionIndex = 42786;

	struct alignas(8) SwitchToSynchronizationContextAwaitable
	{
		::System::Threading::SynchronizationContext* synchronizationContext; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18

		::System::Void _ctor(::System::Threading::SynchronizationContext* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE__CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOSYNCHRONIZATIONCONTEXTAWAITABLE_GETAWAITER_OFFSET))(this);
		}
		*/
	};
}
