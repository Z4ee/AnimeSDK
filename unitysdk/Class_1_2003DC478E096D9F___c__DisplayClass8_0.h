#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2003DC478E096D9F_Class_1_B14FCD15EF526C02;
class Class_1_B26E06FC40F846CD_1;
class Class_1_D17272E82AE804C2_145;

#define CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C99EE0)
#define CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS8_0___SENDCHALLENGEENDMATCHASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x17C9A190)

inline static constexpr unsigned int Class_1_2003DC478E096D9F___c__DisplayClass8_0_TypeDefinitionIndex = 80527;

class Class_1_2003DC478E096D9F___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_2003DC478E096D9F_Class_1_B14FCD15EF526C02* requestData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::Class_1_B26E06FC40F846CD_1* __SendChallengeEndMatchAsync_b__0(::Class_1_D17272E82AE804C2_145* a1)
	{
		return ((::Class_1_B26E06FC40F846CD_1*(*)(::PVOID, ::Class_1_D17272E82AE804C2_145*))((::PBYTE)hIl2Cpp + CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS8_0___SENDCHALLENGEENDMATCHASYNC_B__0_OFFSET))(this, a1);
	}
};
