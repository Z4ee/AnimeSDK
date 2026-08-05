#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E864BE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E864840)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8649D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E864C30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E864CC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E864D50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E864DE0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityParticleSystem
{
	inline static constexpr unsigned int SetEnableEmission_TypeDefinitionIndex = 34257;

	class SetEnableEmission : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* enable; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::UnityEngine::ParticleSystem* particleSystem; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPARTICLESYSTEM_SETENABLEEMISSION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
