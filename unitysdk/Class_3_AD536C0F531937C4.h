#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

#define CLASS_3_AD536C0F531937C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E8070)

inline static constexpr unsigned int Class_3_AD536C0F531937C4_TypeDefinitionIndex = 26299;

class Class_3_AD536C0F531937C4 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::UInt64 Field_3_3; // 0x10
	::System::UInt32 Field_3_1; // 0x18
	::System::UInt32 Field_3_0; // 0x1C
	::System::UInt32 Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD536C0F531937C4__CTOR_OFFSET))(this);
	}
};
