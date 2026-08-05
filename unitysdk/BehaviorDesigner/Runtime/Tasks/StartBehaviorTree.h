#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_BEHAVIORENDED_OFFSET UNITYSDK_OFFSET(0x1F1E5640)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F1E5690)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E58F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1E4E60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E5450)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E5960)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F1E5A00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E5A90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1E5B20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STARTBEHAVIORTREE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E5BB0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int StartBehaviorTree_TypeDefinitionIndex = 33982;

	class StartBehaviorTree : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* waitForCompletion; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* behaviorGameObject; // 0x60
		::BehaviorDesigner::Runtime::Behavior* behavior; // 0x68
		::BehaviorDesigner::Runtime::SharedBool* synchronizeVariables; // 0x70
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
