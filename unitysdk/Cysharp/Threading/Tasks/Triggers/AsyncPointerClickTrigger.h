#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerClickHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C3818A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C3817D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C381A70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_OFFSET UNITYSDK_OFFSET(0x1C381900)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERCLICKHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1C381760)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C381B90)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerClickTrigger_TypeDefinitionIndex = 28797;

	class AsyncPointerClickTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERCLICKHANDLER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler* GetOnPointerClickAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler* GetOnPointerClickAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerClickAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerClickAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
