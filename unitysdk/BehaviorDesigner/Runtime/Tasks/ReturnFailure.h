#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D4AB8A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE_DECORATE_OFFSET UNITYSDK_OFFSET(0x1D4AB940)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1D4AB8F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE_ONEND_OFFSET UNITYSDK_OFFSET(0x1D4AB990)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AB9E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D4ABA70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE___BASE_DECORATE_OFFSET UNITYSDK_OFFSET(0x1D4ABB00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1D4ABB90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1D4ABC20)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ReturnFailure_TypeDefinitionIndex = 33371;

	class ReturnFailure : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE__CTOR_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE_DECORATE_OFFSET))(this, status);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE___BASE_CANEXECUTE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE___BASE_DECORATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RETURNFAILURE___BASE_ONEND_OFFSET))(this);
		}
	};
}
