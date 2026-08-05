#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/LightShadows.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D96A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5D9360)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D94F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D96F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D9780)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5D97C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D9800)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityLight
{
	inline static constexpr unsigned int SetShadows_TypeDefinitionIndex = 34329;

	class SetShadows : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Light* light; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::UnityEngine::LightShadows shadows; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
