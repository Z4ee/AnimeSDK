#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackEntrySubSystem_HackTarget; }
namespace MoleMole { class UIInLevelCameraHackChildWindowController; }

#define MOLEMOLE_UIINLEVELCAMERAHACKCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x146A0F80)
#define MOLEMOLE_UIINLEVELCAMERAHACKCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__SHOWSCANDETAILBEFOREAUTOSCAN_B__0_OFFSET UNITYSDK_OFFSET(0x146A0F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCameraHackChildWindowController___c__DisplayClass25_0_TypeDefinitionIndex = 59212;

	class UIInLevelCameraHackChildWindowController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MoleMole::HackEntrySubSystem_HackTarget* target; // 0x10
		::MoleMole::UIInLevelCameraHackChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCAMERAHACKCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowScanDetailBeforeAutoScan_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCAMERAHACKCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__SHOWSCANDETAILBEFOREAUTOSCAN_B__0_OFFSET))(this);
		}
	};
}
