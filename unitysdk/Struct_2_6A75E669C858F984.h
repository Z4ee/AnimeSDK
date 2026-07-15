#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6A75E669C858F984_METHOD_2_025ADAC9DC75B86A_OFFSET UNITYSDK_OFFSET(0x157E8C60)
#define STRUCT_2_6A75E669C858F984_METHOD_2_B6A2F70566B996CF_OFFSET UNITYSDK_OFFSET(0x157E8C20)

inline static constexpr unsigned int Struct_2_6A75E669C858F984_TypeDefinitionIndex = 54603;

struct alignas(4) Struct_2_6A75E669C858F984
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	static ::Struct_2_6A75E669C858F984 Method_2_B6A2F70566B996CF(::System::UInt32 a1)
	{
		return ((::Struct_2_6A75E669C858F984(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_6A75E669C858F984_METHOD_2_B6A2F70566B996CF_OFFSET))(a1);
	}

	static ::Struct_2_6A75E669C858F984 Method_2_025ADAC9DC75B86A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Struct_2_6A75E669C858F984(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_6A75E669C858F984_METHOD_2_025ADAC9DC75B86A_OFFSET))(a1, a2);
	}
};
