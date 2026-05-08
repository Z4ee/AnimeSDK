#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionStay2DHandler; }
namespace UnityEngine { class Collision2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C3241A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C3240D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C324370)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x1C324200)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2D_OFFSET UNITYSDK_OFFSET(0x1C324060)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C324490)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionStay2DTrigger_TypeDefinitionIndex = 28701;

	class AsyncCollisionStay2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionStay2D(::UnityEngine::Collision2D* coll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2D_OFFSET))(this, coll);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler* GetOnCollisionStay2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler* GetOnCollisionStay2DAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionStay2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionStay2DAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
