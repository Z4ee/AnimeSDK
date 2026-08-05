#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRectTransformDimensionsChangeHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FBB14D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FBB1420)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FBB1680)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET UNITYSDK_OFFSET(0x1FBB1530)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1FBB1400)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB1790)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRectTransformDimensionsChangeTrigger_TypeDefinitionIndex = 32023;

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

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler* GetOnRectTransformDimensionsChangeAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnRectTransformDimensionsChangeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnRectTransformDimensionsChangeAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
