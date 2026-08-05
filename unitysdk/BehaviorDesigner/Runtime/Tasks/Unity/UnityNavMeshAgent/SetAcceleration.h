#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E30F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F9E2D50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E2EE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E3140)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E31D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F9E3260)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E32F0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityNavMeshAgent
{
	inline static constexpr unsigned int SetAcceleration_TypeDefinitionIndex = 34280;

	class SetAcceleration : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::AI::NavMeshAgent* navMeshAgent; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* acceleration; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETACCELERATION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
