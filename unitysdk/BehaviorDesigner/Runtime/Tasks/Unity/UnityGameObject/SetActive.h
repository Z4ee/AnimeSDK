#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60BF60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60BE00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F60BFB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60C040)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60C0D0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityGameObject
{
	inline static constexpr unsigned int SetActive_TypeDefinitionIndex = 34360;

	class SetActive : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* active; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_SETACTIVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
