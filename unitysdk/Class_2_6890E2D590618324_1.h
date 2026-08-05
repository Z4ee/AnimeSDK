#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_146.h"
#include "unitysdk/Enum_3_DB58B02B1066358F.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_2_6890E2D590618324_1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1D2AC510)
#define CLASS_2_6890E2D590618324_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AC520)

inline static constexpr unsigned int Class_2_6890E2D590618324_1_TypeDefinitionIndex = 92528;

class Class_2_6890E2D590618324_1 : public ::Class_1_43BD383C98B4C0C5_146
{
public:
	::Struct_2_E614D3B245F96744 Field_2_0; // 0x10
	::System::Single Field_2_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6890E2D590618324_1__CTOR_OFFSET))(this);
	}

	::Enum_3_DB58B02B1066358F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_DB58B02B1066358F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6890E2D590618324_1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
