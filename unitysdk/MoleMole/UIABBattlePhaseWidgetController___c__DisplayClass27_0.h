#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_80486DA64C1484CD;
namespace MoleMole { class UIABBattlePhaseWidgetController; }

#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B220160)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHSTARTTIPSBASEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1B220170)

namespace MoleMole
{
	inline static constexpr unsigned int UIABBattlePhaseWidgetController___c__DisplayClass27_0_TypeDefinitionIndex = 54932;

	class UIABBattlePhaseWidgetController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIABBattlePhaseWidgetController* __4__this; // 0x10
		::System::UInt32 localBattleId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshStartTipsBaseInfo_b__0(::Class_2_80486DA64C1484CD* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_80486DA64C1484CD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHSTARTTIPSBASEINFO_B__0_OFFSET))(this, x);
		}
	};
}
