#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTransformParentChangedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E6BD790)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E6BD6E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E6BD950)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x1E6BD7F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E6BD6C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BDA60)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTransformParentChangedTrigger_TypeDefinitionIndex = 31415;

	class AsyncTransformParentChangedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler* GetOnTransformParentChangedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler* GetOnTransformParentChangedAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnTransformParentChangedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnTransformParentChangedAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
