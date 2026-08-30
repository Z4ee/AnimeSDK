#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseExitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA69A10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA69960)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA69C10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET UNITYSDK_OFFSET(0x1EA69A70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1EA69950)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA69D80)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseExitTrigger_TypeDefinitionIndex = 42978;

	class AsyncMouseExitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnMouseExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXIT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler* GetOnMouseExitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler* GetOnMouseExitAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseExitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseExitAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_1_OFFSET))(this, a1);
		}
	};
}
