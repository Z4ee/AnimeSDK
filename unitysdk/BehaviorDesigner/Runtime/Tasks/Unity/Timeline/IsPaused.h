#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E330D30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E3309F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E330B80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E330D80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E330E10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E330EA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E330F30)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Timeline
{
	inline static constexpr unsigned int IsPaused_TypeDefinitionIndex = 33455;

	class IsPaused : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x50
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
