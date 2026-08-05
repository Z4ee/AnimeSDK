#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotPotStrategyWidgetController; }
namespace MoleMole { class UIActivityHotPotStrategyWidgetController_Data; }

#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192DC380)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x192DC390)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotStrategyWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 45118;

	class UIActivityHotPotStrategyWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotPotStrategyWidgetController* __4__this; // 0x10
		::MoleMole::UIActivityHotPotStrategyWidgetController_Data* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
