#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D6DF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5D6A50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D6BE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D6E40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D6ED0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5D6F10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D6F50)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCapsuleCollider
{
	inline static constexpr unsigned int SetDirection_TypeDefinitionIndex = 34377;

	class SetDirection : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::UnityEngine::CapsuleCollider* capsuleCollider; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* direction; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETDIRECTION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
