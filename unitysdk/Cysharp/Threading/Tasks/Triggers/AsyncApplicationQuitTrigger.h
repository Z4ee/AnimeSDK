#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnApplicationQuitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FB54290)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FB541E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FB54440)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET UNITYSDK_OFFSET(0x1FB542F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1FB541C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB54550)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncApplicationQuitTrigger_TypeDefinitionIndex = 31955;

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

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* GetOnApplicationQuitAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnApplicationQuitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnApplicationQuitAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
