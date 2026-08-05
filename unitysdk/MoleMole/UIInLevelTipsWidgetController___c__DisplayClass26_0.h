#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelTipsWidgetController; }

#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164EE920)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x164EE930)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTipsWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 77523;

	class UIInLevelTipsWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelTipsWidgetController* __4__this; // 0x10
		::System::Boolean isPersistent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS26_0__REFRESHTIPS_B__0_OFFSET))(this);
		}
	};
}
