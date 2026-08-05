#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody2D; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F6126A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F612300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F612490)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6126F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F612780)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F612810)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F6128A0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRigidbody2D
{
	inline static constexpr unsigned int SetAngularVelocity_TypeDefinitionIndex = 34168;

	class SetAngularVelocity : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Rigidbody2D* rigidbody2D; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* angularVelocity; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETANGULARVELOCITY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
