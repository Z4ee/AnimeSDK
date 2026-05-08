#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SHAREDREQUIREDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B04E1B0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int SharedRequiredAttribute_TypeDefinitionIndex = 31773;

	class SharedRequiredAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SHAREDREQUIREDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
