#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedQuaternion; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76B4B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76B3B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76B510)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76B5A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76B630)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityQuaternion
{
	inline static constexpr unsigned int Inverse_TypeDefinitionIndex = 34220;

	class Inverse : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedQuaternion* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedQuaternion* targetQuaternion; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_INVERSE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
