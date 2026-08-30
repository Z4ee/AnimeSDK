#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnUpdateSelectedHandler; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1CE05020)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1CE04F50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CE05260)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x1CE05080)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_UNITYENGINE_EVENTSYSTEMS_IUPDATESELECTEDHANDLER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1CE04EE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE053E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncUpdateSelectedTrigger_TypeDefinitionIndex = 43066;

	class AsyncUpdateSelectedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::BaseEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IUpdateSelectedHandler_OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_UNITYENGINE_EVENTSYSTEMS_IUPDATESELECTEDHANDLER_ONUPDATESELECTED_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler* GetOnUpdateSelectedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler* GetOnUpdateSelectedAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnUpdateSelectedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnUpdateSelectedAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_1_OFFSET))(this, a1);
		}
	};
}
