#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/StackedAction_ComparisonType.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System { class String; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E32DC70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1E32E450)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1E32E3A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1E32E5B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1E32E500)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONDRAWNODETEXT_OFFSET UNITYSDK_OFFSET(0x1E32E660)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONEND_OFFSET UNITYSDK_OFFSET(0x1E32E040)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E32DF00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E32DFA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E32E7F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E32DD90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1E32E190)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1E32E0E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1E32E2F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1E32E240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E32DE30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1E32DBF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32E890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E32E920)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1E32EA40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1E32E9B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1E32EB60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1E32EAD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONDRAWNODETEXT_OFFSET UNITYSDK_OFFSET(0x1E32EBF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1E32EC80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E32ED10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E32EDA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E32EE30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E32EEC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1E32EFE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1E32EF50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1E32F100)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1E32F070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E32F190)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1E32F220)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int StackedAction_TypeDefinitionIndex = 33316;

	class StackedAction : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::Tasks::Action*>* actions; // 0x58
		::System::Boolean graphLabel; // 0x60
		::BehaviorDesigner::Runtime::Tasks::StackedAction_ComparisonType comparisonType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONEND_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGERENTER_OFFSET))(this, other);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGERENTER2D_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGEREXIT_OFFSET))(this, other);
		}

		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGEREXIT2D_OFFSET))(this, other);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONENTER_OFFSET))(this, collision);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONENTER2D_OFFSET))(this, collision);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONEXIT_OFFSET))(this, collision);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONEXIT2D_OFFSET))(this, collision);
		}

		::System::String* OnDrawNodeText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONDRAWNODETEXT_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnCollisionEnter(::UnityEngine::Collision* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_OnCollisionEnter2D(::UnityEngine::Collision2D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONENTER2D_OFFSET))(this, P0);
		}

		::System::Void __base_OnCollisionExit(::UnityEngine::Collision* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCollisionExit2D(::UnityEngine::Collision2D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONEXIT2D_OFFSET))(this, P0);
		}

		::System::String* __base_OnDrawNodeText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONDRAWNODETEXT_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONSTART_OFFSET))(this);
		}

		::System::Void __base_OnTriggerEnter(::UnityEngine::Collider* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGERENTER_OFFSET))(this, P0);
		}

		::System::Void __base_OnTriggerEnter2D(::UnityEngine::Collider2D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGERENTER2D_OFFSET))(this, P0);
		}

		::System::Void __base_OnTriggerExit(::UnityEngine::Collider* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGEREXIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnTriggerExit2D(::UnityEngine::Collider2D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGEREXIT2D_OFFSET))(this, P0);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
