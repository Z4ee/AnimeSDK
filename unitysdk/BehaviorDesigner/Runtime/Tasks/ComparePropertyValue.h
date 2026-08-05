#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F82C000)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F82BAB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F82C050)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F82C0E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F82C170)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ComparePropertyValue_TypeDefinitionIndex = 34000;

	class ComparePropertyValue : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedVariable* compareValue; // 0x50
		::BehaviorDesigner::Runtime::SharedString* componentName; // 0x58
		::BehaviorDesigner::Runtime::SharedString* propertyName; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREPROPERTYVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
