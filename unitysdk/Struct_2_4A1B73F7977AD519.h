#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3C4FECE406CE29EE.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_4A1B73F7977AD519_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xA2F0C0)
#define STRUCT_2_4A1B73F7977AD519_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2F0B0)

inline static constexpr unsigned int Struct_2_4A1B73F7977AD519_TypeDefinitionIndex = 89598;

struct alignas(4) Struct_2_4A1B73F7977AD519
{
	::Enum_3_3C4FECE406CE29EE Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4A1B73F7977AD519_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4A1B73F7977AD519_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
