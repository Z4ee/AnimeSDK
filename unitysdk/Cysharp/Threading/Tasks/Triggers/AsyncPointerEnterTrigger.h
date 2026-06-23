#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerEnterHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_GETONPOINTERENTERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E8432D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_GETONPOINTERENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E8431F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_ONPOINTERENTERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E8434B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_ONPOINTERENTERASYNC_OFFSET UNITYSDK_OFFSET(0x1E843330)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERENTERHANDLER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1E843180)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8435D0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerEnterTrigger_TypeDefinitionIndex = 31457;

	class AsyncPointerEnterTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERENTERHANDLER_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler* GetOnPointerEnterAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_GETONPOINTERENTERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler* GetOnPointerEnterAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_GETONPOINTERENTERASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerEnterAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_ONPOINTERENTERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerEnterAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_ONPOINTERENTERASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
