#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BA25400)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BA24F00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA25210)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA25460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BA25500)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BA25590)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA25620)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int StopBehaviorTree_TypeDefinitionIndex = 31796;

	class StopBehaviorTree : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* group; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* pauseBehavior; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* behaviorGameObject; // 0x68
		::BehaviorDesigner::Runtime::Behavior* behavior; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
