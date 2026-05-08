#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B196590B3E289741_Enum_3_7C1DE53290689757.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B196590B3E289741_METHOD_2_CB70D477535F26A0_1_OFFSET UNITYSDK_OFFSET(0x10B0E110)
#define STRUCT_2_B196590B3E289741_METHOD_2_CB70D477535F26A0_OFFSET UNITYSDK_OFFSET(0x10B0E0D0)

inline static constexpr unsigned int Struct_2_B196590B3E289741_TypeDefinitionIndex = 68288;

struct alignas(4) Struct_2_B196590B3E289741
{
	::System::Char Field_2_0; // 0x10
	::Struct_2_B196590B3E289741_Enum_3_7C1DE53290689757 Field_2_1; // 0x14

	static ::Struct_2_B196590B3E289741 Method_2_CB70D477535F26A0(::System::Char a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::System::Char))((::PBYTE)hIl2Cpp + STRUCT_2_B196590B3E289741_METHOD_2_CB70D477535F26A0_OFFSET))(a1);
	}

	static ::System::Char Method_2_CB70D477535F26A0_1(::Struct_2_B196590B3E289741 a1)
	{
		return ((::System::Char(*)(::Struct_2_B196590B3E289741))((::PBYTE)hIl2Cpp + STRUCT_2_B196590B3E289741_METHOD_2_CB70D477535F26A0_1_OFFSET))(a1);
	}
};
