#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes { class Property; }

#define STATETREECORE_PROPERTYREFHELPERS_DOUBLEVALIDATOR_ISVALID_OFFSET UNITYSDK_OFFSET(0xAC8280)

namespace StateTreeCore
{
	inline static constexpr unsigned int PropertyRefHelpers_DoubleValidator_TypeDefinitionIndex = 31665;

	struct alignas(1) PropertyRefHelpers_DoubleValidator
	{
		::System::Boolean IsValid(::UnrealTypes::Property* property)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_PROPERTYREFHELPERS_DOUBLEVALIDATOR_ISVALID_OFFSET))(this, property);
		}
	};
}
