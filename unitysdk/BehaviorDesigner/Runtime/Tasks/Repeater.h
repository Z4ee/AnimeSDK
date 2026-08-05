#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F7C7090)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F7C7250)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_ONEND_OFFSET UNITYSDK_OFFSET(0x1F7C72A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7C72F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C7350)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F7C73F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F7C7480)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F7C7510)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7C75A0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Repeater_TypeDefinitionIndex = 34006;

	class Repeater : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* repeatForever; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* count; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* endOnFailure; // 0x68
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x70
		::System::Int32 executionCount; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_ONRESET_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_ONRESET_OFFSET))(this);
		}
	};
}
