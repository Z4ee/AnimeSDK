#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerClickHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E6C2910)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E6C2830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E6C2AF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_OFFSET UNITYSDK_OFFSET(0x1E6C2970)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERCLICKHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1E6C27C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C2C10)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerClickTrigger_TypeDefinitionIndex = 31453;

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
