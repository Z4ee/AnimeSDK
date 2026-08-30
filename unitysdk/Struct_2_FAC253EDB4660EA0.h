#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_26.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_FAC253EDB4660EA0_METHOD_2_AE976B57561152C1_OFFSET UNITYSDK_OFFSET(0x134FE580)
#define STRUCT_2_FAC253EDB4660EA0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BC1500)

inline static constexpr unsigned int Struct_2_FAC253EDB4660EA0_TypeDefinitionIndex = 67174;

struct alignas(8) Struct_2_FAC253EDB4660EA0
{
	::Enum_3_96F6662CA3713095_26 GMPGDEINODK; // 0x10
	::System::UInt64 PHFMCACHFIJ; // 0x18

	static ::Struct_2_FAC253EDB4660EA0 Method_2_AE976B57561152C1(::Enum_3_96F6662CA3713095_26 a1, ::System::UInt64 a2)
	{
		return ((::Struct_2_FAC253EDB4660EA0(*)(::Enum_3_96F6662CA3713095_26, ::System::UInt64))((::PBYTE)hIl2Cpp + STRUCT_2_FAC253EDB4660EA0_METHOD_2_AE976B57561152C1_OFFSET))(a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FAC253EDB4660EA0_TOSTRING_OFFSET))(this);
	}
};
