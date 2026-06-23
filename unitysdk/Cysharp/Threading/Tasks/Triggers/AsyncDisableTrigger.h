#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDisableHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_GETONDISABLEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E82A880)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_GETONDISABLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E82A7D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E82AA40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLEASYNC_OFFSET UNITYSDK_OFFSET(0x1E82A8E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E82A7B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82AB50)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDisableTrigger_TypeDefinitionIndex = 31361;

	class AsyncDisableTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler* GetOnDisableAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_GETONDISABLEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler* GetOnDisableAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_GETONDISABLEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnDisableAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnDisableAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
