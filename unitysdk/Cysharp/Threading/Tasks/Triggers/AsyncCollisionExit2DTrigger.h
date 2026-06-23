#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionExit2DHandler; }
namespace UnityEngine { class Collision2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E664B90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E664AB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E664D70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x1E664BF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1E664A40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E664E90)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionExit2DTrigger_TypeDefinitionIndex = 31353;

	class AsyncCollisionExit2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* coll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2D_OFFSET))(this, coll);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionExit2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionExit2DAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
