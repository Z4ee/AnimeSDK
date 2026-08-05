#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnSubmitHandler; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_GETONSUBMITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FAAB140)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_GETONSUBMITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAAB070)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_ONSUBMITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FAAB320)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_ONSUBMITASYNC_OFFSET UNITYSDK_OFFSET(0x1FAAB1A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISUBMITHANDLER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1FAAB000)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAAB440)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncSubmitTrigger_TypeDefinitionIndex = 32087;

	class AsyncSubmitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::BaseEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_ISubmitHandler_OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISUBMITHANDLER_ONSUBMIT_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler* GetOnSubmitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_GETONSUBMITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler* GetOnSubmitAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_GETONSUBMITASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnSubmitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_ONSUBMITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnSubmitAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_ONSUBMITASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
