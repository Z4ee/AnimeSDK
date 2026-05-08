#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C0A7000)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0A6F00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A7060)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C0A70F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0A7180)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int BoolComparison_TypeDefinitionIndex = 32100;

	class BoolComparison : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* bool1; // 0x50
		::BehaviorDesigner::Runtime::SharedBool* bool2; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLCOMPARISON___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
