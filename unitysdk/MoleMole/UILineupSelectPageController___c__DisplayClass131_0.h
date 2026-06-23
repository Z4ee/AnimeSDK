#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController; }
namespace MoleMole { class UserLocalDataItem; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF58D0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_0__ONTOGGLEUPGRADEBTN_G__UPGRADESURE_0_OFFSET UNITYSDK_OFFSET(0x15EF58E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass131_0_TypeDefinitionIndex = 79042;

	class UILineupSelectPageController___c__DisplayClass131_0 : public ::System::Object
	{
	public:
		::MoleMole::UserLocalDataItem* localData; // 0x10
		::MoleMole::UILineupSelectPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnToggleUpgradeBtn_g__UpgradeSure_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_0__ONTOGGLEUPGRADEBTN_G__UPGRADESURE_0_OFFSET))(this);
		}
	};
}
