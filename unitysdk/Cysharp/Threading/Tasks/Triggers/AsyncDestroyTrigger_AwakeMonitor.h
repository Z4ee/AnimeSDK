#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Triggers { class AsyncDestroyTrigger; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKEMONITOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D75D1B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKEMONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75CEC0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDestroyTrigger_AwakeMonitor_TypeDefinitionIndex = 42911;

	class AsyncDestroyTrigger_AwakeMonitor : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* trigger; // 0x10

		::System::Void _ctor(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKEMONITOR__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKEMONITOR_MOVENEXT_OFFSET))(this);
		}
	};
}
