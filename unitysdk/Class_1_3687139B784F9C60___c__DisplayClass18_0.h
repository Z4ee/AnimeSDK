#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_3687139B784F9C60___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB915630)
#define CLASS_1_3687139B784F9C60___C__DISPLAYCLASS18_0___WAITFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0xB915C90)

inline static constexpr unsigned int Class_1_3687139B784F9C60___c__DisplayClass18_0_TypeDefinitionIndex = 75965;

class Class_1_3687139B784F9C60___c__DisplayClass18_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3687139B784F9C60___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void __WaitFadeIn_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3687139B784F9C60___C__DISPLAYCLASS18_0___WAITFADEIN_B__0_OFFSET))(this);
	}
};
