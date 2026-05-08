#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C01B770)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C01B440)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C01B5D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01B7C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C01B850)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C01B8E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C01B970)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRenderer
{
	inline static constexpr unsigned int IsVisible_TypeDefinitionIndex = 32025;

	class IsVisible : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x50
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
