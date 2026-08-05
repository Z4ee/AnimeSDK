#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F830480)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F82FE50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F82FFE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1F8303F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F830510)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8305A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F830630)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8306C0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimator
{
	inline static constexpr unsigned int SetIntegerParameter_TypeDefinitionIndex = 34459;

	class SetIntegerParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		static ::System::Action_3<::UnityEngine::Animator*, ::System::Int32, ::System::Int32>** StaticGet_OnSetInteger()
		{
			return (::System::Action_3<::UnityEngine::Animator*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SetIntegerParameter_TypeDefinitionIndex)->GetStaticField(0x28DC0);
		}
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* intValue; // 0x60
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x68
		::UnityEngine::Animator* animator; // 0x70
		::UnityEngine::GameObject* prevGameObject; // 0x78
		::System::Int32 hashID; // 0x80
		::System::Boolean setOnce; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::System::Int32 origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER_RESETVALUE_OFFSET))(this, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETINTEGERPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
