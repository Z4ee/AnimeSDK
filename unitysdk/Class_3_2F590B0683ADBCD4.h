#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6140430CE1FE631F.h"

class Class_0_16E4307DCC419505_212;

#define CLASS_3_2F590B0683ADBCD4_METHOD_3_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x12AACB80)
#define CLASS_3_2F590B0683ADBCD4_METHOD_3_4076A0EA8D9D10EA_OFFSET UNITYSDK_OFFSET(0x12AACD50)
#define CLASS_3_2F590B0683ADBCD4__CTOR_OFFSET UNITYSDK_OFFSET(0x12AACF30)

inline static constexpr unsigned int Class_3_2F590B0683ADBCD4_TypeDefinitionIndex = 67230;

class Class_3_2F590B0683ADBCD4 : public ::Class_2_6140430CE1FE631F
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F590B0683ADBCD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F590B0683ADBCD4_METHOD_3_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_3_4076A0EA8D9D10EA(::Class_0_16E4307DCC419505_212* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_212*))((::PBYTE)hIl2Cpp + CLASS_3_2F590B0683ADBCD4_METHOD_3_4076A0EA8D9D10EA_OFFSET))(this, a1);
	}
};
