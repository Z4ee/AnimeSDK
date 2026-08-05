#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnSelectHandler; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FBE9A60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FBE9990)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FBE9C40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_OFFSET UNITYSDK_OFFSET(0x1FBE9AC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISELECTHANDLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1FBE9920)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE9D60)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncSelectTrigger_TypeDefinitionIndex = 32085;

	class AsyncSelectTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::BaseEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_ISelectHandler_OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_UNITYENGINE_EVENTSYSTEMS_ISELECTHANDLER_ONSELECT_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler* GetOnSelectAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler* GetOnSelectAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnSelectAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnSelectAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
