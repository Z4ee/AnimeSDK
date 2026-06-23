#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FC4B0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int RequiredFieldAttribute_TypeDefinitionIndex = 33323;

	class RequiredFieldAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
