#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCancelHandler; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E78C1B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E78C0D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E78C390)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_OFFSET UNITYSDK_OFFSET(0x1E78C210)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_UNITYENGINE_EVENTSYSTEMS_ICANCELHANDLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1E78C060)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78C4B0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCancelTrigger_TypeDefinitionIndex = 31439;

	class AsyncCancelTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::BaseEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_ICancelHandler_OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_UNITYENGINE_EVENTSYSTEMS_ICANCELHANDLER_ONCANCEL_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* GetOnCancelAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* GetOnCancelAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnCancelAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnCancelAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
