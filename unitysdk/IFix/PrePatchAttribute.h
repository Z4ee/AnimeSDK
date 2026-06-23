#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PREPATCHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CABD590)

namespace IFix
{
	inline static constexpr unsigned int PrePatchAttribute_TypeDefinitionIndex = 6912;

	class PrePatchAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PREPATCHATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
