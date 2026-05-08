#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_FBBD974B239A498C;
class Class_3_F33F9DC5F4112336;

#define STRUCT_2_7B4A5895C2061251_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7575E0)
#define STRUCT_2_7B4A5895C2061251__CTOR_OFFSET UNITYSDK_OFFSET(0x757520)

inline static constexpr unsigned int Struct_2_7B4A5895C2061251_TypeDefinitionIndex = 60536;

struct alignas(8) Struct_2_7B4A5895C2061251
{
	::Class_3_F33F9DC5F4112336* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor(::Class_3_F33F9DC5F4112336* a1, ::Class_1_FBBD974B239A498C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_1_FBBD974B239A498C*))((::PBYTE)hIl2Cpp + STRUCT_2_7B4A5895C2061251__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7B4A5895C2061251_DISPOSE_OFFSET))(this);
	}
};
