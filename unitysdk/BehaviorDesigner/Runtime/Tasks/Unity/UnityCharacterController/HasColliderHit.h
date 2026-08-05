#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class ControllerColliderHit; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1F60ABA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_ONEND_OFFSET UNITYSDK_OFFSET(0x1F60AB60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60ADF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60AB10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F60AAA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F60AE70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x1F60AF30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F60AFC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60B050)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60B0E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F60B170)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCharacterController
{
	inline static constexpr unsigned int HasColliderHit_TypeDefinitionIndex = 34468;

	class HasColliderHit : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x50
		::BehaviorDesigner::Runtime::SharedGameObject* collidedGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::System::Boolean enteredCollision; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_ONEND_OFFSET))(this);
		}

		::System::Void OnControllerColliderHit(::UnityEngine::ControllerColliderHit* hit)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControllerColliderHit*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, hit);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnControllerColliderHit(::UnityEngine::ControllerColliderHit* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControllerColliderHit*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_ONCONTROLLERCOLLIDERHIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_HASCOLLIDERHIT___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
