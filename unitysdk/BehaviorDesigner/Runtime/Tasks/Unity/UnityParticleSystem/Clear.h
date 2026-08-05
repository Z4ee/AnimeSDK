#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E863FF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E863CB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E863E40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E864040)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E8640D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E864160)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8641F0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityParticleSystem
{
	inline static constexpr unsigned int Clear_TypeDefinitionIndex = 34241;

	class Clear : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::ParticleSystem* particleSystem; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_CLEAR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
