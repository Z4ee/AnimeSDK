#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5674E7B417F2830A_2_METHOD_2_771E14CA77DDAA9E_OFFSET UNITYSDK_OFFSET(0x2DF13A0)
#define STRUCT_2_5674E7B417F2830A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x7DC40)

inline static constexpr unsigned int Struct_2_5674E7B417F2830A_2_TypeDefinitionIndex = 62133;

struct alignas(4) Struct_2_5674E7B417F2830A_2
{
	::System::Int32 KDMHBDFCNMG; // 0x10
	::System::Int32 GLNJBPOLMCN; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_771E14CA77DDAA9E(::Struct_2_5674E7B417F2830A_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_2))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_2_METHOD_2_771E14CA77DDAA9E_OFFSET))(this, a1);
	}
};
