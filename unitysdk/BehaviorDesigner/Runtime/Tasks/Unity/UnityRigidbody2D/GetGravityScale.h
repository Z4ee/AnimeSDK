#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody2D; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7D01E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CFE90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7D0020)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D0230)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7D02C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7D0350)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7D03E0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRigidbody2D
{
	inline static constexpr unsigned int GetGravityScale_TypeDefinitionIndex = 34157;

	class GetGravityScale : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* storeValue; // 0x58
		::UnityEngine::Rigidbody2D* rigidbody2D; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_GETGRAVITYSCALE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
