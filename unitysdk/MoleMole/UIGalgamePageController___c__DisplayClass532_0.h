#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalGameNPCEnterAction; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS532_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199B0280)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS532_0__PLAYNPCENTERACTIONS_B__4_OFFSET UNITYSDK_OFFSET(0x199B0440)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS532_0__PLAYNPCENTERACTIONS_B__5_OFFSET UNITYSDK_OFFSET(0x199B0520)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS532_0__PLAYNPCENTERACTIONS_G__APPLYPOSENFACIALWHENENTER_2_OFFSET UNITYSDK_OFFSET(0x199B0290)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass532_0_TypeDefinitionIndex = 62823;

	class UIGalgamePageController___c__DisplayClass532_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::MoleMole::GalGame::GalGameNPCEnterAction* enterAction; // 0x18
		::MoleMole::GalGame::GalNPCLocation location; // 0x20
		::System::Int32 locationKey; // 0x24
		::System::Int32 currStageNodeIdx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS532_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_g__ApplyPoseNFacialWhenEnter_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS532_0__PLAYNPCENTERACTIONS_G__APPLYPOSENFACIALWHENENTER_2_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS532_0__PLAYNPCENTERACTIONS_B__4_OFFSET))(this);
		}

		::System::Void _PlayNPCEnterActions_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS532_0__PLAYNPCENTERACTIONS_B__5_OFFSET))(this);
		}
	};
}
