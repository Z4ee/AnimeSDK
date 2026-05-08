#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionEnterHandler; }
namespace UnityEngine { class Collision; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C4D8D30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C4D8C60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C4D8F00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_OFFSET UNITYSDK_OFFSET(0x1C4D8D90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1C4D8BF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D9020)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionEnterTrigger_TypeDefinitionIndex = 28691;

	class AsyncCollisionEnterTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* coll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTER_OFFSET))(this, coll);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionEnterAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionEnterAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
