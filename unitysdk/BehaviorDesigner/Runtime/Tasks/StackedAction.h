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

#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C0146F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1C014ED0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1C014E20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1C015030)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1C014F80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONDRAWNODETEXT_OFFSET UNITYSDK_OFFSET(0x1C0150E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONEND_OFFSET UNITYSDK_OFFSET(0x1C014AC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C014980)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C014A20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C015270)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C014810)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1C014C10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1C014B60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1C014D70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1C014CC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0148B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1C014670)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C015310)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C0153A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1C0154C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1C015430)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1C0155E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1C015550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONDRAWNODETEXT_OFFSET UNITYSDK_OFFSET(0x1C015670)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1C015700)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C015790)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C015820)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C0158B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C015940)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1C015A60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1C0159D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1C015B80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1C015AF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C015C10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_STACKEDACTION___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1C015CA0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int StackedAction_TypeDefinitionIndex = 31765;

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
