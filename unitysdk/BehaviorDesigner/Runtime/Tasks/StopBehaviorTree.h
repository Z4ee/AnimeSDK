#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1DDB5F20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1DDB5A20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DDB5D30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB5F80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1DDB6020)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1DDB60B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STOPBEHAVIORTREE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DDB6140)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int StopBehaviorTree_TypeDefinitionIndex = 33347;

	class StopBehaviorTree : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::Behavior* behavior; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* group; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* pauseBehavior; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* behaviorGameObject; // 0x70

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
