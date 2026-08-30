#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_OBFUSCATELITERALSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xB105010)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int ObfuscateLiteralsAttribute_TypeDefinitionIndex = 47495;

	class ObfuscateLiteralsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_OBFUSCATELITERALSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
