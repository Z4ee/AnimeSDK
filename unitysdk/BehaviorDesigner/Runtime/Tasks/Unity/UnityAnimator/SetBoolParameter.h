#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F768740)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F768110)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7682A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1F7686B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7687D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F768860)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7688F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F768980)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimator
{
	inline static constexpr unsigned int SetBoolParameter_TypeDefinitionIndex = 34455;

	class SetBoolParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		static ::System::Action_3<::UnityEngine::Animator*, ::System::Int32, ::System::Boolean>** StaticGet_OnSetBool()
		{
			return (::System::Action_3<::UnityEngine::Animator*, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SetBoolParameter_TypeDefinitionIndex)->GetStaticField(0x28DA0);
		}
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* boolValue; // 0x60
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x68
		::UnityEngine::Animator* animator; // 0x70
		::UnityEngine::GameObject* prevGameObject; // 0x78
		::System::Int32 hashID; // 0x80
		::System::Boolean setOnce; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::System::Boolean origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER_RESETVALUE_OFFSET))(this, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETBOOLPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
