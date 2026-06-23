#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E5BDE10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1E5BDEC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONEND_OFFSET UNITYSDK_OFFSET(0x1E5BE0B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E5BE190)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1E5BE000)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_TASKEXECUTING_OFFSET UNITYSDK_OFFSET(0x1E5BDFA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BE1E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E5BE270)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1E5BE300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1E5BE390)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E5BE420)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1E5BE4B0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int TaskGuard_TypeDefinitionIndex = 33373;

	class TaskGuard : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* waitUntilTaskAvailable; // 0x58
		::Il2CppArray<::BehaviorDesigner::Runtime::Tasks::TaskGuard*>* linkedTaskGuards; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* maxTaskAccessCount; // 0x68
		::System::Boolean executing; // 0x70
		::System::Int32 executingTasks; // 0x74

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
