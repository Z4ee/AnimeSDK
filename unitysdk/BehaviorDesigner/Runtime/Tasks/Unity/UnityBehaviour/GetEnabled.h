#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBehaviour; }
namespace BehaviorDesigner::Runtime { class SharedBool; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E80C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E7F90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E8150)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E81E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E8270)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityBehaviour
{
	inline static constexpr unsigned int GetEnabled_TypeDefinitionIndex = 34386;

	class GetEnabled : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBehaviour* specifiedObject; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* storeValue; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
