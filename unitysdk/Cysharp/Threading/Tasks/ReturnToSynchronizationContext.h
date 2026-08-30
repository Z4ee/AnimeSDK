#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading { class SynchronizationContext; }

#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_DISPOSEASYNC_OFFSET UNITYSDK_OFFSET(0x3BA96B0)
#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA96A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ReturnToSynchronizationContext_TypeDefinitionIndex = 42788;

	struct alignas(8) ReturnToSynchronizationContext
	{
		::System::Threading::SynchronizationContext* syncContext; // 0x10
		::System::Boolean dontPostWhenSameContext; // 0x18
		::System::Threading::CancellationToken cancellationToken; // 0x20

		::System::Void _ctor(::System::Threading::SynchronizationContext* a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter DisposeAsync()
		{
			return ((::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_DISPOSEASYNC_OFFSET))(this);
		}
		*/
	};
}
