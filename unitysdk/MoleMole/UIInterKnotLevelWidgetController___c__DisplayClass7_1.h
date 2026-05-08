#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotLevelWidgetController___c__DisplayClass7_0; }

#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16092F00)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS7_1__REFRESHLEVELTXTVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x16093DA0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS7_1__REFRESHLEVELTXTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x16093E60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotLevelWidgetController___c__DisplayClass7_1_TypeDefinitionIndex = 63859;

	class UIInterKnotLevelWidgetController___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotLevelWidgetController___c__DisplayClass7_0* CS___8__locals1; // 0x10
		::System::Single realExpProgressDuration; // 0x18
		::System::Single prvExpRatio; // 0x1C
		::System::Single timer; // 0x20
		::System::Single remainExpRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS7_1__REFRESHLEVELTXTVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS7_1__REFRESHLEVELTXTVIEW_B__1_OFFSET))(this);
		}
	};
}
