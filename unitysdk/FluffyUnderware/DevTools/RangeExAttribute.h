#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_RANGEEXATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D69F380)
#define FLUFFYUNDERWARE_DEVTOOLS_RANGEEXATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D69F3B0)
#define FLUFFYUNDERWARE_DEVTOOLS_RANGEEXATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D69F3E0)
#define FLUFFYUNDERWARE_DEVTOOLS_RANGEEXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F350)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int RangeExAttribute_TypeDefinitionIndex = 28363;

	class RangeExAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::String* MinFieldOrPropertyName; // 0x30
		::System::String* MaxFieldOrPropertyName; // 0x38
		::System::Single MaxValue; // 0x40
		::System::Single MinValue; // 0x44
		::System::Boolean Slider; // 0x48

		::System::Void _ctor(::System::Single minValue, ::System::Single maxValue, ::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_RANGEEXATTRIBUTE__CTOR_OFFSET))(this, minValue, maxValue, label, tooltip);
		}

		::System::Void _ctor_1(::System::String* minFieldOrProperty, ::System::Single maxValue, ::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_RANGEEXATTRIBUTE__CTOR_1_OFFSET))(this, minFieldOrProperty, maxValue, label, tooltip);
		}

		::System::Void _ctor_2(::System::Single minValue, ::System::String* maxFieldOrProperty, ::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_RANGEEXATTRIBUTE__CTOR_2_OFFSET))(this, minValue, maxFieldOrProperty, label, tooltip);
		}

		::System::Void _ctor_3(::System::String* minFieldOrProperty, ::System::String* maxFieldOrProperty, ::System::String* label, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_RANGEEXATTRIBUTE__CTOR_3_OFFSET))(this, minFieldOrProperty, maxFieldOrProperty, label, tooltip);
		}
	};
}
