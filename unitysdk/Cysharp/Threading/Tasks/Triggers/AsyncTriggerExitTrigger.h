#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerExitHandler; }
namespace UnityEngine { class Collider; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D76B2B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D76B1E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D76B4F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x1D76B310)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1D76B170)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D76B670)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerExitTrigger_TypeDefinitionIndex = 43018;

	class AsyncTriggerExitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collider*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler* GetOnTriggerExitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler* GetOnTriggerExitAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*> OnTriggerExitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*> OnTriggerExitAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_1_OFFSET))(this, a1);
		}
	};
}
