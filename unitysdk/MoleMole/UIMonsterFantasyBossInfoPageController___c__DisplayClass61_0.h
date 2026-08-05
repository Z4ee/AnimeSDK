#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMonsterFantasyBossInfoPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182FC940)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS61_0__ONBACKBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x182FC950)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass61_0_TypeDefinitionIndex = 49457;

	class UIMonsterFantasyBossInfoPageController___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* inTeamMonsterIDs; // 0x10
		::MoleMole::UIMonsterFantasyBossInfoPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBackBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS61_0__ONBACKBTNCLICK_B__0_OFFSET))(this);
		}
	};
}
