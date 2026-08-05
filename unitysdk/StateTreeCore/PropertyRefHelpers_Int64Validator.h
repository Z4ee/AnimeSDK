#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes { class Property; }

#define STATETREECORE_PROPERTYREFHELPERS_INT64VALIDATOR_ISVALID_OFFSET UNITYSDK_OFFSET(0xAD2D90)

namespace StateTreeCore
{
	inline static constexpr unsigned int PropertyRefHelpers_Int64Validator_TypeDefinitionIndex = 31663;

	struct alignas(1) PropertyRefHelpers_Int64Validator
	{
		::System::Boolean IsValid(::UnrealTypes::Property* property)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_PROPERTYREFHELPERS_INT64VALIDATOR_ISVALID_OFFSET))(this, property);
		}
	};
}
