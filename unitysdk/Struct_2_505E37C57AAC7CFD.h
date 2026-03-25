#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/SnowballPuzzleBlockType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_505E37C57AAC7CFD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x79630)

inline static constexpr unsigned int Struct_2_505E37C57AAC7CFD_TypeDefinitionIndex = 64317;

struct alignas(4) Struct_2_505E37C57AAC7CFD
{
	::RPG::Client::Prop::SnowballPuzzleBlockType Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_505E37C57AAC7CFD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
