#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8FC10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8FB70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8FC60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8FCF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8FD80)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityInput
{
	inline static constexpr unsigned int IsMouseUp_TypeDefinitionIndex = 34346;

	class IsMouseUp : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* buttonIndex; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEUP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
