#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedVector2; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1C63B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1C6300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C6400)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1C6490)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1C6520)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector2
{
	inline static constexpr unsigned int SetValue_TypeDefinitionIndex = 34058;

	class SetValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector2* vector2Value; // 0x58
		::BehaviorDesigner::Runtime::SharedVector2* vector2Variable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_SETVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
