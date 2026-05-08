#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Triggers { class AsyncDestroyTrigger; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKEMONITOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C440660)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKEMONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C440650)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDestroyTrigger_AwakeMonitor_TypeDefinitionIndex = 28658;

	class AsyncDestroyTrigger_AwakeMonitor : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* trigger; // 0x10

		::System::Void _ctor(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKEMONITOR__CTOR_OFFSET))(this, trigger);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKEMONITOR_MOVENEXT_OFFSET))(this);
		}
	};
}
