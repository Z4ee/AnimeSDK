#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Collider; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_ONEND_OFFSET UNITYSDK_OFFSET(0x1F7C6A20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7C6C80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1F7C6A60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7C69D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F7C6960)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C6D00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F7C6DC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7C6E50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1F7C6EE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7C6F70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F7C7000)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasEnteredTrigger_TypeDefinitionIndex = 33946;

	class HasEnteredTrigger : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* otherGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x58
		::System::Boolean enteredTrigger; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_ONEND_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_ONTRIGGERENTER_OFFSET))(this, other);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnTriggerEnter(::UnityEngine::Collider* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_ONTRIGGERENTER_OFFSET))(this, P0);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
