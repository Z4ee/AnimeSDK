#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Unity/Math/RandomFloat_FractionPrecision.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F82E260)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F82DE60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F82E2F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F82E380)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F82E410)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int RandomFloat_TypeDefinitionIndex = 34308;

	class RandomFloat : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		// static const ::System::Single Tolerant; // 0x0
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* max; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* min; // 0x68
		::BehaviorDesigner::Runtime::Tasks::Unity::Math::RandomFloat_FractionPrecision fractionPrecision; // 0x70
		::System::Boolean inclusive; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMFLOAT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
