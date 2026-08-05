#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes { class Property; }

#define STATETREECORE_PROPERTYREFHELPERS_INT32VALIDATOR_ISVALID_OFFSET UNITYSDK_OFFSET(0xAC4E50)

namespace StateTreeCore
{
	inline static constexpr unsigned int PropertyRefHelpers_Int32Validator_TypeDefinitionIndex = 31662;

	struct alignas(1) PropertyRefHelpers_Int32Validator
	{
		::System::Boolean IsValid(::UnrealTypes::Property* property)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_PROPERTYREFHELPERS_INT32VALIDATOR_ISVALID_OFFSET))(this, property);
		}
	};
}
