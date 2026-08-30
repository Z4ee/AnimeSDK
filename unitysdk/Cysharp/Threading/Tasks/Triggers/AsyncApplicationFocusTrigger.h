#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnApplicationFocusHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA5F890)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA5F7E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA5FA90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_OFFSET UNITYSDK_OFFSET(0x1EA5F8F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1EA5F7D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5FC00)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncApplicationFocusTrigger_TypeDefinitionIndex = 42928;

	class AsyncApplicationFocusTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* GetOnApplicationFocusAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* GetOnApplicationFocusAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> OnApplicationFocusAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> OnApplicationFocusAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_1_OFFSET))(this, a1);
		}
	};
}
