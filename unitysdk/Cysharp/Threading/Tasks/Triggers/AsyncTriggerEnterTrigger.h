#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerEnterHandler; }
namespace UnityEngine { class Collider; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_GETONTRIGGERENTERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E6C3270)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_GETONTRIGGERENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E6C3190)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E6C3450)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTERASYNC_OFFSET UNITYSDK_OFFSET(0x1E6C32D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1E6C3120)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3570)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerEnterTrigger_TypeDefinitionIndex = 31417;

	class AsyncTriggerEnterTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collider*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTER_OFFSET))(this, other);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler* GetOnTriggerEnterAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_GETONTRIGGERENTERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler* GetOnTriggerEnterAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_GETONTRIGGERENTERASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*> OnTriggerEnterAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*> OnTriggerEnterAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTERASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
