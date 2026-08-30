#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerStayHandler; }
namespace UnityEngine { class Collider; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA76BB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA76AD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA76DF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x1EA76C10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1EA76A60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA76F70)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerStayTrigger_TypeDefinitionIndex = 43022;

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
