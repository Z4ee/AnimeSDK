#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F9AA8D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1F9AA980)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONEND_OFFSET UNITYSDK_OFFSET(0x1F9AAB60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9AAC40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1F9AAAB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD_TASKEXECUTING_OFFSET UNITYSDK_OFFSET(0x1F9AAA60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9AAC90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F9AAD20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1F9AADB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F9AAE40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9AAED0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKGUARD___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1F9AAF60)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int TaskGuard_TypeDefinitionIndex = 34009;

	class TaskGuard : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::Tasks::TaskGuard*>* linkedTaskGuards; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* maxTaskAccessCount; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* waitUntilTaskAvailable; // 0x68
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
