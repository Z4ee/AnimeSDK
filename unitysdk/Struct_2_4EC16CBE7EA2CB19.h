#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4EC16CBE7EA2CB19_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x3AA8490)
#define STRUCT_2_4EC16CBE7EA2CB19__CCTOR_OFFSET UNITYSDK_OFFSET(0x170784F0)

inline static constexpr unsigned int Struct_2_4EC16CBE7EA2CB19_TypeDefinitionIndex = 73115;

struct alignas(8) Struct_2_4EC16CBE7EA2CB19
{
	static ::Struct_2_4EC16CBE7EA2CB19* StaticGet_NKHLMJGGKEM()
	{
		return (::Struct_2_4EC16CBE7EA2CB19*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4EC16CBE7EA2CB19_TypeDefinitionIndex)->GetStaticField(0x12870);
	}
	::System::UInt64 BFLIFKBEOPJ; // 0x10
	::System::UInt64 JIKHGFHNDOG; // 0x18
	::System::UInt64 MFGNBMNJPGP; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_4EC16CBE7EA2CB19__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4EC16CBE7EA2CB19_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
