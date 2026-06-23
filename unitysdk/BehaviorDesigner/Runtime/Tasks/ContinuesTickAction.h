#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE052D0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ContinuesTickAction_TypeDefinitionIndex = 33333;

	class ContinuesTickAction : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKACTION__CTOR_OFFSET))(this);
		}
	};
}
