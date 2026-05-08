#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_STARTASYNC_OFFSET UNITYSDK_OFFSET(0x1C4442B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_START_OFFSET UNITYSDK_OFFSET(0x1C444290)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C444410)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncStartTrigger_TypeDefinitionIndex = 28660;

	class AsyncStartTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Boolean called; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_START_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask StartAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_STARTASYNC_OFFSET))(this);
		}
	};
}
