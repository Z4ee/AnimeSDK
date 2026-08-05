#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Unity/Math/BoolOperator_Operation.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1BD2B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1BCE80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1BD310)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1BD3A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1BD430)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int BoolOperator_TypeDefinitionIndex = 34289;

	class BoolOperator : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* bool2; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* storeResult; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* bool1; // 0x68
		::BehaviorDesigner::Runtime::Tasks::Unity::Math::BoolOperator_Operation operation; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLOPERATOR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
