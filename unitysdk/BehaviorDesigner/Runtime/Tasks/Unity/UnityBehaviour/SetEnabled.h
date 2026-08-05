#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBehaviour; }
namespace BehaviorDesigner::Runtime { class SharedBool; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E863790)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E863610)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E863820)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E8638B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E863940)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityBehaviour
{
	inline static constexpr unsigned int SetEnabled_TypeDefinitionIndex = 34388;

	class SetEnabled : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBehaviour* specifiedObject; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* enabled; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_SETENABLED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
