#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x9596F0)
#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x9597D0)
#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_9BE26A3C0DCB5899_1_OFFSET UNITYSDK_OFFSET(0xD9BDC20)
#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_9BE26A3C0DCB5899_OFFSET UNITYSDK_OFFSET(0xD9BDBC0)
#define STRUCT_2_D3B84DD3734B83D6_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x959760)
#define STRUCT_2_D3B84DD3734B83D6__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9BDD70)
#define STRUCT_2_D3B84DD3734B83D6__CTOR_OFFSET UNITYSDK_OFFSET(0x959750)

inline static constexpr unsigned int Struct_2_D3B84DD3734B83D6_TypeDefinitionIndex = 52806;

struct alignas(4) Struct_2_D3B84DD3734B83D6
{
	static ::Struct_2_D3B84DD3734B83D6* StaticGet_Field_2_2()
	{
		return (::Struct_2_D3B84DD3734B83D6*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D3B84DD3734B83D6_TypeDefinitionIndex)->GetStaticField(0x2480);
	}
	::System::Boolean Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14

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
