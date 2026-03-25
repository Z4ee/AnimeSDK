#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_E8C1B530F552FEF0_METHOD_2_284A00008B880FD6_OFFSET UNITYSDK_OFFSET(0xC5AE40)
#define STRUCT_2_E8C1B530F552FEF0_METHOD_2_B31AD72F99F92A8B_OFFSET UNITYSDK_OFFSET(0xC5AF40)
#define STRUCT_2_E8C1B530F552FEF0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC5AED0)
#define STRUCT_2_E8C1B530F552FEF0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5AE90)

inline static constexpr unsigned int Struct_2_E8C1B530F552FEF0_TypeDefinitionIndex = 60712;

struct alignas(8) Struct_2_E8C1B530F552FEF0
{
	::System::Int32 Field_2_0; // 0x10
	::System::Double Field_2_1; // 0x18
	::System::Double Field_2_2; // 0x20
	::System::Double Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x30
	::System::Int32 Field_2_5; // 0x34
	::System::Int32 Field_2_6; // 0x38
	::System::Int32 Field_2_7; // 0x3C
	::System::Int32 Field_2_8; // 0x40
	::System::Int32 Field_2_9; // 0x44
	::System::Int32 Field_2_10; // 0x48
	::System::Int32 Field_2_11; // 0x4C
	::System::Int32 Field_2_12; // 0x50
	::System::Int32 Field_2_13; // 0x54

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E8C1B530F552FEF0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Double Method_2_284A00008B880FD6()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8C1B530F552FEF0_METHOD_2_284A00008B880FD6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8C1B530F552FEF0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B31AD72F99F92A8B(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_E8C1B530F552FEF0_METHOD_2_B31AD72F99F92A8B_OFFSET))(this, a1);
	}
};
