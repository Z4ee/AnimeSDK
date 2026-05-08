#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ParentTask.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x1AD31350)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD313A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR___BASE_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x1AD31430)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Decorator_TypeDefinitionIndex = 31816;

	class Decorator : public ::BehaviorDesigner::Runtime::Tasks::ParentTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR__CTOR_OFFSET))(this);
		}

		::System::Int32 MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR_MAXCHILDREN_OFFSET))(this);
		}

		::System::Int32 __base_MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR___BASE_MAXCHILDREN_OFFSET))(this);
		}
	};
}
