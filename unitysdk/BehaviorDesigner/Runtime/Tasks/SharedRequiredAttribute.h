#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SHAREDREQUIREDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E860410)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int SharedRequiredAttribute_TypeDefinitionIndex = 33960;

	class SharedRequiredAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SHAREDREQUIREDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
