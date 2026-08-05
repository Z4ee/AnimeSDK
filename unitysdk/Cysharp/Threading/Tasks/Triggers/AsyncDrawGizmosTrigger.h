#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDrawGizmosHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FBB0460)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FBB03B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FBB0610)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_OFFSET UNITYSDK_OFFSET(0x1FBB04C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB0720)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDrawGizmosTrigger_TypeDefinitionIndex = 31983;

	class AsyncDrawGizmosTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler* GetOnDrawGizmosAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler* GetOnDrawGizmosAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnDrawGizmosAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnDrawGizmosAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
