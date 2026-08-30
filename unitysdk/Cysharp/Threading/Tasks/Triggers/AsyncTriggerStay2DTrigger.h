#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerStay2DHandler; }
namespace UnityEngine { class Collider2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1CE045E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1CE04510)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CE04820)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x1CE04640)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2D_OFFSET UNITYSDK_OFFSET(0x1CE044A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE049A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerStay2DTrigger_TypeDefinitionIndex = 43024;

	class AsyncTriggerStay2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collider2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerStay2D(::UnityEngine::Collider2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2D_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerStay2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerStay2DAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_1_OFFSET))(this, a1);
		}
	};
}
