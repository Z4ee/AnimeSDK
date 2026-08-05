#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F1E40A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_DECORATE_OFFSET UNITYSDK_OFFSET(0x1F1E4140)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F1E40F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_ONEND_OFFSET UNITYSDK_OFFSET(0x1F1E41A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E41F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F1E4280)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_DECORATE_OFFSET UNITYSDK_OFFSET(0x1F1E4310)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F1E43A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F1E4430)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Inverter_TypeDefinitionIndex = 34005;

	class Inverter : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_DECORATE_OFFSET))(this, status);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_CANEXECUTE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_DECORATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_ONEND_OFFSET))(this);
		}
	};
}
