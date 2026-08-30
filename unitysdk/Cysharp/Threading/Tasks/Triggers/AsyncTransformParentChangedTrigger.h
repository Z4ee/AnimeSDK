#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTransformParentChangedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA71F00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA71E50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA72100)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x1EA71F60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1EA71E40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA72270)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTransformParentChangedTrigger_TypeDefinitionIndex = 43012;

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

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler* GetOnTransformParentChangedAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnTransformParentChangedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnTransformParentChangedAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_1_OFFSET))(this, a1);
		}
	};
}
