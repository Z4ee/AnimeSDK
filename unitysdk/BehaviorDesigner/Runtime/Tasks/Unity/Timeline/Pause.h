#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8D0A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1EC8CD70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8CF00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8D0F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8D180)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1EC8D210)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8D2A0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Timeline
{
	inline static constexpr unsigned int Pause_TypeDefinitionIndex = 34093;

	class Pause : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PAUSE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
