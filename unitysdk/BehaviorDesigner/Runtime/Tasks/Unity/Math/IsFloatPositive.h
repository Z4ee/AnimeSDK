#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BDBFCF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BDBFC50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBFD40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BDBFDD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BDBFE60)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int IsFloatPositive_TypeDefinitionIndex = 32116;

	class IsFloatPositive : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* floatVariable; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_ISFLOATPOSITIVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
