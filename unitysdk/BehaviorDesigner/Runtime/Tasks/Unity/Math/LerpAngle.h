#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8C6F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8C480)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8C750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8C7E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8C870)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int LerpAngle_TypeDefinitionIndex = 34306;

	class LerpAngle : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* lerpAmount; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* toValue; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* fromValue; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_LERPANGLE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
