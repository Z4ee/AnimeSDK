#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152A2AC0)
#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS37_0__SWITCHTOAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x152A2AD0)
#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS37_0__SWITCHTOAVATAR_B__1_OFFSET UNITYSDK_OFFSET(0x152A2C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchWidgetController___c__DisplayClass37_0_TypeDefinitionIndex = 68101;

	class UIPlayerSkinSwitchWidgetController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerSkinSwitchWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Int32 avatarID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchToAvatar_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS37_0__SWITCHTOAVATAR_B__0_OFFSET))(this);
		}

		::System::Void _SwitchToAvatar_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS37_0__SWITCHTOAVATAR_B__1_OFFSET))(this);
		}
	};
}
