#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76AE00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F76AA60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76ABF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76AE50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76AEE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F76AF70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76B000)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityNavMeshAgent
{
	inline static constexpr unsigned int SetAngularSpeed_TypeDefinitionIndex = 34281;

	class SetAngularSpeed : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* angularSpeed; // 0x60
		::UnityEngine::AI::NavMeshAgent* navMeshAgent; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYNAVMESHAGENT_SETANGULARSPEED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
