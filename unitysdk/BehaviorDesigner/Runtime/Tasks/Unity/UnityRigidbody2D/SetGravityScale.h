#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody2D; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F221460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F2210C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F221250)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2214B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F221540)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F2215D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F221660)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRigidbody2D
{
	inline static constexpr unsigned int SetGravityScale_TypeDefinitionIndex = 34170;

	class SetGravityScale : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::Rigidbody2D* rigidbody2D; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* gravityScale; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_SETGRAVITYSCALE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
