#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FBE9310)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1FBE9240)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROYASYNC_OFFSET UNITYSDK_OFFSET(0x1FBE9370)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FBE9320)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE9500)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDestroyTrigger_TypeDefinitionIndex = 31933;

	class AsyncDestroyTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean awakeCalled; // 0x18
		::System::Boolean called; // 0x19
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnDestroyAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROYASYNC_OFFSET))(this);
		}
	};
}
