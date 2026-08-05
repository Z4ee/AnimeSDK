#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Task.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DD290)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Conditional_TypeDefinitionIndex = 33995;

	class Conditional : public ::BehaviorDesigner::Runtime::Tasks::Task
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONAL__CTOR_OFFSET))(this);
		}
	};
}
