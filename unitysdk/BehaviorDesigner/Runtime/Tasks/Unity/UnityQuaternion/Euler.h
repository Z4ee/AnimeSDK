#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedQuaternion; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1C2DD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1C2CB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C2E50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1C2EE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1C2F70)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityQuaternion
{
	inline static constexpr unsigned int Euler_TypeDefinitionIndex = 34217;

	class Euler : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* eulerVector; // 0x58
		::BehaviorDesigner::Runtime::SharedQuaternion* storeResult; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_EULER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
