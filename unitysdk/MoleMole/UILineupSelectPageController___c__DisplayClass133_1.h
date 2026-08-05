#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UILineupSelectPageController___c__DisplayClass133_0; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS133_1__CTOR_OFFSET UNITYSDK_OFFSET(0x190082E0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS133_1__ONTOGGLEUPGRADEBTN_B__1_OFFSET UNITYSDK_OFFSET(0x190082F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass133_1_TypeDefinitionIndex = 82707;

	class UILineupSelectPageController___c__DisplayClass133_1 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectPageController___c__DisplayClass133_0* CS___8__locals1; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS133_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnToggleUpgradeBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS133_1__ONTOGGLEUPGRADEBTN_B__1_OFFSET))(this);
		}
	};
}
