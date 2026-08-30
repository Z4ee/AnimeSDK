#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRectTransformDimensionsChangeHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D766E70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D766DD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D767070)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET UNITYSDK_OFFSET(0x1D766ED0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D766DC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7671E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRectTransformDimensionsChangeTrigger_TypeDefinitionIndex = 43000;

	class AsyncRectTransformDimensionsChangeTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler* GetOnRectTransformDimensionsChangeAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler* GetOnRectTransformDimensionsChangeAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnRectTransformDimensionsChangeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnRectTransformDimensionsChangeAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_1_OFFSET))(this, a1);
		}
	};
}
