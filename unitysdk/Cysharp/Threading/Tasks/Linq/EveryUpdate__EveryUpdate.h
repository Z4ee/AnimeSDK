#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE_DISPOSEASYNC_OFFSET UNITYSDK_OFFSET(0x1CE51B70)
#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CE51A90)
#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE_MOVENEXTASYNC_OFFSET UNITYSDK_OFFSET(0x1CE51AA0)
#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CE51BC0)
#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE518E0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int EveryUpdate__EveryUpdate_TypeDefinitionIndex = 44574;

	class EveryUpdate__EveryUpdate : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x38
		::System::Boolean disposed; // 0x50
		::Cysharp::Threading::Tasks::PlayerLoopTiming updateTiming; // 0x54

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Cysharp::Threading::Tasks::AsyncUnit get_Current()
		{
			return ((::Cysharp::Threading::Tasks::AsyncUnit(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE_GET_CURRENT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> MoveNextAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE_MOVENEXTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask DisposeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE_DISPOSEASYNC_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE_MOVENEXT_OFFSET))(this);
		}
	};
}
