#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7C9AF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7C97A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7C9930)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C9B40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7C9BD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7C9C60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7C9CF0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimator
{
	inline static constexpr unsigned int GetApplyRootMotion_TypeDefinitionIndex = 34439;

	class GetApplyRootMotion : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* storeValue; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::Animator* animator; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_GETAPPLYROOTMOTION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
