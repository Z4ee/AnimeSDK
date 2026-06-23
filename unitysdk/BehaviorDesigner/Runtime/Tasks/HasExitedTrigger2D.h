#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Collider2D; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_ONEND_OFFSET UNITYSDK_OFFSET(0x1DE05420)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_ONRESET_OFFSET UNITYSDK_OFFSET(0x1DE05680)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1DE05460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DE053D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1DE05360)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE05700)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1DE057C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1DE05850)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1DE058E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DE05970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1DE05A00)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasExitedTrigger2D_TypeDefinitionIndex = 33315;

	class HasExitedTrigger2D : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* otherGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x58
		::System::Boolean exitedTrigger; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_ONEND_OFFSET))(this);
		}

		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_ONTRIGGEREXIT2D_OFFSET))(this, other);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnTriggerExit2D(::UnityEngine::Collider2D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_ONTRIGGEREXIT2D_OFFSET))(this, P0);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER2D___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
