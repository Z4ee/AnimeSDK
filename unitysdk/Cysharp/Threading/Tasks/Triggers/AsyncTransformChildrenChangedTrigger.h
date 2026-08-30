#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTransformChildrenChangedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA71AB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA71A00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA71CB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x1EA71B10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1EA719F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA71E20)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTransformChildrenChangedTrigger_TypeDefinitionIndex = 43010;

	class AsyncTransformChildrenChangedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler* GetOnTransformChildrenChangedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler* GetOnTransformChildrenChangedAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnTransformChildrenChangedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnTransformChildrenChangedAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_1_OFFSET))(this, a1);
		}
	};
}
