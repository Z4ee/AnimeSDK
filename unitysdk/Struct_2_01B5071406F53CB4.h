#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_01B5071406F53CB4_METHOD_2_F0F95668B2FECCC8_OFFSET UNITYSDK_OFFSET(0x11B59470)

inline static constexpr unsigned int Struct_2_01B5071406F53CB4_TypeDefinitionIndex = 77092;

struct alignas(4) Struct_2_01B5071406F53CB4
{
	// static const ::System::Int32 Field_2_0 = 0xFFFF; // 0x0
	::System::UInt32 Field_2_1; // 0x10
	::System::Int16 Field_2_2; // 0x14
	::System::UInt16 Field_2_3; // 0x16
	::System::UInt16 Field_2_4; // 0x18
	::System::UInt16 Field_2_5; // 0x1A

	static ::Struct_2_01B5071406F53CB4 Method_2_F0F95668B2FECCC8(::System::Int32 a1)
	{
		return ((::Struct_2_01B5071406F53CB4(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_01B5071406F53CB4_METHOD_2_F0F95668B2FECCC8_OFFSET))(a1);
	}
};
