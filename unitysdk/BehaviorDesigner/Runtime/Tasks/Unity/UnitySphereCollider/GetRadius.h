#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SphereCollider; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1EBFE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1EBC90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1EBE20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1EC030)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1EC0C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1EC150)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1EC1E0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnitySphereCollider
{
	inline static constexpr unsigned int GetRadius_TypeDefinitionIndex = 34112;

	class GetRadius : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::SphereCollider* sphereCollider; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* storeValue; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETRADIUS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
