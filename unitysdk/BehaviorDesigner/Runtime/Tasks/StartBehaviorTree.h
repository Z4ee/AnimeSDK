#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_BEHAVIORENDED_OFFSET UNITYSDK_OFFSET(0x1BA7B080)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONEND_OFFSET UNITYSDK_OFFSET(0x1BA7B0D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BA7B340)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BA7A8A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA7AE90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7B3B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1BA7B450)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BA7B4E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BA7B570)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA7B600)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int StartBehaviorTree_TypeDefinitionIndex = 31795;

	class StartBehaviorTree : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::Behavior* behavior; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* behaviorGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* synchronizeVariables; // 0x68
		::BehaviorDesigner::Runtime::SharedBool* waitForCompletion; // 0x70
		::BehaviorDesigner::Runtime::SharedInt* group; // 0x78
		::System::Boolean behaviorComplete; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONUPDATE_OFFSET))(this);
		}

		::System::Void BehaviorEnded(::BehaviorDesigner::Runtime::Behavior* behavior)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_BEHAVIORENDED_OFFSET))(this, behavior);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
