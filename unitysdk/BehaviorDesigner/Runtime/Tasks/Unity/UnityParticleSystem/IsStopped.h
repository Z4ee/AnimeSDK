#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60E9A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F60E670)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60E800)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F60E9F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60EA80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F60EB10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60EBA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityParticleSystem
{
	inline static constexpr unsigned int IsStopped_TypeDefinitionIndex = 34253;

	class IsStopped : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::ParticleSystem* particleSystem; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_ISSTOPPED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
