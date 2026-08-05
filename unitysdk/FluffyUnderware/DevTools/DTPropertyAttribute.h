#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/AttributeOptionsFlags.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_DTPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA493F0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTPropertyAttribute_TypeDefinitionIndex = 28957;

	class DTPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* Tooltip; // 0x10
		::System::String* Label; // 0x18
		::System::String* Color; // 0x20
		::FluffyUnderware::DevTools::AttributeOptionsFlags Options; // 0x28
		::System::Int32 Precision; // 0x2C

		::System::Void _ctor(::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTPROPERTYATTRIBUTE__CTOR_OFFSET))(this, label, tooltip);
		}
	};
}
