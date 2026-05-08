#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B19988988E716CB3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_4B0DF145F14A458C;

#define STRUCT_2_3AC35AAFD3FB9098_METHOD_2_0895E0022AF10CB9_OFFSET UNITYSDK_OFFSET(0x135901A0)
#define STRUCT_2_3AC35AAFD3FB9098__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

inline static constexpr unsigned int Struct_2_3AC35AAFD3FB9098_TypeDefinitionIndex = 50007;

struct alignas(8) Struct_2_3AC35AAFD3FB9098
{
	::Class_1_4B0DF145F14A458C* Field_2_0; // 0x10

	::System::Void _ctor(::Class_1_4B0DF145F14A458C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B0DF145F14A458C*))((::PBYTE)hIl2Cpp + STRUCT_2_3AC35AAFD3FB9098__CTOR_OFFSET))(this, a1);
	}

	static ::Struct_2_3AC35AAFD3FB9098 Method_2_0895E0022AF10CB9(::Class_1_4B0DF145F14A458C* a1)
	{
		return ((::Struct_2_3AC35AAFD3FB9098(*)(::Class_1_4B0DF145F14A458C*))((::PBYTE)hIl2Cpp + STRUCT_2_3AC35AAFD3FB9098_METHOD_2_0895E0022AF10CB9_OFFSET))(a1);
	}
};
