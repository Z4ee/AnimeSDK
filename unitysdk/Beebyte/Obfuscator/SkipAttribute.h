#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_SKIPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x835B060)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int SkipAttribute_TypeDefinitionIndex = 37973;

	class SkipAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_SKIPATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
