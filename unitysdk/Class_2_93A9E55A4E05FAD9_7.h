#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_146.h"
#include "unitysdk/Enum_3_DB58B02B1066358F.h"

#define CLASS_2_93A9E55A4E05FAD9_7_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CF80050)
#define CLASS_2_93A9E55A4E05FAD9_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF80060)

inline static constexpr unsigned int Class_2_93A9E55A4E05FAD9_7_TypeDefinitionIndex = 91675;

class Class_2_93A9E55A4E05FAD9_7 : public ::Class_1_43BD383C98B4C0C5_146
{
public:
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_6; // 0x14
	::System::Single Field_2_5; // 0x18
	::System::Single Field_2_7; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93A9E55A4E05FAD9_7__CTOR_OFFSET))(this);
	}

	::Enum_3_DB58B02B1066358F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_DB58B02B1066358F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93A9E55A4E05FAD9_7_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
