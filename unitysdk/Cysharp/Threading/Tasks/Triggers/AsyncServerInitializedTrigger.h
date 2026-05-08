#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnServerInitializedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_GETONSERVERINITIALIZEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C324990)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_GETONSERVERINITIALIZEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C3248F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C324B40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZEDASYNC_OFFSET UNITYSDK_OFFSET(0x1C3249F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1C3248D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C324C50)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncServerInitializedTrigger_TypeDefinitionIndex = 28755;

	class AsyncServerInitializedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnServerInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler* GetOnServerInitializedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_GETONSERVERINITIALIZEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler* GetOnServerInitializedAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_GETONSERVERINITIALIZEDASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnServerInitializedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnServerInitializedAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZEDASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
