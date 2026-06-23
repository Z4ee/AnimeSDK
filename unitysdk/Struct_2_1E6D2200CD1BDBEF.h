#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_1E6D2200CD1BDBEF_METHOD_2_A7F0DC7F81309ECC_OFFSET UNITYSDK_OFFSET(0x109E6B60)
#define STRUCT_2_1E6D2200CD1BDBEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x109E6B50)
#define STRUCT_2_1E6D2200CD1BDBEF__CTOR_OFFSET UNITYSDK_OFFSET(0x6D9B20)

inline static constexpr unsigned int Struct_2_1E6D2200CD1BDBEF_TypeDefinitionIndex = 48316;

struct alignas(4) Struct_2_1E6D2200CD1BDBEF
{
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_1E6D2200CD1BDBEF_TypeDefinitionIndex)->GetStaticField(0x10460);
	}
	::System::Single Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::Boolean Field_2_3; // 0x18

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_1E6D2200CD1BDBEF__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_1E6D2200CD1BDBEF__CCTOR_OFFSET))();
	}

	static ::Struct_2_1E6D2200CD1BDBEF Method_2_A7F0DC7F81309ECC()
	{
		return ((::Struct_2_1E6D2200CD1BDBEF(*)())((::PBYTE)hIl2Cpp + STRUCT_2_1E6D2200CD1BDBEF_METHOD_2_A7F0DC7F81309ECC_OFFSET))();
	}
};
