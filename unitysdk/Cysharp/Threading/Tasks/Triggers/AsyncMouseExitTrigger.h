#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseExitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E665470)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E6653C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E665630)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET UNITYSDK_OFFSET(0x1E6654D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1E6653A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E665740)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseExitTrigger_TypeDefinitionIndex = 31381;

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

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler* GetOnMouseExitAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseExitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseExitAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
