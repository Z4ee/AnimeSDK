#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C2A9C70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C2A9840)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C2A99D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A9CC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C2A9D50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C2A9DE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C2A9E70)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Timeline
{
	inline static constexpr unsigned int Resume_TypeDefinitionIndex = 31908;

	class Resume : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* stopWhenComplete; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70
		::System::Boolean playbackStarted; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_RESUME___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
