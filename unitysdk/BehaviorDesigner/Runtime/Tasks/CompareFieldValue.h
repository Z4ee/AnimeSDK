#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BE5CE40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE5C780)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5CE90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BE5CF20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE5CFA0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int CompareFieldValue_TypeDefinitionIndex = 31812;

	class CompareFieldValue : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedVariable* compareValue; // 0x50
		::BehaviorDesigner::Runtime::SharedString* fieldName; // 0x58
		::BehaviorDesigner::Runtime::SharedString* componentName; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPAREFIELDVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
