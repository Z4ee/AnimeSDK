#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE7CD10)
#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS53_0__RELEASEPRIORITY_B__0_OFFSET UNITYSDK_OFFSET(0xBE7CD20)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603___c__DisplayClass53_0_TypeDefinitionIndex = 49857;

class Class_2_B3BCC9AA95120603___c__DisplayClass53_0 : public ::System::Object
{
public:
	::System::Action* onChangeFinish; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReleasePriority_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS53_0__RELEASEPRIORITY_B__0_OFFSET))(this);
	}
};
