#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CBC20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CBB10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CBCA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CBD30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CBDC0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityBehaviour
{
	inline static constexpr unsigned int IsEnabled_TypeDefinitionIndex = 34387;

	class IsEnabled : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedObject* specifiedObject; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_ISENABLED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
