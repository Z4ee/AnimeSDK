#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDragHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_GETONDRAGASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FC32F40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_GETONDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FC32E70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_ONDRAGASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FC33120)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_ONDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x1FC32FA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IDRAGHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1FC32E00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC33240)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDragTrigger_TypeDefinitionIndex = 32063;

	class AsyncDragTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IDragHandler_OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IDRAGHANDLER_ONDRAG_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler* GetOnDragAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_GETONDRAGASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler* GetOnDragAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_GETONDRAGASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnDragAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_ONDRAGASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnDragAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_ONDRAGASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
