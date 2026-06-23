#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerExitHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E84CCF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E84CC10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E84CED0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x1E84CD50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTEREXITHANDLER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1E84CBA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84CFF0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerExitTrigger_TypeDefinitionIndex = 31459;

	class AsyncPointerExitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTEREXITHANDLER_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler* GetOnPointerExitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler* GetOnPointerExitAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerExitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerExitAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
