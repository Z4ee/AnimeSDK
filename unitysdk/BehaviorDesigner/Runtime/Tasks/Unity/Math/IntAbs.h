#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B04E620)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B04E580)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B04E670)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B04E700)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B04E790)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int IntAbs_TypeDefinitionIndex = 32110;

	class IntAbs : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* intVariable; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
