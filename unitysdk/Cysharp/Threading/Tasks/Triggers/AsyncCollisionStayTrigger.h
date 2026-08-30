#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionStayHandler; }
namespace UnityEngine { class Collision; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D75C0A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D75BFD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D75C2E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x1D75C100)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x1D75BF60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75C460)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionStayTrigger_TypeDefinitionIndex = 42952;

	class AsyncCollisionStayTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionStay(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAY_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler* GetOnCollisionStayAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler* GetOnCollisionStayAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionStayAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionStayAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_1_OFFSET))(this, a1);
		}
	};
}
