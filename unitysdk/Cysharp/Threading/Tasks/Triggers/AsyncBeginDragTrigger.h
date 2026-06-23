#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnBeginDragHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E80E050)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E80DF70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E80E230)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x1E80E0B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IBEGINDRAGHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1E80DF00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E80E350)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncBeginDragTrigger_TypeDefinitionIndex = 31437;

	class AsyncBeginDragTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IBEGINDRAGHANDLER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler* GetOnBeginDragAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler* GetOnBeginDragAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnBeginDragAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnBeginDragAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
