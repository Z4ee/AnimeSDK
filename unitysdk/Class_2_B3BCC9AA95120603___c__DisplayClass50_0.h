#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2C810)
#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS50_0__RELEASEPRIORITY_B__0_OFFSET UNITYSDK_OFFSET(0x16A31EE0)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603___c__DisplayClass50_0_TypeDefinitionIndex = 47576;

class Class_2_B3BCC9AA95120603___c__DisplayClass50_0 : public ::System::Object
{
public:
	::System::Action* onChangeFinish; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReleasePriority_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS50_0__RELEASEPRIORITY_B__0_OFFSET))(this);
	}
};
