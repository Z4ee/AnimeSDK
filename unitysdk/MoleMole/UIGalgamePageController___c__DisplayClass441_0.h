#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151B0370)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_0__PLAYNPCFADEACTIONS_B__0_OFFSET UNITYSDK_OFFSET(0x151B0650)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_0__PLAYNPCFADEACTIONS_B__1_OFFSET UNITYSDK_OFFSET(0x151B0380)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_0__PLAYNPCFADEACTIONS_B__2_OFFSET UNITYSDK_OFFSET(0x151B0600)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass441_0_TypeDefinitionIndex = 41788;

	class UIGalgamePageController___c__DisplayClass441_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalGameNPCFadeAction*>* fadeActions; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_0__PLAYNPCFADEACTIONS_B__1_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_0__PLAYNPCFADEACTIONS_B__2_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_0__PLAYNPCFADEACTIONS_B__0_OFFSET))(this);
		}
	};
}
