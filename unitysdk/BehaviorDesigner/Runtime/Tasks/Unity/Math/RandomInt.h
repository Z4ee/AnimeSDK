#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D1113D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D1111A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D111450)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D1114E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D111570)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int RandomInt_TypeDefinitionIndex = 33674;

	class RandomInt : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* min; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* max; // 0x68
		::System::Boolean inclusive; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMINT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
