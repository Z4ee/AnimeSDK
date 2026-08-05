#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerDownHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_GETONPOINTERDOWNASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FBB10A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_GETONPOINTERDOWNASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FBB0FD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_ONPOINTERDOWNASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FBB1280)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_ONPOINTERDOWNASYNC_OFFSET UNITYSDK_OFFSET(0x1FBB1100)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1FBB0F60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB13A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerDownTrigger_TypeDefinitionIndex = 32075;

	class AsyncPointerDownTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler* GetOnPointerDownAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_GETONPOINTERDOWNASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler* GetOnPointerDownAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_GETONPOINTERDOWNASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerDownAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_ONPOINTERDOWNASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnPointerDownAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_ONPOINTERDOWNASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
