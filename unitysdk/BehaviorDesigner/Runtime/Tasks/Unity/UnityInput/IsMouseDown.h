#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8F970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8F8D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8F9C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8FA50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8FAE0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityInput
{
	inline static constexpr unsigned int IsMouseDown_TypeDefinitionIndex = 34345;

	class IsMouseDown : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* buttonIndex; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_ISMOUSEDOWN___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
