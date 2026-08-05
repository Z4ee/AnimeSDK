#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerEnter2DHandler; }
namespace UnityEngine { class Collider2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FC34520)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FC34450)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FC34700)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x1FC34580)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1FC343E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC34820)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerEnter2DTrigger_TypeDefinitionIndex = 32039;

	class AsyncTriggerEnter2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collider2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2D_OFFSET))(this, other);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler* GetOnTriggerEnter2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler* GetOnTriggerEnter2DAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerEnter2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerEnter2DAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
