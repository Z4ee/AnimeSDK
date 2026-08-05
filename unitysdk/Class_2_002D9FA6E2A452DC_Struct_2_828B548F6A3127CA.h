#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_002D9FA6E2A452DC_Enum_3_CDE282738D723D98.h"
#include "unitysdk/Class_2_002D9FA6E2A452DC_Enum_3_FA7B5CFC83CAC996.h"
#include "unitysdk/Class_2_002D9FA6E2A452DC_Struct_2_B3931940C76432D7_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_002D9FA6E2A452DC_STRUCT_2_828B548F6A3127CA_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x848110)

inline static constexpr unsigned int Class_2_002D9FA6E2A452DC_Struct_2_828B548F6A3127CA_TypeDefinitionIndex = 75221;

struct alignas(8) Class_2_002D9FA6E2A452DC_Struct_2_828B548F6A3127CA
{
	::Class_2_002D9FA6E2A452DC_Enum_3_FA7B5CFC83CAC996 Field_2_3; // 0x10
	::Class_2_002D9FA6E2A452DC_Enum_3_CDE282738D723D98 Field_2_2; // 0x14
	::System::Collections::Generic::List_1<::Class_2_002D9FA6E2A452DC_Struct_2_B3931940C76432D7_1>* Field_2_1; // 0x18
	::System::Int64 Field_2_0; // 0x20
	::System::Int64 Field_2_7; // 0x28
	::System::Int32 Field_2_6; // 0x30
	::System::Boolean Field_2_5; // 0x34
	::System::UInt32 Field_2_4; // 0x38
	::System::UInt32 Field_2_11; // 0x3C

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_002D9FA6E2A452DC_STRUCT_2_828B548F6A3127CA_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
