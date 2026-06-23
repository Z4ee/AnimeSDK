#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Collision; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1D4AAD80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_ONEND_OFFSET UNITYSDK_OFFSET(0x1D4AAD40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D4AAFA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D4AACF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1D4AAC80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AAFF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1D4AB0B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1D4AB140)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D4AB1D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D4AB260)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1D4AB2F0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasExitedCollision_TypeDefinitionIndex = 33312;

	class HasExitedCollision : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x50
		::BehaviorDesigner::Runtime::SharedGameObject* collidedGameObject; // 0x58
		::System::Boolean exitedCollision; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_ONEND_OFFSET))(this);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_ONCOLLISIONEXIT_OFFSET))(this, collision);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnCollisionExit(::UnityEngine::Collision* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_ONCOLLISIONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
