#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVELRESULTV2_BABELTOWERPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14B86BF0)
#define MOLEMOLE_UILEVELRESULTV2_BABELTOWERPAGECONTROLLER___C__DISPLAYCLASS8_0__NEEDSHOWCHEATING_B__0_OFFSET UNITYSDK_OFFSET(0x14B86C00)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_BabeltowerPageController___c__DisplayClass8_0_TypeDefinitionIndex = 42751;

	class UILevelResultV2_BabeltowerPageController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* cheatCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_BABELTOWERPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _NeedShowCheating_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_BABELTOWERPAGECONTROLLER___C__DISPLAYCLASS8_0__NEEDSHOWCHEATING_B__0_OFFSET))(this);
		}
	};
}
