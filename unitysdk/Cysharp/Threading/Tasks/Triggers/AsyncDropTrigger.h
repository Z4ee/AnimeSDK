#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDropHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FBDBCC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FBDBBF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FBDBEA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_OFFSET UNITYSDK_OFFSET(0x1FBDBD20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_UNITYENGINE_EVENTSYSTEMS_IDROPHANDLER_ONDROP_OFFSET UNITYSDK_OFFSET(0x1FBDBB80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDBFC0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDropTrigger_TypeDefinitionIndex = 32065;

	class AsyncDropTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IDropHandler_OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_UNITYENGINE_EVENTSYSTEMS_IDROPHANDLER_ONDROP_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler* GetOnDropAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler* GetOnDropAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnDropAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnDropAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
