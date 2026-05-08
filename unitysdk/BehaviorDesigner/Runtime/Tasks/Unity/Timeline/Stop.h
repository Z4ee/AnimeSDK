#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C268E60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C268B30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C268CC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C268EB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C268F40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C268FD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C269060)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Timeline
{
	inline static constexpr unsigned int Stop_TypeDefinitionIndex = 31909;

	class Stop : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
