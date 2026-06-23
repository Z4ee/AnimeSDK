#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAutoBattlePVPPageController; }

#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1733C340)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS49_0__SETFRIENDSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x1733C350)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPageController___c__DisplayClass49_0_TypeDefinitionIndex = 51730;

	class UIAutoBattlePVPPageController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAutoBattlePVPPageController* __4__this; // 0x10
		::System::Boolean friendOpen; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetFriendState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS49_0__SETFRIENDSTATE_B__0_OFFSET))(this);
		}
	};
}
