#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnApplicationPauseHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_GETONAPPLICATIONPAUSEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C37BF20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_GETONAPPLICATIONPAUSEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C37BE80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C37C0D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSEASYNC_OFFSET UNITYSDK_OFFSET(0x1C37BF80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1C37BE70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37C1E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncApplicationPauseTrigger_TypeDefinitionIndex = 28677;

	class AsyncApplicationPauseTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean pauseStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSE_OFFSET))(this, pauseStatus);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler* GetOnApplicationPauseAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_GETONAPPLICATIONPAUSEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler* GetOnApplicationPauseAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_GETONAPPLICATIONPAUSEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> OnApplicationPauseAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> OnApplicationPauseAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
