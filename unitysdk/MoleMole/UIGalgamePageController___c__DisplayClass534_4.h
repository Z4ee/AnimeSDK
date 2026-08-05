#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass534_3; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_4__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE4B70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_4__PLAYNPCFADEACTIONS_B__9_OFFSET UNITYSDK_OFFSET(0x19EE4B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass534_4_TypeDefinitionIndex = 62786;

	class UIGalgamePageController___c__DisplayClass534_4 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass534_3* CS___8__locals4; // 0x10
		::System::Int32 bgLocationKey; // 0x18
		::System::Int32 bgStageIdx; // 0x1C
		::MoleMole::GalGame::GalNPCLocation bgDirection; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_4__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_4__PLAYNPCFADEACTIONS_B__9_OFFSET))(this);
		}
	};
}
