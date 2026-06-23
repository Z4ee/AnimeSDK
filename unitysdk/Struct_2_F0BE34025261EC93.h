#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DF72C89EA582800B.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AIParamType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F0BE34025261EC93_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x7B1CE0)
#define STRUCT_2_F0BE34025261EC93_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7B1D00)
#define STRUCT_2_F0BE34025261EC93_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x7B1C90)
#define STRUCT_2_F0BE34025261EC93_METHOD_2_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x7B1D80)
#define STRUCT_2_F0BE34025261EC93_METHOD_2_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x7B1DD0)
#define STRUCT_2_F0BE34025261EC93_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x7B1C40)
#define STRUCT_2_F0BE34025261EC93_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7B1C30)

inline static constexpr unsigned int Struct_2_F0BE34025261EC93_TypeDefinitionIndex = 71846;

struct alignas(8) Struct_2_F0BE34025261EC93
{
	::Enum_3_DF72C89EA582800B Field_2_0; // 0x10
	::MoleMole::FlowCanvas::Nodes::AIParamType Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::System::String* Field_2_5; // 0x28

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0BE34025261EC93_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0BE34025261EC93_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0BE34025261EC93_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	/*
	::Struct_2_A47ACAABA9AAFE92 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0BE34025261EC93_METHOD_2_1F8314262457963A_OFFSET))(this);
	}
	*/

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0BE34025261EC93_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0BE34025261EC93_METHOD_2_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0BE34025261EC93_METHOD_2_391A84BCD9F51317_3_OFFSET))(this);
	}
};
