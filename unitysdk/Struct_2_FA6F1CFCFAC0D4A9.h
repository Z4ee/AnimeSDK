#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/ValueType.h"

class Class_4_C3281F1010689A02;

#define STRUCT_2_FA6F1CFCFAC0D4A9_METHOD_2_A0ECBFEA2D1D05B9_OFFSET UNITYSDK_OFFSET(0x9A7A60)
#define STRUCT_2_FA6F1CFCFAC0D4A9__CTOR_OFFSET UNITYSDK_OFFSET(0x9A7A00)

inline static constexpr unsigned int Struct_2_FA6F1CFCFAC0D4A9_TypeDefinitionIndex = 92044;

struct alignas(8) Struct_2_FA6F1CFCFAC0D4A9
{
	::System::Int32 Field_2_3; // 0x10
	::Struct_2_E614D3B245F96744_1 Field_2_2; // 0x14
	::Struct_2_E614D3B245F96744_1 Field_2_1; // 0x20
	::System::UInt64 Field_2_0; // 0x30
	::System::Single Field_2_7; // 0x38

	::System::Void _ctor(::Class_4_C3281F1010689A02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C3281F1010689A02*))((::PBYTE)hIl2Cpp + STRUCT_2_FA6F1CFCFAC0D4A9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0ECBFEA2D1D05B9(::Class_4_C3281F1010689A02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C3281F1010689A02*))((::PBYTE)hIl2Cpp + STRUCT_2_FA6F1CFCFAC0D4A9_METHOD_2_A0ECBFEA2D1D05B9_OFFSET))(this, a1);
	}
};
