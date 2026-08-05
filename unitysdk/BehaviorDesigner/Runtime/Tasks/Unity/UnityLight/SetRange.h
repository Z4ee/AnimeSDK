#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60D160)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F60CDC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60CF50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F60D1B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F60D240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F60D2D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F60D360)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityLight
{
	inline static constexpr unsigned int SetRange_TypeDefinitionIndex = 34326;

	class SetRange : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Light* light; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* range; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETRANGE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
