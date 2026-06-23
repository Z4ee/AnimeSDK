#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMonsterFantasyMainLevelPageController; }
namespace MoleMole { class UIMonsterFantasyMainLevelPageController_Context; }
namespace System { class Action; }

#define MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15308990)
#define MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x153089A0)
#define MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x15308A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyMainLevelPageController___c__DisplayClass6_0_TypeDefinitionIndex = 81906;

	class UIMonsterFantasyMainLevelPageController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMonsterFantasyMainLevelPageController_Context* inputContext; // 0x10
		::MoleMole::UIMonsterFantasyMainLevelPageController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}
