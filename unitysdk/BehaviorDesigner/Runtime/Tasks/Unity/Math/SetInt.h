#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E5F70E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E5F7030)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7140)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E5F71D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E5F7260)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int SetInt_TypeDefinitionIndex = 33677;

	class SetInt : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* intValue; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETINT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
