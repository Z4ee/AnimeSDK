#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Unity/Math/IntComparison_Operation.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E4691E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E468C80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON__CTOR_OFFSET UNITYSDK_OFFSET(0x1E469260)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E4692F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E469380)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int IntComparison_TypeDefinitionIndex = 34299;

	class IntComparison : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* integer2; // 0x50
		::BehaviorDesigner::Runtime::SharedInt* integer1; // 0x58
		::BehaviorDesigner::Runtime::Tasks::Unity::Math::IntComparison_Operation operation; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCOMPARISON___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
