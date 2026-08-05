#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMoveHandler; }
namespace UnityEngine::EventSystems { class AxisEventData; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FC333E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FC33310)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FC335C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_OFFSET UNITYSDK_OFFSET(0x1FC33440)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1FC332A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC336E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMoveTrigger_TypeDefinitionIndex = 32071;

	class AsyncMoveTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::AxisEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IMoveHandler_OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET))(this, eventData);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler* GetOnMoveAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler* GetOnMoveAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::AxisEventData*> OnMoveAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::AxisEventData*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::AxisEventData*> OnMoveAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::AxisEventData*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
