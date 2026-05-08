#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C2670C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1C267170)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONEND_OFFSET UNITYSDK_OFFSET(0x1C267360)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C267440)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1C2672B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_TASKEXECUTING_OFFSET UNITYSDK_OFFSET(0x1C267250)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2674A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C267530)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1C2675C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1C267650)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C2676E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1C267770)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int TaskGuard_TypeDefinitionIndex = 31822;

	class TaskGuard : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* maxTaskAccessCount; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* waitUntilTaskAvailable; // 0x60
		::Il2CppArray<::BehaviorDesigner::Runtime::Tasks::TaskGuard*>* linkedTaskGuards; // 0x68
		::System::Int32 executingTasks; // 0x70
		::System::Boolean executing; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD__CTOR_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONCHILDSTARTED_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_OVERRIDESTATUS_OFFSET))(this, status);
		}

		::System::Void taskExecuting(::System::Boolean increase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_TASKEXECUTING_OFFSET))(this, increase);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONRESET_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Void __base_OnChildStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONCHILDSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_OVERRIDESTATUS_OFFSET))(this, P0);
		}
	};
}
