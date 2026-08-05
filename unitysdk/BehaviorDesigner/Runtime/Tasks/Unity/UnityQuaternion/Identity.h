#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedQuaternion; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1C3070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1C3000)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C30D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1C3160)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1C31F0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityQuaternion
{
	inline static constexpr unsigned int Identity_TypeDefinitionIndex = 34219;

	class Identity : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedQuaternion* storeResult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_IDENTITY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
