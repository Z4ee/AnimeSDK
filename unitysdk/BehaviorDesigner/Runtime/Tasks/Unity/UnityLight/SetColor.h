#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedColor; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52FC40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F52F880)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52FA10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F52FCA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52FD30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F52FDC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52FE50)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityLight
{
	inline static constexpr unsigned int SetColor_TypeDefinitionIndex = 34321;

	class SetColor : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedColor* color; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::UnityEngine::Light* light; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLIGHT_SETCOLOR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
