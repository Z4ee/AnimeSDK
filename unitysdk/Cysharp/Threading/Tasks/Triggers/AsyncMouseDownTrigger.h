#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseDownHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_GETONMOUSEDOWNASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D760E70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_GETONMOUSEDOWNASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D760DD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWNASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D761070)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWNASYNC_OFFSET UNITYSDK_OFFSET(0x1D760ED0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1D760DC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7611E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseDownTrigger_TypeDefinitionIndex = 42972;

	class AsyncMouseDownTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnMouseDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWN_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler* GetOnMouseDownAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_GETONMOUSEDOWNASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler* GetOnMouseDownAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_GETONMOUSEDOWNASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseDownAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWNASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseDownAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWNASYNC_1_OFFSET))(this, a1);
		}
	};
}
