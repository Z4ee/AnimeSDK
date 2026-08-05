#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AABA1B8087026F0F.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D375C91CCE5D3999;

#define STRUCT_2_55C21A1C92240CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x41F420)

inline static constexpr unsigned int Struct_2_55C21A1C92240CC8_TypeDefinitionIndex = 63792;

struct alignas(8) Struct_2_55C21A1C92240CC8
{
	::Class_1_D375C91CCE5D3999* Field_2_0; // 0x10
	::Struct_2_AABA1B8087026F0F Field_2_7; // 0x18

	::System::Void _ctor(::Class_1_D375C91CCE5D3999* a1, ::Struct_2_AABA1B8087026F0F a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::Struct_2_AABA1B8087026F0F))((::PBYTE)hIl2Cpp + STRUCT_2_55C21A1C92240CC8__CTOR_OFFSET))(this, a1, a2);
	}
};
