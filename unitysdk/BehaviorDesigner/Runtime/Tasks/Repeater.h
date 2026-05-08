#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C04CDB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1C04CF70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_ONEND_OFFSET UNITYSDK_OFFSET(0x1C04CFC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C04D010)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C04D070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C04D110)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1C04D1A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1C04D230)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REPEATER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C04D2C0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Repeater_TypeDefinitionIndex = 31819;

	class Repeater : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* endOnFailure; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* repeatForever; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* count; // 0x68
		::System::Int32 executionCount; // 0x70
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x74

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
