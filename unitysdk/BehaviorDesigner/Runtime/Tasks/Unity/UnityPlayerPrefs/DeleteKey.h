#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60F9B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60F8B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F60FA20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60FAB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60FB40)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPlayerPrefs
{
	inline static constexpr unsigned int DeleteKey_TypeDefinitionIndex = 34226;

	class DeleteKey : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* key; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_DELETEKEY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
