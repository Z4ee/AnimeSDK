#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_CD06BB4AEFF829C1___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDE120)
#define CLASS_1_CD06BB4AEFF829C1___C__DISPLAYCLASS16_0__ISTOOUNIFORM_B__1_OFFSET UNITYSDK_OFFSET(0xBDDE240)

inline static constexpr unsigned int Class_1_CD06BB4AEFF829C1___c__DisplayClass16_0_TypeDefinitionIndex = 77433;

class Class_1_CD06BB4AEFF829C1___c__DisplayClass16_0 : public ::System::Object
{
public:
	::System::Single mean; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Single _IsTooUniform_b__1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD06BB4AEFF829C1___C__DISPLAYCLASS16_0__ISTOOUNIFORM_B__1_OFFSET))(this, a1);
	}
};
