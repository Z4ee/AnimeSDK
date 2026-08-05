#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDisplayCasePageController; }

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9B330)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS51_0__REFRESHMODE_G__ONFADEOUT_0_OFFSET UNITYSDK_OFFSET(0x19F9B340)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c__DisplayClass51_0_TypeDefinitionIndex = 44117;

	class UIDisplayCasePageController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDisplayCasePageController* __4__this; // 0x10
		::System::Boolean isForce; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMode_g__OnFadeOut_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS51_0__REFRESHMODE_G__ONFADEOUT_0_OFFSET))(this);
		}
	};
}
