#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/AttributeOptionsFlags.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_DTPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C8090)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTPropertyAttribute_TypeDefinitionIndex = 25859;

	class DTPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* Label; // 0x10
		::System::String* Tooltip; // 0x18
		::System::String* Color; // 0x20
		::System::Int32 Precision; // 0x28
		::FluffyUnderware::DevTools::AttributeOptionsFlags Options; // 0x2C

		::System::Void _ctor(::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTPROPERTYATTRIBUTE__CTOR_OFFSET))(this, label, tooltip);
		}
	};
}
