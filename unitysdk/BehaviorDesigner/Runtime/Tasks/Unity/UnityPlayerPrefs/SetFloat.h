#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FCFE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FCE60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FD060)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FD0F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FD180)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPlayerPrefs
{
	inline static constexpr unsigned int SetFloat_TypeDefinitionIndex = 34232;

	class SetFloat : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* value; // 0x58
		::BehaviorDesigner::Runtime::SharedString* key; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SETFLOAT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
