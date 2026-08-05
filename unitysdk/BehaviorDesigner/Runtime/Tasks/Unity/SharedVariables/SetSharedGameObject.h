#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D4750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D4430)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D47A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D4830)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D4870)

namespace BehaviorDesigner::Runtime::Tasks::Unity::SharedVariables
{
	inline static constexpr unsigned int SetSharedGameObject_TypeDefinitionIndex = 34134;

	class SetSharedGameObject : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetVariable; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetValue; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* valueCanBeNull; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDGAMEOBJECT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
