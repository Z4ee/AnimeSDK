#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Services/SubTask.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_INNERDECORATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F52AD30)

namespace BehaviorDesigner::Runtime::Tasks::Services
{
	inline static constexpr unsigned int InnerDecorator_TypeDefinitionIndex = 34484;

	class InnerDecorator : public ::BehaviorDesigner::Runtime::Tasks::Services::SubTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_INNERDECORATOR__CTOR_OFFSET))(this);
		}
	};
}
