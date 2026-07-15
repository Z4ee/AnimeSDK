#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2C630)
#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS49_0__DOACTIVEPROFILE_B__0_OFFSET UNITYSDK_OFFSET(0x16A31EC0)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603___c__DisplayClass49_0_TypeDefinitionIndex = 47575;

class Class_2_B3BCC9AA95120603___c__DisplayClass49_0 : public ::System::Object
{
public:
	::System::Action* onChangeFinish; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
	}

	::System::Void _DoActiveProfile_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS49_0__DOACTIVEPROFILE_B__0_OFFSET))(this);
	}
};
