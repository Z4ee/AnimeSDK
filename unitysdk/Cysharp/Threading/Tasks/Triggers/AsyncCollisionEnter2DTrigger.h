#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionEnter2DHandler; }
namespace UnityEngine { class Collision2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA62480)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA623A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA626C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x1EA624E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1EA62330)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA62840)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionEnter2DTrigger_TypeDefinitionIndex = 42946;

	class AsyncCollisionEnter2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2D_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionEnter2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionEnter2DAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_1_OFFSET))(this, a1);
		}
	};
}
