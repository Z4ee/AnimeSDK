#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"

#define CLASS_2_A48F3719AA1CF200_13_ONINIT_OFFSET UNITYSDK_OFFSET(0x16D77A10)
#define CLASS_2_A48F3719AA1CF200_13_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x16D77A50)
#define CLASS_2_A48F3719AA1CF200_13__CTOR_OFFSET UNITYSDK_OFFSET(0x16D77A90)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_13_TypeDefinitionIndex = 57588;

class Class_2_A48F3719AA1CF200_13 : public ::Class_1_5BBB2050B3F3F683
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_13__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_13_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_13_ONUNINIT_OFFSET))(this);
	}
};
