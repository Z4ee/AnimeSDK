#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x8FC10)
#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x8FCF0)
#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_9BE26A3C0DCB5899_1_OFFSET UNITYSDK_OFFSET(0xC1472C0)
#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_9BE26A3C0DCB5899_OFFSET UNITYSDK_OFFSET(0xC147260)
#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x8FC80)
#define STRUCT_2_D3B84DD3734B83D6__CCTOR_OFFSET UNITYSDK_OFFSET(0xC147410)
#define STRUCT_2_D3B84DD3734B83D6__CTOR_OFFSET UNITYSDK_OFFSET(0x8FC70)

inline static constexpr unsigned int Struct_2_D3B84DD3734B83D6_TypeDefinitionIndex = 57449;

struct alignas(4) Struct_2_D3B84DD3734B83D6
{
	static ::Struct_2_D3B84DD3734B83D6* StaticGet_NKHLMJGGKEM()
	{
		return (::Struct_2_D3B84DD3734B83D6*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D3B84DD3734B83D6_TypeDefinitionIndex)->GetStaticField(0x4300);
	}
	::System::Boolean DMACAHCDGLH; // 0x10
	::System::Single LLICGDGPMJL; // 0x14

	::System::Void _ctor(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D3B84DD3734B83D6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D3B84DD3734B83D6__CCTOR_OFFSET))();
	}

	::Struct_2_D3B84DD3734B83D6 Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_D3B84DD3734B83D6(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D3B84DD3734B83D6_METHOD_2_71E25A039EF7FB83_OFFSET))(this);
	}

	static ::Struct_2_D3B84DD3734B83D6 Method_2_9BE26A3C0DCB5899(::System::Single a1)
	{
		return ((::Struct_2_D3B84DD3734B83D6(*)(::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D3B84DD3734B83D6_METHOD_2_9BE26A3C0DCB5899_OFFSET))(a1);
	}

	static ::Struct_2_D3B84DD3734B83D6 Method_2_9BE26A3C0DCB5899_1(::System::Single a1)
	{
		return ((::Struct_2_D3B84DD3734B83D6(*)(::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D3B84DD3734B83D6_METHOD_2_9BE26A3C0DCB5899_1_OFFSET))(a1);
	}

	::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D3B84DD3734B83D6_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D3B84DD3734B83D6_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}
};
