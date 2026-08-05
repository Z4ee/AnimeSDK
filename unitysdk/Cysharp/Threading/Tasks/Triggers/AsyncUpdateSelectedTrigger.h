#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnUpdateSelectedHandler; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FB13C90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FB13BC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FB13E70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x1FB13CF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_UNITYENGINE_EVENTSYSTEMS_IUPDATESELECTEDHANDLER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1FB13B50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB13F90)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncUpdateSelectedTrigger_TypeDefinitionIndex = 32089;

	class AsyncUpdateSelectedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::BaseEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IUpdateSelectedHandler_OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_UNITYENGINE_EVENTSYSTEMS_IUPDATESELECTEDHANDLER_ONUPDATESELECTED_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler* GetOnUpdateSelectedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler* GetOnUpdateSelectedAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnUpdateSelectedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnUpdateSelectedAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
