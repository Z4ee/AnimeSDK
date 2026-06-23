#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F61C0D2131DCF73F.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_13128E6E9D03EE8C_METHOD_2_24676A14566457DE_OFFSET UNITYSDK_OFFSET(0xA55F70)
#define STRUCT_2_13128E6E9D03EE8C_METHOD_2_952B3FCCBFDD3086_OFFSET UNITYSDK_OFFSET(0x1E1399B0)
#define STRUCT_2_13128E6E9D03EE8C_METHOD_2_C35F9447FBF9C866_1_OFFSET UNITYSDK_OFFSET(0x1E139BD0)
#define STRUCT_2_13128E6E9D03EE8C_METHOD_2_C35F9447FBF9C866_OFFSET UNITYSDK_OFFSET(0x1E139910)
#define STRUCT_2_13128E6E9D03EE8C_METHOD_2_E5F4A318458ABAEF_OFFSET UNITYSDK_OFFSET(0x1E139860)
#define STRUCT_2_13128E6E9D03EE8C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7D28C0)

inline static constexpr unsigned int Struct_2_13128E6E9D03EE8C_TypeDefinitionIndex = 28957;

struct alignas(4) Struct_2_13128E6E9D03EE8C
{
	::Enum_3_F61C0D2131DCF73F Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::System::Single Field_2_5; // 0x24
	::System::Boolean Field_2_6; // 0x28

	static ::Struct_2_13128E6E9D03EE8C Method_2_E5F4A318458ABAEF(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Struct_2_13128E6E9D03EE8C(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_13128E6E9D03EE8C_METHOD_2_E5F4A318458ABAEF_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_13128E6E9D03EE8C Method_2_C35F9447FBF9C866(::System::Single a1, ::System::Single a2)
	{
		return ((::Struct_2_13128E6E9D03EE8C(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_13128E6E9D03EE8C_METHOD_2_C35F9447FBF9C866_OFFSET))(a1, a2);
	}

	static ::Struct_2_13128E6E9D03EE8C Method_2_952B3FCCBFDD3086(::System::Int32 a1)
	{
		return ((::Struct_2_13128E6E9D03EE8C(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_13128E6E9D03EE8C_METHOD_2_952B3FCCBFDD3086_OFFSET))(a1);
	}

	/*
	::Struct_2_E614D3B245F96744_1 Method_2_24676A14566457DE()
	{
		return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_13128E6E9D03EE8C_METHOD_2_24676A14566457DE_OFFSET))(this);
	}
	*/

	static ::Struct_2_13128E6E9D03EE8C Method_2_C35F9447FBF9C866_1(::System::Single a1, ::System::Single a2)
	{
		return ((::Struct_2_13128E6E9D03EE8C(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_13128E6E9D03EE8C_METHOD_2_C35F9447FBF9C866_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_13128E6E9D03EE8C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
