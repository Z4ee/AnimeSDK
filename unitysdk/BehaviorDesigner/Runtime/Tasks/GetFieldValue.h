#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E85EDC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E85E950)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E85EE10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E85EEA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E85EF30)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int GetFieldValue_TypeDefinitionIndex = 33975;

	class GetFieldValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* fieldName; // 0x58
		::BehaviorDesigner::Runtime::SharedVariable* fieldValue; // 0x60
		::BehaviorDesigner::Runtime::SharedString* componentName; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GETFIELDVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
