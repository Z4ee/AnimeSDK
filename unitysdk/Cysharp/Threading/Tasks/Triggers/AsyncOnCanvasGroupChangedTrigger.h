#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCanvasGroupChangedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E7309B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E730900)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E730B70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x1E730A10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1E7308E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E730C80)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncOnCanvasGroupChangedTrigger_TypeDefinitionIndex = 31345;

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
