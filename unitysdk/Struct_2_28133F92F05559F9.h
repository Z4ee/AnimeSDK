#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_28133F92F05559F9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B1C070)

inline static constexpr unsigned int Struct_2_28133F92F05559F9_TypeDefinitionIndex = 40174;

struct alignas(4) Struct_2_28133F92F05559F9
{
	::System::Int32 MFNIHGPPHNJ; // 0x10
	::System::UInt64 DBHKJLGDNAF; // 0x14

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_28133F92F05559F9_TOSTRING_OFFSET))(this);
	}
};
