#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnScrollHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C4F70B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C4F6FE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C4F7280)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET UNITYSDK_OFFSET(0x1C4F7110)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1C4F6F70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F73A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncScrollTrigger_TypeDefinitionIndex = 28807;

	class AsyncScrollTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IScrollHandler_OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler* GetOnScrollAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler* GetOnScrollAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnScrollAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnScrollAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
