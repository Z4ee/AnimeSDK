#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CA6E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CA3B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CA540)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CA730)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CA7C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CA850)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CA8E0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimator
{
	inline static constexpr unsigned int StartPlayback_TypeDefinitionIndex = 34463;

	class StartPlayback : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::UnityEngine::Animator* animator; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_STARTPLAYBACK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
