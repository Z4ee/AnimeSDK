#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_SKIPRENAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xA09F070)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int SkipRenameAttribute_TypeDefinitionIndex = 44393;

	class SkipRenameAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_SKIPRENAMEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
