#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL_ONEND_OFFSET UNITYSDK_OFFSET(0x1B04C500)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL_ONSTART_OFFSET UNITYSDK_OFFSET(0x1B04C4B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B04C550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1B04C5E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1B04C670)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ContinuesTickConditional_TypeDefinitionIndex = 31809;

	class ContinuesTickConditional : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL_ONSTART_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONTINUESTICKCONDITIONAL___BASE_ONSTART_OFFSET))(this);
		}
	};
}
