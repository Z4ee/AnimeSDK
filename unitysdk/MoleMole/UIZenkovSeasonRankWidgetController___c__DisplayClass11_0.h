#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10F14080)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__PLAYFADEOUTANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x10F14B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonRankWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 47564;

	class UIZenkovSeasonRankWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeOutAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__PLAYFADEOUTANIMATION_B__0_OFFSET))(this);
		}
	};
}
