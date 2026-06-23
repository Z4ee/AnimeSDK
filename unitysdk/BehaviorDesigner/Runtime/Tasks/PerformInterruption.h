#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime::Tasks { class Interrupt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D7E5AB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7E59A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E5B00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D7E5B90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PERFORMINTERRUPTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7E5C20)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int PerformInterruption_TypeDefinitionIndex = 33338;

	class PerformInterruption : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* interruptSuccess; // 0x58
		::Il2CppArray<::BehaviorDesigner::Runtime::Tasks::Interrupt*>* interruptTasks; // 0x60

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
