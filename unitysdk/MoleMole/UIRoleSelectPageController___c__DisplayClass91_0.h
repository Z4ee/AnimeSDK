#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace MoleMole { class UserLocalDataItem; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152B12A0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS91_0__ONTOGGLEUPGRADEBTN_G__UPGRADESURE_0_OFFSET UNITYSDK_OFFSET(0x152B12B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass91_0_TypeDefinitionIndex = 76903;

	class UIRoleSelectPageController___c__DisplayClass91_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x10
		::MoleMole::UserLocalDataItem* localData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnToggleUpgradeBtn_g__UpgradeSure_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS91_0__ONTOGGLEUPGRADEBTN_G__UPGRADESURE_0_OFFSET))(this);
		}
	};
}
