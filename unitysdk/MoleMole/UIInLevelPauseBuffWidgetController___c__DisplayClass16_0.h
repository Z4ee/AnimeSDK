#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseBuffRowWidgetController; }

#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152769E0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHBUFFINFO_B__0_OFFSET UNITYSDK_OFFSET(0x152769F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBuffWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 75076;

	class UIInLevelPauseBuffWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseBuffRowWidgetController* ctrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBuffInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHBUFFINFO_B__0_OFFSET))(this);
		}
	};
}
