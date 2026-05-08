#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUIGachaItemParam_ConfigItem;
namespace MoleMole { class UIGachaItemWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F04F70)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__0_OFFSET UNITYSDK_OFFSET(0x15F05EC0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__1_OFFSET UNITYSDK_OFFSET(0x15F060A0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__2_OFFSET UNITYSDK_OFFSET(0x15F05FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 75509;

	class UIGachaItemWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MonoUIGachaItemParam_ConfigItem* config; // 0x10
		::System::Action* __9__2; // 0x18
		::MoleMole::UIGachaItemWidgetController* __4__this; // 0x20
		::System::Single activateAnimDelay; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayItemFadeInAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__0_OFFSET))(this);
		}

		::System::Void _PlayItemFadeInAnim_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__2_OFFSET))(this);
		}

		::System::Void _PlayItemFadeInAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__1_OFFSET))(this);
		}
	};
}
