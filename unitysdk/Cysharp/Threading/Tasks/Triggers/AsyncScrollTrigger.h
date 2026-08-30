#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnScrollHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA70560)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA70480)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA707A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET UNITYSDK_OFFSET(0x1EA705C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1EA70410)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA70920)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncScrollTrigger_TypeDefinitionIndex = 43060;

	class AsyncScrollTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IScrollHandler_OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler* GetOnScrollAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler* GetOnScrollAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnScrollAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnScrollAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_1_OFFSET))(this, a1);
		}
	};
}
