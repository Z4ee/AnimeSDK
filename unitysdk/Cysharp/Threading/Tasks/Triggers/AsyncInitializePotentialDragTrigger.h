#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnInitializePotentialDragHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_GETONINITIALIZEPOTENTIALDRAGASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D75FC30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_GETONINITIALIZEPOTENTIALDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D75FB60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_ONINITIALIZEPOTENTIALDRAGASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D75FE70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_ONINITIALIZEPOTENTIALDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x1D75FC90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IINITIALIZEPOTENTIALDRAGHANDLER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1D75FAF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75FFF0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncInitializePotentialDragTrigger_TypeDefinitionIndex = 43046;

	class AsyncInitializePotentialDragTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IInitializePotentialDragHandler_OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IINITIALIZEPOTENTIALDRAGHANDLER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler* GetOnInitializePotentialDragAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_GETONINITIALIZEPOTENTIALDRAGASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler* GetOnInitializePotentialDragAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_GETONINITIALIZEPOTENTIALDRAGASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnInitializePotentialDragAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_ONINITIALIZEPOTENTIALDRAGASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnInitializePotentialDragAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_ONINITIALIZEPOTENTIALDRAGASYNC_1_OFFSET))(this, a1);
		}
	};
}
