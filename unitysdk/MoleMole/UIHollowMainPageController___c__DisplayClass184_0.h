#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController_CardSlot; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS184_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16915850)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS184_0__REFRESHMUTE_B__0_OFFSET UNITYSDK_OFFSET(0x16915860)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass184_0_TypeDefinitionIndex = 78289;

	class UIHollowMainPageController___c__DisplayClass184_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController_CardSlot* slot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS184_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS184_0__REFRESHMUTE_B__0_OFFSET))(this);
		}
	};
}
