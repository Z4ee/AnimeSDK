#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCanvasGroupChangedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FB12A50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FB129A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FB12C00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x1FB12AB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1FB12980)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB12D10)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncOnCanvasGroupChangedTrigger_TypeDefinitionIndex = 31965;

	class AsyncOnCanvasGroupChangedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler* GetOnCanvasGroupChangedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler* GetOnCanvasGroupChangedAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnCanvasGroupChangedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnCanvasGroupChangedAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
