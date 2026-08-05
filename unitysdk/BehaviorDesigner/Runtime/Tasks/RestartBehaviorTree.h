#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F606C20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F6070D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F606F30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F607120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F6071B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F607240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F6072D0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int RestartBehaviorTree_TypeDefinitionIndex = 33980;

	class RestartBehaviorTree : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::Behavior* behavior; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* group; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* behaviorGameObject; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
