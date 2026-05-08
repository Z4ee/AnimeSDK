#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

#define CLASS_3_AD536C0F531937C4_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8346C0)

inline static constexpr unsigned int Class_3_AD536C0F531937C4_4_TypeDefinitionIndex = 84165;

class Class_3_AD536C0F531937C4_4 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::UInt32 Field_3_4; // 0x10
	::System::UInt64 Field_3_1; // 0x18
	::System::UInt64 Field_3_2; // 0x20
	::System::UInt64 Field_3_0; // 0x28
	::System::UInt64 Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD536C0F531937C4_4__CTOR_OFFSET))(this);
	}
};
