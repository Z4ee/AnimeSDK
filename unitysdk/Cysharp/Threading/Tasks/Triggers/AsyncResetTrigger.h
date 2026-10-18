#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncResetHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F109ED0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F109E20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F10A0D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_OFFSET UNITYSDK_OFFSET(0x1F109F30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESET_OFFSET UNITYSDK_OFFSET(0x1F109E10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F10A240)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncResetTrigger_TypeDefinitionIndex = 38615;

	class AsyncResetTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESET_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* GetResetAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* GetResetAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask ResetAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask ResetAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_1_OFFSET))(this, a1);
		}
	};
}
