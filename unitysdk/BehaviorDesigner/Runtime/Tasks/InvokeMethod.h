#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D7E5150)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7E4550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E52E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D7E5370)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7E5400)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int InvokeMethod_TypeDefinitionIndex = 33341;

	class InvokeMethod : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* componentName; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedString* methodName; // 0x68
		::BehaviorDesigner::Runtime::SharedVariable* storeResult; // 0x70
		::BehaviorDesigner::Runtime::SharedVariable* parameter1; // 0x78
		::BehaviorDesigner::Runtime::SharedVariable* parameter3; // 0x80
		::BehaviorDesigner::Runtime::SharedVariable* parameter2; // 0x88
		::BehaviorDesigner::Runtime::SharedVariable* parameter4; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVOKEMETHOD___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
