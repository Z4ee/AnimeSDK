#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerPopularityLevelUpPopWindowController___c__DisplayClass14_0; }

#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD5DA0)
#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_1__REFRESHLEVELTXTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x14DD5DB0)
#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_1__REFRESHLEVELTXTVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x14DD5E60)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerPopularityLevelUpPopWindowController___c__DisplayClass14_1_TypeDefinitionIndex = 69964;

	class UISummerPopularityLevelUpPopWindowController___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::MoleMole::UISummerPopularityLevelUpPopWindowController___c__DisplayClass14_0* CS___8__locals1; // 0x10
		::System::Single realExpProgressDuration; // 0x18
		::System::Single remainExpRatio; // 0x1C
		::System::Single prvExpRatio; // 0x20
		::System::Single timer; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_1__REFRESHLEVELTXTVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_1__REFRESHLEVELTXTVIEW_B__2_OFFSET))(this);
		}
	};
}
