#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_3.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_3_04820E737FE104A4;

#define STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_1_OFFSET UNITYSDK_OFFSET(0x13CE2320)
#define STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_2_OFFSET UNITYSDK_OFFSET(0x13CE22D0)
#define STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x13CE2280)
#define STRUCT_2_C2C4FAC151E77BCA_METHOD_2_81282B53AA5D02B6_OFFSET UNITYSDK_OFFSET(0x13CE20B0)
#define STRUCT_2_C2C4FAC151E77BCA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7E00B0)
#define STRUCT_2_C2C4FAC151E77BCA__CTOR_OFFSET UNITYSDK_OFFSET(0x7E00A0)

inline static constexpr unsigned int Struct_2_C2C4FAC151E77BCA_TypeDefinitionIndex = 84192;

struct alignas(4) Struct_2_C2C4FAC151E77BCA
{
	::System::Boolean Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14
	::Enum_3_96F6662CA3713095_3 Field_2_7; // 0x18
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_2_6; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_96F6662CA3713095_3 a2, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_96F6662CA3713095_3, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA__CTOR_1_OFFSET))(this, a1);
	}

	static ::Struct_2_C2C4FAC151E77BCA Method_2_81282B53AA5D02B6(::Class_3_04820E737FE104A4*& a1)
	{
		return ((::Struct_2_C2C4FAC151E77BCA(*)(::Class_3_04820E737FE104A4*&))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA_METHOD_2_81282B53AA5D02B6_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_797B0DC3D00A8877(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_C2C4FAC151E77BCA_METHOD_2_797B0DC3D00A8877_OFFSET))(a1);
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
