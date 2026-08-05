#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAntiqueLevelUpPopWindowController___c__DisplayClass19_0; }

#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19764260)
#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__REFRESHLEVELTXTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x19764270)
#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__REFRESHLEVELTXTVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x19764320)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueLevelUpPopWindowController___c__DisplayClass19_1_TypeDefinitionIndex = 56798;

	class UIAntiqueLevelUpPopWindowController___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::MoleMole::UIAntiqueLevelUpPopWindowController___c__DisplayClass19_0* CS___8__locals1; // 0x10
		::System::Single timer; // 0x18
		::System::Single remainExpRatio; // 0x1C
		::System::Single prvExpRatio; // 0x20
		::System::Single realExpProgressDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__REFRESHLEVELTXTVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__REFRESHLEVELTXTVIEW_B__2_OFFSET))(this);
		}
	};
}
