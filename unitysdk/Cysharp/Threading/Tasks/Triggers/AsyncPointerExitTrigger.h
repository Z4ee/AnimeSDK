#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerExitHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA6D790)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA6D6B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA6D9D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x1EA6D7F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTEREXITHANDLER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1EA6D640)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6DB50)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerExitTrigger_TypeDefinitionIndex = 43056;

	class AsyncPointerExitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTEREXITHANDLER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler* GetOnPointerExitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler* GetOnPointerExitAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerExitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerExitAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_1_OFFSET))(this, a1);
		}
	};
}
