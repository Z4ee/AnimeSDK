#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_SORTORDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F410)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int SortOrderAttribute_TypeDefinitionIndex = 28319;

	class SortOrderAttribute : public ::FluffyUnderware::DevTools::DTAttribute
	{
	public:
		::System::Void _ctor(::System::Int32 sort)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_SORTORDERATTRIBUTE__CTOR_OFFSET))(this, sort);
		}
	};
}
