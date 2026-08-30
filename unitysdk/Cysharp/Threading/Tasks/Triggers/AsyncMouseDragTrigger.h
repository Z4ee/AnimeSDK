#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseDragHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA69170)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA690C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA69370)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x1EA691D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x1EA690B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA694E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseDragTrigger_TypeDefinitionIndex = 42974;

	class AsyncMouseDragTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnMouseDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAG_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler* GetOnMouseDragAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler* GetOnMouseDragAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseDragAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseDragAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_1_OFFSET))(this, a1);
		}
	};
}
