#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6C6363C2772DEF01;
class Class_1_81B79AD3A1445119;
class Class_1_B26E06FC40F846CD_1;

#define CLASS_1_81B79AD3A1445119___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1524D520)
#define CLASS_1_81B79AD3A1445119___C__DISPLAYCLASS20_0___HANDLEFINISHEDENDMATCHREADYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1524E400)

inline static constexpr unsigned int Class_1_81B79AD3A1445119___c__DisplayClass20_0_TypeDefinitionIndex = 80522;

class Class_1_81B79AD3A1445119___c__DisplayClass20_0 : public ::System::Object
{
public:
	::Class_1_B26E06FC40F846CD_1* endMatchResult; // 0x10
	::Class_1_6C6363C2772DEF01* result; // 0x18
	::Class_1_81B79AD3A1445119* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B79AD3A1445119___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Void __HandleFinishedEndMatchReadyAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B79AD3A1445119___C__DISPLAYCLASS20_0___HANDLEFINISHEDENDMATCHREADYASYNC_B__0_OFFSET))(this);
	}
};
