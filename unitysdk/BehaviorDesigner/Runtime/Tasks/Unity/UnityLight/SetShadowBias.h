#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F21D410)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F21D070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F21D200)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F21D460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F21D4F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F21D580)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F21D610)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityLight
{
	inline static constexpr unsigned int SetShadowBias_TypeDefinitionIndex = 34327;

	class SetShadowBias : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* shadowBias; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::UnityEngine::Light* light; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETSHADOWBIAS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
