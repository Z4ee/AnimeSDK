#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76BE30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F76BB00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76BC90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76BE80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76BF10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F76BFA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_ISVISIBLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76C030)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRenderer
{
	inline static constexpr unsigned int IsVisible_TypeDefinitionIndex = 34212;

	class IsVisible : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x50
		::UnityEngine::Renderer* renderer; // 0x58
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
