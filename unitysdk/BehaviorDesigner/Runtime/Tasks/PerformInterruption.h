#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime::Tasks { class Interrupt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8BBE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8BAD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8BC30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8BCC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8BD50)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int PerformInterruption_TypeDefinitionIndex = 33974;

	class PerformInterruption : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::Tasks::Interrupt*>* interruptTasks; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* interruptSuccess; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
