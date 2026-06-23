#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

#define NODECANVAS_TASKS_ACTIONS_DEBUGBEEP_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1CC48AB0)
#define NODECANVAS_TASKS_ACTIONS_DEBUGBEEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC48AE0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugBeep_TypeDefinitionIndex = 29179;

	class DebugBeep : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGBEEP__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGBEEP_ONEXECUTE_OFFSET))(this);
		}
	};
}
