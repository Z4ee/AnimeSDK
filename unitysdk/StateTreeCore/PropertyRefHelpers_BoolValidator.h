#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes { class Property; }

#define STATETREECORE_PROPERTYREFHELPERS_BOOLVALIDATOR_ISVALID_OFFSET UNITYSDK_OFFSET(0xAC9F10)

namespace StateTreeCore
{
	inline static constexpr unsigned int PropertyRefHelpers_BoolValidator_TypeDefinitionIndex = 31660;

	struct alignas(1) PropertyRefHelpers_BoolValidator
	{
		::System::Boolean IsValid(::UnrealTypes::Property* property)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_PROPERTYREFHELPERS_BOOLVALIDATOR_ISVALID_OFFSET))(this, property);
		}
	};
}
