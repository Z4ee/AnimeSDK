#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncResetHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FC340C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FC34010)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FC34270)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_OFFSET UNITYSDK_OFFSET(0x1FC34120)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESET_OFFSET UNITYSDK_OFFSET(0x1FC33FF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC34380)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncResetTrigger_TypeDefinitionIndex = 32053;

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

		::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* GetResetAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask ResetAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask ResetAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
