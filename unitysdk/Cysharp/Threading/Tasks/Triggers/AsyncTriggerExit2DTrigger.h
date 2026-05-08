#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerExit2DHandler; }
namespace UnityEngine { class Collider2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C4F7540)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C4F7470)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C4F7710)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x1C4F75A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1C4F7400)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F7830)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerExit2DTrigger_TypeDefinitionIndex = 28767;

	class AsyncTriggerExit2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collider2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2D_OFFSET))(this, other);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler* GetOnTriggerExit2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler* GetOnTriggerExit2DAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerExit2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerExit2DAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
