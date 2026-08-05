#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBallGameIconCardWidgetController; }

#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F201670)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___C__DISPLAYCLASS17_0__REFRESHEXP_B__0_OFFSET UNITYSDK_OFFSET(0x1F202120)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 93472;

	class UIBallGameIconCardWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBallGameIconCardWidgetController* __4__this; // 0x10
		::System::Int32 newLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshExp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___C__DISPLAYCLASS17_0__REFRESHEXP_B__0_OFFSET))(this);
		}
	};
}
