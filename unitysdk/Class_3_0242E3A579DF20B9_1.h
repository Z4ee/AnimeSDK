#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

#define CLASS_3_0242E3A579DF20B9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B445320)

inline static constexpr unsigned int Class_3_0242E3A579DF20B9_1_TypeDefinitionIndex = 83543;

class Class_3_0242E3A579DF20B9_1 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::UInt64 Field_3_2; // 0x10
	::System::UInt64 Field_3_3; // 0x18
	::System::UInt32 Field_3_5; // 0x20
	::System::Int32 Field_3_4; // 0x24
	::System::UInt64 Field_3_1; // 0x28
	::System::UInt64 Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0242E3A579DF20B9_1__CTOR_OFFSET))(this);
	}
};
