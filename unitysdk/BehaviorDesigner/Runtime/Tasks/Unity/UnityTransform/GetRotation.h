#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedQuaternion; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F222120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F221DA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F221F30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F222180)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F222210)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F2222A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F222330)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityTransform
{
	inline static constexpr unsigned int GetRotation_TypeDefinitionIndex = 34073;

	class GetRotation : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Transform* targetTransform; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedQuaternion* storeValue; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETROTATION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
