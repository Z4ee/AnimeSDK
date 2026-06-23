#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B56D952AF3A4D6B4.h"
#include "unitysdk/System/ValueType.h"

class Class_1_33E2BE587EE07FAA;
class Class_1_946637E2EE927FA0;

#define STRUCT_2_1AA4553FE204ABD1_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x467A90)
#define STRUCT_2_1AA4553FE204ABD1_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8287D0)
#define STRUCT_2_1AA4553FE204ABD1_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xA52D90)
#define STRUCT_2_1AA4553FE204ABD1_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xA52D70)
#define STRUCT_2_1AA4553FE204ABD1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA52D80)

inline static constexpr unsigned int Struct_2_1AA4553FE204ABD1_TypeDefinitionIndex = 18570;

struct alignas(8) Struct_2_1AA4553FE204ABD1
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20
	::System::Int32 Field_2_5; // 0x24
	::Struct_2_B56D952AF3A4D6B4 Field_2_6; // 0x28
	::System::UInt32 Field_2_7; // 0x78
	::System::UInt32 Field_2_8; // 0x7C
	::System::Boolean Field_2_9; // 0x80
	::System::Int32 Field_2_10; // 0x84
	::System::Int32 Field_2_11; // 0x88
	::System::Boolean Field_2_12; // 0x8C
	::Class_1_946637E2EE927FA0* Field_2_13; // 0x90

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_1AA4553FE204ABD1_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1AA4553FE204ABD1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_946637E2EE927FA0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_946637E2EE927FA0*))((::PBYTE)hIl2Cpp + STRUCT_2_1AA4553FE204ABD1_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_946637E2EE927FA0* Method_2_24748FC20F375725()
	{
		return ((::Class_1_946637E2EE927FA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1AA4553FE204ABD1_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_33E2BE587EE07FAA* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_33E2BE587EE07FAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1AA4553FE204ABD1_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}
};
