#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_451601B8BB62C38C_3;
namespace MoleMole { class UIMonsterFantasyBossInfoPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151F2700)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_0__REFRESHSKILLVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x151F2710)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass57_0_TypeDefinitionIndex = 79946;

	class UIMonsterFantasyBossInfoPageController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMonsterFantasyBossInfoPageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C_3*>* skillInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSkillView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_0__REFRESHSKILLVIEW_B__0_OFFSET))(this);
		}
	};
}
