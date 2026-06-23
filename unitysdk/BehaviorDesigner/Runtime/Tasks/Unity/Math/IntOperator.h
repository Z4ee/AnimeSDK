#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Unity/Math/IntOperator_Operation.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D4ACE20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D4AC730)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4ACE90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D4ACF20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D4ACFB0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int IntOperator_TypeDefinitionIndex = 33665;

	class IntOperator : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* integer2; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* integer1; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* storeResult; // 0x68
		::BehaviorDesigner::Runtime::Tasks::Unity::Math::IntOperator_Operation operation; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTOPERATOR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
