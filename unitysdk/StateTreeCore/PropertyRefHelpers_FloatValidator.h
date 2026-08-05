#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes { class Property; }

#define STATETREECORE_PROPERTYREFHELPERS_FLOATVALIDATOR_ISVALID_OFFSET UNITYSDK_OFFSET(0xADAD10)

namespace StateTreeCore
{
	inline static constexpr unsigned int PropertyRefHelpers_FloatValidator_TypeDefinitionIndex = 31664;

	struct alignas(1) PropertyRefHelpers_FloatValidator
	{
		::System::Boolean IsValid(::UnrealTypes::Property* property)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_PROPERTYREFHELPERS_FLOATVALIDATOR_ISVALID_OFFSET))(this, property);
		}
	};
}
