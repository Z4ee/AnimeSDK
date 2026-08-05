#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionStayHandler; }
namespace UnityEngine { class Collision; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FBB0050)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FBAFF80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FBB0230)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x1FBB00B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x1FBAFF10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB0350)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionStayTrigger_TypeDefinitionIndex = 31975;

	class AsyncCollisionStayTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionStay(::UnityEngine::Collision* coll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAY_OFFSET))(this, coll);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler* GetOnCollisionStayAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler* GetOnCollisionStayAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionStayAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionStayAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
