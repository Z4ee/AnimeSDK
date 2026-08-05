#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ParentTask.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNKNOWNPARENTTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F837980)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int UnknownParentTask_TypeDefinitionIndex = 34016;

	class UnknownParentTask : public ::BehaviorDesigner::Runtime::Tasks::ParentTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNKNOWNPARENTTASK__CTOR_OFFSET))(this);
		}
	};
}
