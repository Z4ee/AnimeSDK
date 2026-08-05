#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F72C0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int RequiredFieldAttribute_TypeDefinitionIndex = 33959;

	class RequiredFieldAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
