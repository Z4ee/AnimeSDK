#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_REQUIREDCOMPONENTATTRIBUTE_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C1B7A40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_REQUIREDCOMPONENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B7A50)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int RequiredComponentAttribute_TypeDefinitionIndex = 31780;

	class RequiredComponentAttribute : public ::System::Attribute
	{
	public:
		::System::Type* mComponentType; // 0x10

		::System::Void _ctor(::System::Type* componentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REQUIREDCOMPONENTATTRIBUTE__CTOR_OFFSET))(this, componentType);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_REQUIREDCOMPONENTATTRIBUTE_GET_COMPONENTTYPE_OFFSET))(this);
		}
	};
}
