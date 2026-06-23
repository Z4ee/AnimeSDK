#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E378B40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E378970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E378B80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E378C10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E378CA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int FloatClamp_TypeDefinitionIndex = 33656;

	class FloatClamp : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* floatVariable; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* minValue; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* maxValue; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCLAMP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
