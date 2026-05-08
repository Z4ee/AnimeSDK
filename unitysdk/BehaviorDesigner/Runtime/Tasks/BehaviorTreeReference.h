#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/BehaviorReference.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORTREEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B6900)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int BehaviorTreeReference_TypeDefinitionIndex = 31784;

	class BehaviorTreeReference : public ::BehaviorDesigner::Runtime::Tasks::BehaviorReference
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BEHAVIORTREEREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
