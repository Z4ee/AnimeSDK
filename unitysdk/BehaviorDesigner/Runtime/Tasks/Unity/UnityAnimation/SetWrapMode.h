#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F82F540)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F82F200)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F82F390)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F82F590)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F82F620)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F82F6B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F82F740)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimation
{
	inline static constexpr unsigned int SetWrapMode_TypeDefinitionIndex = 34434;

	class SetWrapMode : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Animation* animation; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::UnityEngine::WrapMode wrapMode; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_SETWRAPMODE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
