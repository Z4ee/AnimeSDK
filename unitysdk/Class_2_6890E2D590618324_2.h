#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_144.h"
#include "unitysdk/Enum_3_DB58B02B1066358F.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_2_6890E2D590618324_2_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CBAC200)
#define CLASS_2_6890E2D590618324_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAC210)

inline static constexpr unsigned int Class_2_6890E2D590618324_2_TypeDefinitionIndex = 88536;

class Class_2_6890E2D590618324_2 : public ::Class_1_43BD383C98B4C0C5_144
{
public:
	::System::Single Field_2_1; // 0x10
	::System::Single Field_2_2; // 0x14
	::System::Single Field_2_3; // 0x18
	::Struct_2_E614D3B245F96744_1 Field_2_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6890E2D590618324_2__CTOR_OFFSET))(this);
	}

	::Enum_3_DB58B02B1066358F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_DB58B02B1066358F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6890E2D590618324_2_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
