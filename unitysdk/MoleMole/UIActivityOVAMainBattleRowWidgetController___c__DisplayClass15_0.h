#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C90A219AEAE0C84F_1;
namespace MoleMole { class UIActivityOVAMainBattleRowWidgetController; }
namespace MoleMole { class UILineupSelectContext; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x163347C0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__GOBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x163347D0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__GOBATTLE_B__1_OFFSET UNITYSDK_OFFSET(0x16334A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOVAMainBattleRowWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 60526;

	class UIActivityOVAMainBattleRowWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectContext* selectPageData; // 0x10
		::MoleMole::UIActivityOVAMainBattleRowWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _GoBattle_b__0(::Class_3_C90A219AEAE0C84F_1* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C90A219AEAE0C84F_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__GOBATTLE_B__0_OFFSET))(this, _);
		}

		::System::Void _GoBattle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__GOBATTLE_B__1_OFFSET))(this);
		}
	};
}
