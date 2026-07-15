#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_CCFCA8DBD02C90EA___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1507C2C0)
#define CLASS_3_CCFCA8DBD02C90EA___C__DISPLAYCLASS13_0___INITGAME_B__1_OFFSET UNITYSDK_OFFSET(0x1507C630)

inline static constexpr unsigned int Class_3_CCFCA8DBD02C90EA___c__DisplayClass13_0_TypeDefinitionIndex = 58418;

class Class_3_CCFCA8DBD02C90EA___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::Action* resolve; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __InitGame_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA___C__DISPLAYCLASS13_0___INITGAME_B__1_OFFSET))(this);
	}
};
