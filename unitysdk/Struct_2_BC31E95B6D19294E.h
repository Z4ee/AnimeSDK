#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BC31E95B6D19294E_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xA55F80)

inline static constexpr unsigned int Struct_2_BC31E95B6D19294E_TypeDefinitionIndex = 28906;

struct alignas(4) Struct_2_BC31E95B6D19294E
{
	::System::Int32 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_BC31E95B6D19294E_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
