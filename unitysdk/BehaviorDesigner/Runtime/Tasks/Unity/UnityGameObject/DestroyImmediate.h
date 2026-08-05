#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8F9E30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8F9CE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F9E80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8F9F10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8F9FA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityGameObject
{
	inline static constexpr unsigned int DestroyImmediate_TypeDefinitionIndex = 34352;

	class DestroyImmediate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_DESTROYIMMEDIATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
