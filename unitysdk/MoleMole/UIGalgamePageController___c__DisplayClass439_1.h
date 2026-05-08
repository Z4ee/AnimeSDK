#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalGameNPCEnterAction; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS439_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F07190)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS439_1__PLAYNPCENTERACTIONS_B__5_OFFSET UNITYSDK_OFFSET(0x15F07350)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS439_1__PLAYNPCENTERACTIONS_B__6_OFFSET UNITYSDK_OFFSET(0x15F07470)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS439_1__PLAYNPCENTERACTIONS_G__APPLYPOSENFACIALWHENENTER_3_OFFSET UNITYSDK_OFFSET(0x15F071A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass439_1_TypeDefinitionIndex = 41785;

	class UIGalgamePageController___c__DisplayClass439_1 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalGameNPCEnterAction* enterAction; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::System::Int32 currStageNodeIdx; // 0x20
		::MoleMole::GalGame::GalNPCLocation location; // 0x24
		::System::Int32 locationKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS439_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_g__ApplyPoseNFacialWhenEnter_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS439_1__PLAYNPCENTERACTIONS_G__APPLYPOSENFACIALWHENENTER_3_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS439_1__PLAYNPCENTERACTIONS_B__5_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS439_1__PLAYNPCENTERACTIONS_B__6_OFFSET))(this);
		}
	};
}
