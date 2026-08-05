#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SphereCollider; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1EC640)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1EC270)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1EC400)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1EC6B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1EC740)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1EC7D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1EC860)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnitySphereCollider
{
	inline static constexpr unsigned int SetCenter_TypeDefinitionIndex = 34113;

	class SetCenter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::SphereCollider* sphereCollider; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* center; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_SETCENTER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
