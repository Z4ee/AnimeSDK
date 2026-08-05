#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F607D50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F607940)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F607AD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F607DD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F607E60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F607EF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F607F80)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimation
{
	inline static constexpr unsigned int Stop_TypeDefinitionIndex = 34435;

	class Stop : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Animation* animation; // 0x58
		::BehaviorDesigner::Runtime::SharedString* animationName; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_STOP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
