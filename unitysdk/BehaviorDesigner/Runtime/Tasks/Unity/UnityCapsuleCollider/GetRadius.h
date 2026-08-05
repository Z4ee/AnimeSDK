#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E46D440)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E46D0F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E46D280)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E46D490)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E46D520)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E46D5B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E46D640)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCapsuleCollider
{
	inline static constexpr unsigned int GetRadius_TypeDefinitionIndex = 34375;

	class GetRadius : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::CapsuleCollider* capsuleCollider; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeValue; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETRADIUS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
