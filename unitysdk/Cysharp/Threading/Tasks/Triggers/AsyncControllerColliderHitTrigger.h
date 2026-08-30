#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnControllerColliderHitHandler; }
namespace UnityEngine { class ControllerColliderHit; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_GETONCONTROLLERCOLLIDERHITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D75C5C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_GETONCONTROLLERCOLLIDERHITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D75C4F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D75C800)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHITASYNC_OFFSET UNITYSDK_OFFSET(0x1D75C620)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1D75C480)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75C980)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncControllerColliderHitTrigger_TypeDefinitionIndex = 42956;

	class AsyncControllerColliderHitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::ControllerColliderHit*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnControllerColliderHit(::UnityEngine::ControllerColliderHit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControllerColliderHit*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* GetOnControllerColliderHitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_GETONCONTROLLERCOLLIDERHITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* GetOnControllerColliderHitAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_GETONCONTROLLERCOLLIDERHITASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*> OnControllerColliderHitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*> OnControllerColliderHitAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHITASYNC_1_OFFSET))(this, a1);
		}
	};
}
