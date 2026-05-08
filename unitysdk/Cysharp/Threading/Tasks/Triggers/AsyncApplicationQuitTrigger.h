#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnApplicationQuitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C42F7C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C42F720)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C42F970)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET UNITYSDK_OFFSET(0x1C42F820)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1C42F700)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42FA80)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncApplicationQuitTrigger_TypeDefinitionIndex = 28679;

	class AsyncApplicationQuitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* GetOnApplicationQuitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* GetOnApplicationQuitAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnApplicationQuitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnApplicationQuitAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
