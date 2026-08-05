#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E863A90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8639D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E863B00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E863B90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E863C20)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityInput
{
	inline static constexpr unsigned int IsButtonDown_TypeDefinitionIndex = 34341;

	class IsButtonDown : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* buttonName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISBUTTONDOWN___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
