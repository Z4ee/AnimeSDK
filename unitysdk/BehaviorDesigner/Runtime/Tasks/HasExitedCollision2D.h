#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Collision2D; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1F8029F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_ONEND_OFFSET UNITYSDK_OFFSET(0x1F8029B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F802C10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F802960)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F8028F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F802C90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1F802D50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F802DE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F802E70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F802F00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F802F90)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasExitedCollision2D_TypeDefinitionIndex = 33949;

	class HasExitedCollision2D : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* collidedGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x58
		::System::Boolean exitedCollision; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_ONEND_OFFSET))(this);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_ONCOLLISIONEXIT2D_OFFSET))(this, collision);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnCollisionExit2D(::UnityEngine::Collision2D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_ONCOLLISIONEXIT2D_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDCOLLISION2D___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
