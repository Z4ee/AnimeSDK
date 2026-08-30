#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

#define CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_DISPOSEASYNC_OFFSET UNITYSDK_OFFSET(0x3BDEB30)
#define CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x39A9C20)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ReturnToMainThread_TypeDefinitionIndex = 42780;

	struct alignas(8) ReturnToMainThread
	{
		::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD__CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter DisposeAsync()
		{
			return ((::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOMAINTHREAD_DISPOSEASYNC_OFFSET))(this);
		}
		*/
	};
}
