#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C0CF0A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0CEBB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0CF0F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C0CF180)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0CF210)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int GetPropertyValue_TypeDefinitionIndex = 31789;

	class GetPropertyValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedString* propertyName; // 0x60
		::BehaviorDesigner::Runtime::SharedVariable* propertyValue; // 0x68
		::BehaviorDesigner::Runtime::SharedString* componentName; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETPROPERTYVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
