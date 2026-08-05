#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_2.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define STRUCT_2_B7DF2440DA97F8FA_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7F95D0)
#define STRUCT_2_B7DF2440DA97F8FA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F95C0)

inline static constexpr unsigned int Struct_2_B7DF2440DA97F8FA_TypeDefinitionIndex = 56715;

struct alignas(8) Struct_2_B7DF2440DA97F8FA
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_7; // 0x14
	::System::Int32 Field_2_6; // 0x18
	::MoleMole::Battle::Entity* Field_2_5; // 0x20
	::Enum_3_F80BFD5B986D5503_2 Field_2_4; // 0x28
	::System::Int32 Field_2_11; // 0x2C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B7DF2440DA97F8FA_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B7DF2440DA97F8FA_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
