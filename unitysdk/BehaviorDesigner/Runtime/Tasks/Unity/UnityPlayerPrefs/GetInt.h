#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FCC20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FCA90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FCCB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FCD40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FCDD0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPlayerPrefs
{
	inline static constexpr unsigned int GetInt_TypeDefinitionIndex = 34228;

	class GetInt : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* defaultValue; // 0x60
		::BehaviorDesigner::Runtime::SharedString* key; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_GETINT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
