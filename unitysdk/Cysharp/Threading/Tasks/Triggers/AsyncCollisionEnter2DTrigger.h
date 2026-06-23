#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionEnter2DHandler; }
namespace UnityEngine { class Collision2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E6C1FB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E6C1ED0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E6C2190)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x1E6C2010)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1E6C1E60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C22B0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionEnter2DTrigger_TypeDefinitionIndex = 31349;

	class AsyncCollisionEnter2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* coll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2D_OFFSET))(this, coll);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionEnter2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionEnter2DAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
