#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTRegionAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA55C10)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int FloatRegionAttribute_TypeDefinitionIndex = 28975;

	class FloatRegionAttribute : public ::FluffyUnderware::DevTools::DTRegionAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
