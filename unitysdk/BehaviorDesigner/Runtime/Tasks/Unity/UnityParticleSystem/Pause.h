#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5DAAC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5DA780)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5DA910)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DAB10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5DABA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5DABE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5DAC20)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityParticleSystem
{
	inline static constexpr unsigned int Pause_TypeDefinitionIndex = 34254;

	class Pause : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::ParticleSystem* particleSystem; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_PAUSE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
