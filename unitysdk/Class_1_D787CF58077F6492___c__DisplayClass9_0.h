#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_D787CF58077F6492___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x159EF490)
#define CLASS_1_D787CF58077F6492___C__DISPLAYCLASS9_0___ONFADEINFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x159EF4A0)

inline static constexpr unsigned int Class_1_D787CF58077F6492___c__DisplayClass9_0_TypeDefinitionIndex = 60469;

class Class_1_D787CF58077F6492___c__DisplayClass9_0 : public ::System::Object
{
public:
	::System::Action* beforeSwitchMapCallback; // 0x10
	::System::Action* switchMapCallback; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D787CF58077F6492___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnFadeInFinished_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D787CF58077F6492___C__DISPLAYCLASS9_0___ONFADEINFINISHED_B__0_OFFSET))(this);
	}
};
