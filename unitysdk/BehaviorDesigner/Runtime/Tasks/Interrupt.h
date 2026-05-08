#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B04D470)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_DOINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1B04D510)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1B04D4C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_ONEND_OFFSET UNITYSDK_OFFSET(0x1B04D660)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1B04D620)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B04D6B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B04D750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1B04D7E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1B04D870)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1B04D900)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Interrupt_TypeDefinitionIndex = 31817;

	class Interrupt : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::TaskStatus interruptStatus; // 0x58
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT__CTOR_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void DoInterrupt(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_DOINTERRUPT_OFFSET))(this, status);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_OVERRIDESTATUS_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT___BASE_ONEND_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INTERRUPT___BASE_OVERRIDESTATUS_OFFSET))(this);
		}
	};
}
