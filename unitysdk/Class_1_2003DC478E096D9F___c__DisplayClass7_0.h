#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2003DC478E096D9F_Class_1_B14FCD15EF526C02;
class Class_1_5DE540BE3CE398E6;
class Class_1_B26E06FC40F846CD_1;

#define CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C99ED0)
#define CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS7_0___SENDNORMALENDMATCHASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x17C9A0F0)

inline static constexpr unsigned int Class_1_2003DC478E096D9F___c__DisplayClass7_0_TypeDefinitionIndex = 80526;

class Class_1_2003DC478E096D9F___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_2003DC478E096D9F_Class_1_B14FCD15EF526C02* requestData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::Class_1_B26E06FC40F846CD_1* __SendNormalEndMatchAsync_b__0(::Class_1_5DE540BE3CE398E6* a1)
	{
		return ((::Class_1_B26E06FC40F846CD_1*(*)(::PVOID, ::Class_1_5DE540BE3CE398E6*))((::PBYTE)hIl2Cpp + CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS7_0___SENDNORMALENDMATCHASYNC_B__0_OFFSET))(this, a1);
	}
};
