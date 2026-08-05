#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CA120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7C9D80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7C9F10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CA170)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CA200)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CA290)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CA320)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimator
{
	inline static constexpr unsigned int SetApplyRootMotion_TypeDefinitionIndex = 34454;

	class SetApplyRootMotion : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::UnityEngine::Animator* animator; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* rootMotion; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETAPPLYROOTMOTION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
