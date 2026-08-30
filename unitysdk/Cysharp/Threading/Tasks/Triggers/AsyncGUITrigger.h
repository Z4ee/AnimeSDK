#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnGUIHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_GETONGUIASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D75F760)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_GETONGUIASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D75F6C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUIASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D75F960)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUIASYNC_OFFSET UNITYSDK_OFFSET(0x1D75F7C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUI_OFFSET UNITYSDK_OFFSET(0x1D75F6B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75FAD0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncGUITrigger_TypeDefinitionIndex = 42966;

	class AsyncGUITrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUI_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler* GetOnGUIAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_GETONGUIASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler* GetOnGUIAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_GETONGUIASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnGUIAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUIASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnGUIAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUIASYNC_1_OFFSET))(this, a1);
		}
	};
}
