#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedCollider; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C015E60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C015D30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C015EF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C015F80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C016010)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Collider
{
	inline static constexpr unsigned int GetEnabled_TypeDefinitionIndex = 32179;

	class GetEnabled : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* storeValue; // 0x58
		::BehaviorDesigner::Runtime::SharedCollider* specifiedCollider; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_COLLIDER_GETENABLED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
