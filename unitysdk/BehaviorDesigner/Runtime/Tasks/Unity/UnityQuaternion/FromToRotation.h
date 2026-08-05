#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedQuaternion; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9AFC00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9AFA20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9AFC80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9AFD10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9AFDA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityQuaternion
{
	inline static constexpr unsigned int FromToRotation_TypeDefinitionIndex = 34218;

	class FromToRotation : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedQuaternion* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* toDirection; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* fromDirection; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_FROMTOROTATION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
