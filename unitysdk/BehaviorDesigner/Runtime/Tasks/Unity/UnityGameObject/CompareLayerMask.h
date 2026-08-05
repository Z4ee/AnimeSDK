#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F21CE70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F21CD70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F21CEC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F21CF50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F21CFE0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityGameObject
{
	inline static constexpr unsigned int CompareLayerMask_TypeDefinitionIndex = 34349;

	class CompareLayerMask : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x50
		::UnityEngine::LayerMask layermask; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARELAYERMASK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
