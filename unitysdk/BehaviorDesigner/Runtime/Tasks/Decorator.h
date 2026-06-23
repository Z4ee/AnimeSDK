#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ParentTask.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D110890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1108E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR___BASE_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D110970)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Decorator_TypeDefinitionIndex = 33367;

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
