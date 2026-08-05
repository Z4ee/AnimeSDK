#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F809DE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F809A40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F809BD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F809E30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F809EC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F809F50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F809FE0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityNavMeshAgent
{
	inline static constexpr unsigned int SetIsStopped_TypeDefinitionIndex = 34283;

	class SetIsStopped : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* isStopped; // 0x58
		::UnityEngine::AI::NavMeshAgent* navMeshAgent; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETISSTOPPED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
