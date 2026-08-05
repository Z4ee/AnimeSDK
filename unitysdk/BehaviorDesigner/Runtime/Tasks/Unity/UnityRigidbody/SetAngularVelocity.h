#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E867150)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E866D80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E866F10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8671C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E867250)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E8672E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E867370)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRigidbody
{
	inline static constexpr unsigned int SetAngularVelocity_TypeDefinitionIndex = 34198;

	class SetAngularVelocity : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Rigidbody* rigidbody; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* angularVelocity; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY_SETANGULARVELOCITY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
