#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTRegionAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_INTREGIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69CF90)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int IntRegionAttribute_TypeDefinitionIndex = 28372;

	class IntRegionAttribute : public ::FluffyUnderware::DevTools::DTRegionAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
