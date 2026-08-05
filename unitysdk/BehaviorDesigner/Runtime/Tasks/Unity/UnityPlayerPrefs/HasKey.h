#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76B190)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76B090)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76B200)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76B290)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76B320)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPlayerPrefs
{
	inline static constexpr unsigned int HasKey_TypeDefinitionIndex = 34230;

	class HasKey : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* key; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_HASKEY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
