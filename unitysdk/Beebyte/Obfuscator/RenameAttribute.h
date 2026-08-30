#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BEEBYTE_OBFUSCATOR_RENAMEATTRIBUTE_GETTARGET_OFFSET UNITYSDK_OFFSET(0xB105040)
#define BEEBYTE_OBFUSCATOR_RENAMEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB105030)
#define BEEBYTE_OBFUSCATOR_RENAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xB105020)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int RenameAttribute_TypeDefinitionIndex = 47496;

	class RenameAttribute : public ::System::Attribute
	{
	public:
		::System::String* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_RENAMEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_RENAMEATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* GetTarget()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_RENAMEATTRIBUTE_GETTARGET_OFFSET))(this);
		}
	};
}
