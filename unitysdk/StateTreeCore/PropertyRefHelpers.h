#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace UnrealTypes { class Property; }

#define STATETREECORE_PROPERTYREFHELPERS_ISSOURCEPROPERTYVALIDFORTYPE_OFFSET UNITYSDK_OFFSET(0x1E73F7C0)

namespace StateTreeCore
{
	inline static constexpr unsigned int PropertyRefHelpers_TypeDefinitionIndex = 31051;

	class PropertyRefHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean IsSourcePropertyValidForType(::System::Type* type, ::UnrealTypes::Property* property)
		{
			return ((::System::Boolean(*)(::System::Type*, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_PROPERTYREFHELPERS_ISSOURCEPROPERTYVALIDFORTYPE_OFFSET))(type, property);
		}
	};
}
