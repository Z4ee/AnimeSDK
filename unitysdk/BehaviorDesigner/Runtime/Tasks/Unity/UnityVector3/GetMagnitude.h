#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9B3060)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9B2F60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B30D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9B3160)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9B31F0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector3
{
	inline static constexpr unsigned int GetMagnitude_TypeDefinitionIndex = 34028;

	class GetMagnitude : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* vector3Variable; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_GETMAGNITUDE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
