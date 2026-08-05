#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/KeyCode.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52F680)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52F630)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F52F6D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52F760)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52F7F0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityInput
{
	inline static constexpr unsigned int IsKeyUp_TypeDefinitionIndex = 34344;

	class IsKeyUp : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::UnityEngine::KeyCode key; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISKEYUP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
