#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

#define NODECANVAS_TASKS_CONDITIONS_DEBUGCONDITION_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EA9FC30)
#define NODECANVAS_TASKS_CONDITIONS_DEBUGCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9FC40)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int DebugCondition_TypeDefinitionIndex = 29881;

	class DebugCondition : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_DEBUGCONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_DEBUGCONDITION_ONCHECK_OFFSET))(this);
		}
	};
}
