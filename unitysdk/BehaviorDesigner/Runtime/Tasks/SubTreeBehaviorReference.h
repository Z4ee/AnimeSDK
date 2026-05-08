#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace BehaviorDesigner::Runtime { class SharedNamedVariable; }
namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BAA29D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BAA27A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BAA2800)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE_SETLINKSUBBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1BAA2750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA2A30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BAA2AC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BAA2B50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BAA2BE0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int SubTreeBehaviorReference_TypeDefinitionIndex = 31826;

	class SubTreeBehaviorReference : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::ExternalBehavior* externalBehavior; // 0x58
		::BehaviorDesigner::Runtime::Behavior* linkedSubBehavior; // 0x60
		::System::String* SubTreeName; // 0x68
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedNamedVariable*>* variables; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void SetLinkSubBehavior(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE_SETLINKSUBBEHAVIOR_OFFSET))(this, behavior);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SUBTREEBEHAVIORREFERENCE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
