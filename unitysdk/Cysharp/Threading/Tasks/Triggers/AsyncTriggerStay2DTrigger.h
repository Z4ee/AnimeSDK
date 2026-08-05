#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerStay2DHandler; }
namespace UnityEngine { class Collider2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FB137F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FB13720)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FB139D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x1FB13850)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2D_OFFSET UNITYSDK_OFFSET(0x1FB136B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB13AF0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerStay2DTrigger_TypeDefinitionIndex = 32047;

	class AsyncTriggerStay2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collider2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerStay2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2D_OFFSET))(this, other);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerStay2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerStay2DAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
