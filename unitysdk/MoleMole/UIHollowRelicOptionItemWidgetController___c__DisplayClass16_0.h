#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowRelicOptionItemWidgetController; }

#define MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F074C0)
#define MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHINITIALRELICVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x18F074D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRelicOptionItemWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 76085;

	class UIHollowRelicOptionItemWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowRelicOptionItemWidgetController* __4__this; // 0x10
		::System::Boolean unlockd; // 0x18
		::System::Boolean canUnlock; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshInitialRelicView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHINITIALRELICVIEW_B__0_OFFSET))(this);
		}
	};
}
