#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnApplicationQuitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D758410)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D758370)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D758610)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET UNITYSDK_OFFSET(0x1D758470)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1D758360)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D758780)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncApplicationQuitTrigger_TypeDefinitionIndex = 42932;

	class AsyncApplicationQuitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* GetOnApplicationQuitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* GetOnApplicationQuitAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnApplicationQuitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnApplicationQuitAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_1_OFFSET))(this, a1);
		}
	};
}
