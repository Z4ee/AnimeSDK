#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E46EE80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E46EB40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E46ECD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E46EED0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E46EF60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E46EFF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E46F080)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityLight
{
	inline static constexpr unsigned int GetSpotAngle_TypeDefinitionIndex = 34320;

	class GetSpotAngle : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* storeValue; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::UnityEngine::Light* light; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_GETSPOTANGLE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
