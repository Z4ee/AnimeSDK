#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_0A55B5A82A61DAFA_2;
namespace MoleMole { class UIAbyssApreggioTeamWidgetController; }
namespace MoleMole { class UILineupSelectContext; }

#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECFA60)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOTOBEGINBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x13ED01C0)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOTOBEGINBATTLE_B__2_OFFSET UNITYSDK_OFFSET(0x13ECFA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssApreggioTeamWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 53336;

	class UIAbyssApreggioTeamWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectContext* selectedPageData; // 0x10
		::MoleMole::UIAbyssApreggioTeamWidgetController* __4__this; // 0x18
		::Class_2_0A55B5A82A61DAFA_2* selectedConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoBeginBattle_b__2(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOTOBEGINBATTLE_B__2_OFFSET))(this, data);
		}

		::System::Void _GotoBeginBattle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOTOBEGINBATTLE_B__0_OFFSET))(this);
		}
	};
}
