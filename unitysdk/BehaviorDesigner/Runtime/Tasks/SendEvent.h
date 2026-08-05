#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class BehaviorTree; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F82D0D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F82C8F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F82CC00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F82D150)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F82D1E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F82D270)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F82D300)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int SendEvent_TypeDefinitionIndex = 33981;

	class SendEvent : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* group; // 0x58
		::BehaviorDesigner::Runtime::BehaviorTree* behaviorTree; // 0x60
		::BehaviorDesigner::Runtime::SharedVariable* argument3; // 0x68
		::BehaviorDesigner::Runtime::SharedVariable* argument1; // 0x70
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x78
		::BehaviorDesigner::Runtime::SharedVariable* argument2; // 0x80
		::BehaviorDesigner::Runtime::SharedString* eventName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SENDEVENT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
