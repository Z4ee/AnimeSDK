#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_IDLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B428890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_IDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4288E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_IDLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B428970)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Idle_TypeDefinitionIndex = 31785;

	class Idle : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_IDLE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_IDLE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_IDLE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
