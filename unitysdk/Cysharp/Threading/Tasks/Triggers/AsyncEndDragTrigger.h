#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnEndDragHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_GETONENDDRAGASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D75EE90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_GETONENDDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D75EDC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_ONENDDRAGASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D75F0D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_ONENDDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x1D75EEF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IENDDRAGHANDLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1D75ED50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75F250)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncEndDragTrigger_TypeDefinitionIndex = 43044;

	class AsyncEndDragTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IEndDragHandler_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_UNITYENGINE_EVENTSYSTEMS_IENDDRAGHANDLER_ONENDDRAG_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler* GetOnEndDragAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_GETONENDDRAGASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler* GetOnEndDragAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_GETONENDDRAGASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnEndDragAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_ONENDDRAGASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnEndDragAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_ONENDDRAGASYNC_1_OFFSET))(this, a1);
		}
	};
}
