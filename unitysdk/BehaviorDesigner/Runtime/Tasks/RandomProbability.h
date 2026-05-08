#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C0A6030)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C0A61D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0A6120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A6240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C0A62E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C0A6370)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0A6400)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int RandomProbability_TypeDefinitionIndex = 31811;

	class RandomProbability : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* successProbability; // 0x50
		::BehaviorDesigner::Runtime::SharedInt* seed; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* useSeed; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMPROBABILITY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
