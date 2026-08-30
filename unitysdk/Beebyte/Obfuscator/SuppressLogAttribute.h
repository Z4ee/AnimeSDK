#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Beebyte/Obfuscator/MessageCode.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_SUPPRESSLOGATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB55AB0)
#define BEEBYTE_OBFUSCATOR_SUPPRESSLOGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB55AA0)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int SuppressLogAttribute_TypeDefinitionIndex = 47500;

	class SuppressLogAttribute : public ::System::Attribute
	{
	public:
		::Beebyte::Obfuscator::MessageCode _messageCode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_SUPPRESSLOGATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Beebyte::Obfuscator::MessageCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Beebyte::Obfuscator::MessageCode))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_SUPPRESSLOGATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}
	};
}
