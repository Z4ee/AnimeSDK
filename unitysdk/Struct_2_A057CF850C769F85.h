#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF7F1C413CECBBD.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_35;
class Class_3_DB267E245CF41057;
class Class_3_EC25B6E84130E2CA;
class Class_3_F41D242A20F8FE06;

#define STRUCT_2_A057CF850C769F85_METHOD_2_6075EB635AEE226F_OFFSET UNITYSDK_OFFSET(0x7BB450)
#define STRUCT_2_A057CF850C769F85_METHOD_2_762A9412773049BE_OFFSET UNITYSDK_OFFSET(0x7BB4C0)
#define STRUCT_2_A057CF850C769F85_METHOD_2_A37D73966307373B_OFFSET UNITYSDK_OFFSET(0x7BB440)
#define STRUCT_2_A057CF850C769F85_METHOD_2_E1A464DC29885BE4_OFFSET UNITYSDK_OFFSET(0x7BB430)

inline static constexpr unsigned int Struct_2_A057CF850C769F85_TypeDefinitionIndex = 49558;

struct alignas(8) Struct_2_A057CF850C769F85
{
	::Class_3_F41D242A20F8FE06* Field_2_0; // 0x10
	::Class_0_16E4307DCC419505_35* Field_2_1; // 0x18
	::Enum_3_7CF7F1C413CECBBD Field_2_2; // 0x20
	::Class_3_EC25B6E84130E2CA* Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x30
	::System::Int32 Field_2_5; // 0x34
	::System::Int32 Field_2_6; // 0x38
	::System::UInt32 Field_2_7; // 0x3C
	::System::UInt32 Field_2_8; // 0x40
	::System::Int32 Field_2_9; // 0x44
	::System::Boolean Field_2_10; // 0x48
	::System::UInt32 Field_2_11; // 0x4C
	::System::Boolean Field_2_12; // 0x50

	::Class_3_EC25B6E84130E2CA* Method_2_E1A464DC29885BE4(::Class_3_DB267E245CF41057* a1)
	{
		return ((::Class_3_EC25B6E84130E2CA*(*)(::PVOID, ::Class_3_DB267E245CF41057*))((::PBYTE)hIl2Cpp + STRUCT_2_A057CF850C769F85_METHOD_2_E1A464DC29885BE4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A37D73966307373B(::Enum_3_7CF7F1C413CECBBD a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7CF7F1C413CECBBD, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_A057CF850C769F85_METHOD_2_A37D73966307373B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6075EB635AEE226F(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_A057CF850C769F85_METHOD_2_6075EB635AEE226F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_762A9412773049BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A057CF850C769F85_METHOD_2_762A9412773049BE_OFFSET))(this);
	}
};
