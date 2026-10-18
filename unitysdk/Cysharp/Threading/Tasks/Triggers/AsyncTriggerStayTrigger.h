#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerStayHandler; }
namespace UnityEngine { class Collider; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F110970)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1108A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F110BB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x1F1109D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1F110830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F110D30)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerStayTrigger_TypeDefinitionIndex = 38607;

	class AsyncTriggerStayTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collider*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAY_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler* GetOnTriggerStayAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler* GetOnTriggerStayAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*> OnTriggerStayAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*> OnTriggerStayAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_1_OFFSET))(this, a1);
		}
	};
}
