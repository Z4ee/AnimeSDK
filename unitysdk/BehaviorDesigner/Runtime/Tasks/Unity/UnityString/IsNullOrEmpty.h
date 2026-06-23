#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E381D10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E381C40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E381D80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E381E10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E381EA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityString
{
	inline static constexpr unsigned int IsNullOrEmpty_TypeDefinitionIndex = 33472;

	class IsNullOrEmpty : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* targetString; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_ISNULLOREMPTY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
