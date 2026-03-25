#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_OBFUSCATELITERALSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x835B010)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int ObfuscateLiteralsAttribute_TypeDefinitionIndex = 37970;

	class ObfuscateLiteralsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_OBFUSCATELITERALSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
