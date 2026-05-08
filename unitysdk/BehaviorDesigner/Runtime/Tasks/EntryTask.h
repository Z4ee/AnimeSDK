#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ParentTask.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_ENTRYTASK_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B4285D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_ENTRYTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B428760)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_ENTRYTASK___BASE_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B4287F0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int EntryTask_TypeDefinitionIndex = 31825;

	class EntryTask : public ::BehaviorDesigner::Runtime::Tasks::ParentTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_ENTRYTASK__CTOR_OFFSET))(this);
		}

		::System::Int32 MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_ENTRYTASK_MAXCHILDREN_OFFSET))(this);
		}

		::System::Int32 __base_MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_ENTRYTASK___BASE_MAXCHILDREN_OFFSET))(this);
		}
	};
}
