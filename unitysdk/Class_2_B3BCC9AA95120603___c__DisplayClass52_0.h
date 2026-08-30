#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE7CCE0)
#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS52_0__DOACTIVEPROFILE_B__0_OFFSET UNITYSDK_OFFSET(0xBE7CCF0)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603___c__DisplayClass52_0_TypeDefinitionIndex = 49856;

class Class_2_B3BCC9AA95120603___c__DisplayClass52_0 : public ::System::Object
{
public:
	::System::Action* onChangeFinish; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
	}

	::System::Void _DoActiveProfile_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS52_0__DOACTIVEPROFILE_B__0_OFFSET))(this);
	}
};
