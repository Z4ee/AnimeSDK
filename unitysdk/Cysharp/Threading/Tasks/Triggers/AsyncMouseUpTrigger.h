#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseUpHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C428430)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C428390)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C4285E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_OFFSET UNITYSDK_OFFSET(0x1C428490)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1C428370)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4286F0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseUpTrigger_TypeDefinitionIndex = 28729;

	class AsyncMouseUpTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnMouseUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUP_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler* GetOnMouseUpAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler* GetOnMouseUpAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseUpAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseUpAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
