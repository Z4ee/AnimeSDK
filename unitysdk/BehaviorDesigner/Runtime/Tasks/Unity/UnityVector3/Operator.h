#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Unity/UnityVector3/Operator_Operation.h"

namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5DEFF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5DEB80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DF060)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5DF0F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5DF130)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector3
{
	inline static constexpr unsigned int Operator_TypeDefinitionIndex = 34038;

	class Operator : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* firstVector3; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* secondVector3; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* storeResult; // 0x68
		::BehaviorDesigner::Runtime::Tasks::Unity::UnityVector3::Operator_Operation operation; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_OPERATOR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
