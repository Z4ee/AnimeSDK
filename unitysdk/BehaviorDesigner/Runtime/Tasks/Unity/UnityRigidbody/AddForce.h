#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/ForceMode.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5DBAB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5DB6D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5DB860)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DBB30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5DBBC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5DBC00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5DBC40)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRigidbody
{
	inline static constexpr unsigned int AddForce_TypeDefinitionIndex = 34177;

	class AddForce : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::Rigidbody* rigidbody; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* force; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70
		::UnityEngine::ForceMode forceMode; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_ADDFORCE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
