#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76A210)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F769EC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76A050)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76A260)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76A2F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F76A380)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76A410)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityNavMeshAgent
{
	inline static constexpr unsigned int GetRemainingDistance_TypeDefinitionIndex = 34274;

	class GetRemainingDistance : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* storeValue; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::UnityEngine::AI::NavMeshAgent* navMeshAgent; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_GETREMAININGDISTANCE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
