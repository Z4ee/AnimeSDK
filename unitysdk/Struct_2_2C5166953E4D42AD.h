#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_999CBF2719791834_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_2C5166953E4D42AD_METHOD_2_7A11106D60C5C746_OFFSET UNITYSDK_OFFSET(0x93E7B0)

inline static constexpr unsigned int Struct_2_2C5166953E4D42AD_TypeDefinitionIndex = 88145;

struct alignas(8) Struct_2_2C5166953E4D42AD
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18
	::Enum_3_999CBF2719791834_1 Field_2_3; // 0x1C
	::Il2CppArray<::System::Int32>* Field_2_4; // 0x20
	::System::Boolean Field_2_5; // 0x28
	::System::Int32 Field_2_6; // 0x2C

	::System::String* Method_2_7A11106D60C5C746()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2C5166953E4D42AD_METHOD_2_7A11106D60C5C746_OFFSET))(this);
	}
};
