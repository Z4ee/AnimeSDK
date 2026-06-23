#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITowerDefenseLevelPageController_BangBooEntryDataList.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITowerDefenseLevelPageController; }

#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x148E5370)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x148E5380)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseLevelPageController___c__DisplayClass23_0_TypeDefinitionIndex = 82779;

	class UITowerDefenseLevelPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UITowerDefenseLevelPageController* __4__this; // 0x10
		::MoleMole::UITowerDefenseLevelPageController_BangBooEntryDataList item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
