#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CE640)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CE2F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CE480)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CE690)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CE720)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CE7B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CE840)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityNavMeshAgent
{
	inline static constexpr unsigned int GetIsStopped_TypeDefinitionIndex = 34273;

	class GetIsStopped : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::AI::NavMeshAgent* navMeshAgent; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* storeValue; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETISSTOPPED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
