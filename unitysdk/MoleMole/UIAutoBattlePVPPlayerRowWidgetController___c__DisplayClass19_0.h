#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__BINDINVITEBTN_B__0_OFFSET UNITYSDK_OFFSET(0x1A628D10)
#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A628D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPlayerRowWidgetController___c__DisplayClass19_0_TypeDefinitionIndex = 71878;

	class UIAutoBattlePVPPlayerRowWidgetController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* inviteAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindInviteBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__BINDINVITEBTN_B__0_OFFSET))(this);
		}
	};
}
