#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_3_FDF004B094F6A736;

#define STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_1_OFFSET UNITYSDK_OFFSET(0x16B134C0)
#define STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_2_OFFSET UNITYSDK_OFFSET(0x16B13470)
#define STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x16B13250)
#define STRUCT_2_C2C4FAC151E77BCA_METHOD_2_81282B53AA5D02B6_OFFSET UNITYSDK_OFFSET(0x16B132A0)
#define STRUCT_2_C2C4FAC151E77BCA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x823F40)
#define STRUCT_2_C2C4FAC151E77BCA__CTOR_OFFSET UNITYSDK_OFFSET(0x823F30)

inline static constexpr unsigned int Struct_2_C2C4FAC151E77BCA_TypeDefinitionIndex = 40602;

struct alignas(4) Struct_2_C2C4FAC151E77BCA
{
	::System::Boolean Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::Enum_3_96F6662CA3713095_1 Field_2_2; // 0x18
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_2_3; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_96F6662CA3713095_1 a2, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_96F6662CA3713095_1, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_797B0DC3D00A8877(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_OFFSET))(a1);
	}

	static ::Struct_2_C2C4FAC151E77BCA Method_2_81282B53AA5D02B6(::Class_3_FDF004B094F6A736*& a1)
	{
		return ((::Struct_2_C2C4FAC151E77BCA(*)(::Class_3_FDF004B094F6A736*&))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA_METHOD_2_81282B53AA5D02B6_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_797B0DC3D00A8877_1(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_797B0DC3D00A8877_2(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_2_OFFSET))(a1);
	}
};
