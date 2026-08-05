#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/SectionAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_NOSECTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA56310)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int NoSectionAttribute_TypeDefinitionIndex = 28927;

	class NoSectionAttribute : public ::FluffyUnderware::DevTools::SectionAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_NOSECTIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
