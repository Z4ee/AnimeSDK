#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_84861DFCE46AC3BE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataAdjustGameWidgetController; }

#define MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15304410)
#define MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS34_0__ONWIN_B__0_OFFSET UNITYSDK_OFFSET(0x15304420)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataAdjustGameWidgetController___c__DisplayClass34_0_TypeDefinitionIndex = 43707;

	class UIDataAdjustGameWidgetController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDataAdjustGameWidgetController* __4__this; // 0x10
		::Enum_3_84861DFCE46AC3BE result; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnWin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS34_0__ONWIN_B__0_OFFSET))(this);
		}
	};
}
