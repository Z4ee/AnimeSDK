#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D7FD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D7F10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D8040)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D80D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D8110)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityInput
{
	inline static constexpr unsigned int IsButtonUp_TypeDefinitionIndex = 34342;

	class IsButtonUp : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* buttonName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONUP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
