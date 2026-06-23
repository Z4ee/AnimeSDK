#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E378DD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E378D30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E378E20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E378EB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E378F40)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int IsIntPositive_TypeDefinitionIndex = 33668;

	class IsIntPositive : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* intVariable; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISINTPOSITIVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
