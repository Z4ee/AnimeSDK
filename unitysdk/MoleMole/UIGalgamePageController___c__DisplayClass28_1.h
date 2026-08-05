#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass28_0; }
namespace MoleMole::GalGame { class GalgameArgueNPCEnterAction; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD2DD0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__5_OFFSET UNITYSDK_OFFSET(0x18AD2DE0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__6_OFFSET UNITYSDK_OFFSET(0x18AD2FF0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__7_OFFSET UNITYSDK_OFFSET(0x18AD30F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass28_1_TypeDefinitionIndex = 62813;

	class UIGalgamePageController___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass28_0* CS___8__locals1; // 0x10
		::MoleMole::GalGame::GalgameArgueNPCEnterAction* enterAction; // 0x18
		::MoleMole::GalGame::GalNPCLocation location; // 0x20
		::System::Int32 currStageNodeIdx; // 0x24
		::System::Int32 locationKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueNPCEnterActions_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__5_OFFSET))(this);
		}

		::System::Void _PlayArgueNPCEnterActions_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__6_OFFSET))(this);
		}

		::System::Void _PlayArgueNPCEnterActions_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS28_1__PLAYARGUENPCENTERACTIONS_B__7_OFFSET))(this);
		}
	};
}
