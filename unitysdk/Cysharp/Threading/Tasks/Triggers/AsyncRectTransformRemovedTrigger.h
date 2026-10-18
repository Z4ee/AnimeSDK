#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRectTransformRemovedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_GETONRECTTRANSFORMREMOVEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F136AB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_GETONRECTTRANSFORMREMOVEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F136A10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F136CB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVEDASYNC_OFFSET UNITYSDK_OFFSET(0x1F136B10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVED_OFFSET UNITYSDK_OFFSET(0x1F136A00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F136E20)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRectTransformRemovedTrigger_TypeDefinitionIndex = 38587;

	class AsyncRectTransformRemovedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnRectTransformRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler* GetOnRectTransformRemovedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_GETONRECTTRANSFORMREMOVEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler* GetOnRectTransformRemovedAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_GETONRECTTRANSFORMREMOVEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnRectTransformRemovedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnRectTransformRemovedAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVEDASYNC_1_OFFSET))(this, a1);
		}
	};
}
