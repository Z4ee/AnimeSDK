#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SAVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F21EF20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F21EF70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SAVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F21F000)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPlayerPrefs
{
	inline static constexpr unsigned int Save_TypeDefinitionIndex = 34231;

	class Save : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SAVE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SAVE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPLAYERPREFS_SAVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
