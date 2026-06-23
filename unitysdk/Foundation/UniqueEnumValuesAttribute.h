#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define FOUNDATION_UNIQUEENUMVALUESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EEB00)

namespace Foundation
{
	inline static constexpr unsigned int UniqueEnumValuesAttribute_TypeDefinitionIndex = 8290;

	class UniqueEnumValuesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNIQUEENUMVALUESATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
