#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHadalZoneLayer_RankingRowWidgetController; }

#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9B2C0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__DISPLAYCLASS8_0___ON_CUSTOMUI_DELAY_MESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x19C9B2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_HadalResult_PopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 80296;

	class UILevel_HadalResult_PopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHadalZoneLayer_RankingRowWidgetController* rankItem; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __On_CustomUI_Delay_Message_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__DISPLAYCLASS8_0___ON_CUSTOMUI_DELAY_MESSAGE_B__0_OFFSET))(this);
		}
	};
}
