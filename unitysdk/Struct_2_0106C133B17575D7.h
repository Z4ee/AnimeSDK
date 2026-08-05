#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C52D8E01F122AD4F_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_0106C133B17575D7_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x820A80)
#define STRUCT_2_0106C133B17575D7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x820A70)

inline static constexpr unsigned int Struct_2_0106C133B17575D7_TypeDefinitionIndex = 69130;

struct alignas(4) Struct_2_0106C133B17575D7
{
	::System::Int32 Field_2_1; // 0x10
	::Enum_3_C52D8E01F122AD4F_1 Field_2_0; // 0x14

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0106C133B17575D7_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0106C133B17575D7_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
