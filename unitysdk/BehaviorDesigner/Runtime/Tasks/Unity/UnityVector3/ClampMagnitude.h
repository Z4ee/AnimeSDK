#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E63F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E6230)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E6460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E64F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E6580)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector3
{
	inline static constexpr unsigned int ClampMagnitude_TypeDefinitionIndex = 34024;

	class ClampMagnitude : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* maxLength; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* vector3Variable; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_CLAMPMAGNITUDE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
