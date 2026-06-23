#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnEnableHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E84C4A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E84C3F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E84C660)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_OFFSET UNITYSDK_OFFSET(0x1E84C500)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E84C3D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84C770)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncEnableTrigger_TypeDefinitionIndex = 31367;

	class AsyncEnableTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler* GetOnEnableAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler* GetOnEnableAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnEnableAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnEnableAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
