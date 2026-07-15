#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C0259C461ECB54D1.h"

namespace System { class String; }

#define CLASS_2_13D52EEB41A5D5DC_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x160717B0)
#define CLASS_2_13D52EEB41A5D5DC_METHOD_2_D643BAC787BFCBDF_OFFSET UNITYSDK_OFFSET(0x16071840)
#define CLASS_2_13D52EEB41A5D5DC__CTOR_OFFSET UNITYSDK_OFFSET(0x16071F00)

inline static constexpr unsigned int Class_2_13D52EEB41A5D5DC_TypeDefinitionIndex = 58370;

class Class_2_13D52EEB41A5D5DC : public ::Class_1_C0259C461ECB54D1
{
public:
	::System::String* Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13D52EEB41A5D5DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13D52EEB41A5D5DC_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_D643BAC787BFCBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_13D52EEB41A5D5DC_METHOD_2_D643BAC787BFCBDF_OFFSET))(this, a1);
	}
};
