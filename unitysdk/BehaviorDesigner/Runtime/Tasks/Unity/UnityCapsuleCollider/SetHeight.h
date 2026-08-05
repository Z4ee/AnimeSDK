#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E20D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F9E1D30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E1EC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E2120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E21B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F9E2240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E22D0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCapsuleCollider
{
	inline static constexpr unsigned int SetHeight_TypeDefinitionIndex = 34378;

	class SetHeight : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* direction; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::UnityEngine::CapsuleCollider* capsuleCollider; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_SETHEIGHT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
