#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"

#define CLASS_3_AD536C0F531937C4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CB250)

inline static constexpr unsigned int Class_3_AD536C0F531937C4_1_TypeDefinitionIndex = 37430;

class Class_3_AD536C0F531937C4_1 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::UInt32 Field_3_0; // 0x10
	::System::UInt64 Field_3_2; // 0x18
	::System::UInt64 Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD536C0F531937C4_1__CTOR_OFFSET))(this);
	}
};
