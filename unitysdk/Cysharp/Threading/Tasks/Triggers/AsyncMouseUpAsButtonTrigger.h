#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseUpAsButtonHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E7D0380)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E7D02D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E7D0540)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_OFFSET UNITYSDK_OFFSET(0x1E7D03E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTON_OFFSET UNITYSDK_OFFSET(0x1E7D02B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D0650)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseUpAsButtonTrigger_TypeDefinitionIndex = 31387;

	class AsyncMouseUpAsButtonTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnMouseUpAsButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTON_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler* GetOnMouseUpAsButtonAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler* GetOnMouseUpAsButtonAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseUpAsButtonAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseUpAsButtonAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
