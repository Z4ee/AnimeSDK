#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Services/SubTask.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A8E50)

namespace BehaviorDesigner::Runtime::Tasks::Services
{
	inline static constexpr unsigned int Services_TypeDefinitionIndex = 32298;

	class Services : public ::BehaviorDesigner::Runtime::Tasks::Services::SubTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SERVICES__CTOR_OFFSET))(this);
		}
	};
}
