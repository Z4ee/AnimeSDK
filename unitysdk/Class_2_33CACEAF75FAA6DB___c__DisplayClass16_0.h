#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181A7F9409C60DBC;
class Class_2_33CACEAF75FAA6DB;

#define CLASS_2_33CACEAF75FAA6DB___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x90560F0)
#define CLASS_2_33CACEAF75FAA6DB___C__DISPLAYCLASS16_0___DOSPLIT_B__0_OFFSET UNITYSDK_OFFSET(0x9056AD0)

inline static constexpr unsigned int Class_2_33CACEAF75FAA6DB___c__DisplayClass16_0_TypeDefinitionIndex = 71413;

class Class_2_33CACEAF75FAA6DB___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_2_181A7F9409C60DBC* soldierEntity; // 0x10
	::Class_2_33CACEAF75FAA6DB* __4__this; // 0x18
	::System::UInt32 effectUID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void __DoSplit_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB___C__DISPLAYCLASS16_0___DOSPLIT_B__0_OFFSET))(this);
	}
};
