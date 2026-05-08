#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_AWAKEASYNC_OFFSET UNITYSDK_OFFSET(0x1C518040)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5181A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAwakeTrigger_TypeDefinitionIndex = 28656;

	class AsyncAwakeTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask AwakeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_AWAKEASYNC_OFFSET))(this);
		}
	};
}
