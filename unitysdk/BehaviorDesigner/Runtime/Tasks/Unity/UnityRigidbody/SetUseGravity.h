#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC91E80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY_ONSTART_OFFSET UNITYSDK_OFFSET(0x1EC91AE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC91C70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC91ED0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC91F60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1EC91FF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC92080)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRigidbody
{
	inline static constexpr unsigned int SetUseGravity_TypeDefinitionIndex = 34207;

	class SetUseGravity : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* useGravity; // 0x58
		::UnityEngine::Rigidbody* rigidbody; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETUSEGRAVITY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
