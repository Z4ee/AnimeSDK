#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTPropertyAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_DTREGIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4DBE0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTRegionAttribute_TypeDefinitionIndex = 28974;

	class DTRegionAttribute : public ::FluffyUnderware::DevTools::DTPropertyAttribute
	{
	public:
		::System::String* RegionOptionsPropertyName; // 0x30
		::System::Boolean RegionIsOptional; // 0x38
		::System::Boolean UseSlider; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTREGIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
