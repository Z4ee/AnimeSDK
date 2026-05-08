#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFishContestResultPopContext; }
namespace MoleMole { class UIFishingContestTipsPopWindowController; }

#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14EA4340)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x14EA4350)
#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__ONSHOW_B__1_OFFSET UNITYSDK_OFFSET(0x14EA44D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestTipsPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 67104;

	class UIFishingContestTipsPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFishContestResultPopContext* context; // 0x10
		::MoleMole::UIFishingContestTipsPopWindowController* __4__this; // 0x18
		::System::UInt32 currentStar; // 0x20
		::System::Int32 maxStar; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__ONSHOW_B__0_OFFSET))(this);
		}

		::System::Void _OnShow_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__ONSHOW_B__1_OFFSET))(this);
		}
	};
}
