#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedCollider; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B04E340)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B04E1C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B04E3D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B04E460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B04E4F0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Collider
{
	inline static constexpr unsigned int SetEnabled_TypeDefinitionIndex = 32180;

	class SetEnabled : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* enabled; // 0x58
		::BehaviorDesigner::Runtime::SharedCollider* specifiedCollider; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_SETENABLED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
