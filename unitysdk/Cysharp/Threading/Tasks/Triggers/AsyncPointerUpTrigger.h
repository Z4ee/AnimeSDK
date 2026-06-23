#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerUpHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E730E30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E730D50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E731010)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_OFFSET UNITYSDK_OFFSET(0x1E730E90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERUPHANDLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1E730CE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E731130)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerUpTrigger_TypeDefinitionIndex = 31461;

	class AsyncPointerUpTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERUPHANDLER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler* GetOnPointerUpAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler* GetOnPointerUpAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerUpAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerUpAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
