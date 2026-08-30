#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnBeforeTransformParentChangedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_GETONBEFORETRANSFORMPARENTCHANGEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA61540)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_GETONBEFORETRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA61490)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA61740)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x1EA615A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1EA61480)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA618B0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncBeforeTransformParentChangedTrigger_TypeDefinitionIndex = 42940;

	class AsyncBeforeTransformParentChangedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler* GetOnBeforeTransformParentChangedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_GETONBEFORETRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler* GetOnBeforeTransformParentChangedAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_GETONBEFORETRANSFORMPARENTCHANGEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnBeforeTransformParentChangedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnBeforeTransformParentChangedAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_1_OFFSET))(this, a1);
		}
	};
}
