#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BA25750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA256B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA257B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BA25840)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA258D0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int BoolFlip_TypeDefinitionIndex = 32101;

	class BoolFlip : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* boolVariable; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_BOOLFLIP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
