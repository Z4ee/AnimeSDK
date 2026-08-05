#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_370;
namespace MoleMole { class UIMonsterFantasyBossInfoPageController___c__DisplayClass57_0; }
namespace System { class Action; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19017660)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_1__REFRESHSKILLVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x19017670)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_1__REFRESHSKILLVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x19017C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass57_1_TypeDefinitionIndex = 49453;

	class UIMonsterFantasyBossInfoPageController___c__DisplayClass57_1 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::Class_2_208CC9941471731A_370* skillTemplate; // 0x18
		::MoleMole::UIMonsterFantasyBossInfoPageController___c__DisplayClass57_0* CS___8__locals1; // 0x20
		::System::Int32 i1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSkillView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_1__REFRESHSKILLVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshSkillView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS57_1__REFRESHSKILLVIEW_B__2_OFFSET))(this);
		}
	};
}
