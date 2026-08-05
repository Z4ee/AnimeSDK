#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_INSPECTTASKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DD320)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int InspectTaskAttribute_TypeDefinitionIndex = 33957;

	class InspectTaskAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INSPECTTASKATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
