#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F809830)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F809790)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F809890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F809920)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8099B0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityInput
{
	inline static constexpr unsigned int GetAcceleration_TypeDefinitionIndex = 34334;

	class GetAcceleration : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* storeResult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETACCELERATION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
