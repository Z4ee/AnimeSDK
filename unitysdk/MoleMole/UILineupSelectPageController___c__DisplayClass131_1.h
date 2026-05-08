#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UILineupSelectPageController___c__DisplayClass131_0; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBA080)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_1__ONTOGGLEUPGRADEBTN_B__1_OFFSET UNITYSDK_OFFSET(0x15DBA090)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass131_1_TypeDefinitionIndex = 56017;

	class UILineupSelectPageController___c__DisplayClass131_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x10
		::MoleMole::UILineupSelectPageController___c__DisplayClass131_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnToggleUpgradeBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_1__ONTOGGLEUPGRADEBTN_B__1_OFFSET))(this);
		}
	};
}
