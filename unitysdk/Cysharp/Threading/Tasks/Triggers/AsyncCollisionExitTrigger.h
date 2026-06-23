#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionExitHandler; }
namespace UnityEngine { class Collision; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_GETONCOLLISIONEXITASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E6C2460)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_GETONCOLLISIONEXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E6C2380)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E6C2640)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXITASYNC_OFFSET UNITYSDK_OFFSET(0x1E6C24C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1E6C2310)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C2760)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionExitTrigger_TypeDefinitionIndex = 31351;

	class AsyncCollisionExitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* coll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXIT_OFFSET))(this, coll);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler* GetOnCollisionExitAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_GETONCOLLISIONEXITASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler* GetOnCollisionExitAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_GETONCOLLISIONEXITASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionExitAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXITASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionExitAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXITASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
