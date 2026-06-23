#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDeselectHandler; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_GETONDESELECTASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E766280)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_GETONDESELECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E7661A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_ONDESELECTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E766460)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_ONDESELECTASYNC_OFFSET UNITYSDK_OFFSET(0x1E7662E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_UNITYENGINE_EVENTSYSTEMS_IDESELECTHANDLER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1E766130)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E766580)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDeselectTrigger_TypeDefinitionIndex = 31441;

	class AsyncDeselectTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::BaseEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IDeselectHandler_OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_UNITYENGINE_EVENTSYSTEMS_IDESELECTHANDLER_ONDESELECT_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler* GetOnDeselectAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_GETONDESELECTASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler* GetOnDeselectAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_GETONDESELECTASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnDeselectAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_ONDESELECTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnDeselectAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_ONDESELECTASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
