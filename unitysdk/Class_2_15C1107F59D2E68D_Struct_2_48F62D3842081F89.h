#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_15C1107F59D2E68D_STRUCT_2_48F62D3842081F89_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC04C20)

inline static constexpr unsigned int Class_2_15C1107F59D2E68D_Struct_2_48F62D3842081F89_TypeDefinitionIndex = 53499;

struct alignas(4) Class_2_15C1107F59D2E68D_Struct_2_48F62D3842081F89
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Int32 CompareTo(::Class_2_15C1107F59D2E68D_Struct_2_48F62D3842081F89 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_15C1107F59D2E68D_Struct_2_48F62D3842081F89))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_STRUCT_2_48F62D3842081F89_COMPARETO_OFFSET))(this, a1);
	}
};
