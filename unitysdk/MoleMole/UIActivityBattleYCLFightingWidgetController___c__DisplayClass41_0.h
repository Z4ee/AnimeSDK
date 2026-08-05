#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_208CC9941471731A_462;
namespace MoleMole { class UIActivityBattleYCLFightingWidgetController; }
namespace MoleMole { class UILineupSelectContext; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9BFD0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x11D9C7C0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x11D9BFE0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__2_OFFSET UNITYSDK_OFFSET(0x11D9C2E0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__3_OFFSET UNITYSDK_OFFSET(0x11D9C700)
#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__5_OFFSET UNITYSDK_OFFSET(0x11D9C140)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLFightingWidgetController___c__DisplayClass41_0_TypeDefinitionIndex = 89033;

	class UIActivityBattleYCLFightingWidgetController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectContext* context; // 0x10
		::MoleMole::UIActivityBattleYCLFightingWidgetController* __4__this; // 0x18
		::Class_2_208CC9941471731A_462* activityBattleQuestCfg; // 0x20
		::System::Action* __9__5; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OpenTeamPage_b__1(::Class_1_E081FCEC8F87505A* beginData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__1_OFFSET))(this, beginData);
		}

		::System::Void _OpenTeamPage_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__5_OFFSET))(this);
		}

		::System::Void _OpenTeamPage_b__2(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__2_OFFSET))(this, data);
		}

		::System::Boolean _OpenTeamPage_b__3(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__3_OFFSET))(this, i);
		}

		::System::Void _OpenTeamPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS41_0__OPENTEAMPAGE_B__0_OFFSET))(this);
		}
	};
}
