#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188096C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_0__PLAYNPCFADEACTIONS_B__0_OFFSET UNITYSDK_OFFSET(0x18809AD0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_0__PLAYNPCFADEACTIONS_B__10_OFFSET UNITYSDK_OFFSET(0x18809730)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_0__PLAYNPCFADEACTIONS_B__5_OFFSET UNITYSDK_OFFSET(0x188096D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass534_0_TypeDefinitionIndex = 62798;

	class UIGalgamePageController___c__DisplayClass534_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalGameNPCFadeAction*>* fadeActions; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_0__PLAYNPCFADEACTIONS_B__5_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_0__PLAYNPCFADEACTIONS_B__10_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_0__PLAYNPCFADEACTIONS_B__0_OFFSET))(this);
		}
	};
}
