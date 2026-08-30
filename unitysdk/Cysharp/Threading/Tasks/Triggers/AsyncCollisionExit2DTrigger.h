#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionExit2DHandler; }
namespace UnityEngine { class Collision2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D75B140)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D75B070)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D75B380)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x1D75B1A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1D75B000)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75B500)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionExit2DTrigger_TypeDefinitionIndex = 42950;

	class AsyncCollisionExit2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2D_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionExit2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionExit2DAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_1_OFFSET))(this, a1);
		}
	};
}
