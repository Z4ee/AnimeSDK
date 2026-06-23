#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_552;
namespace MoleMole { class UIMainCityNavigationTeleportRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15282FA0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__DOTELEPORT_B__0_OFFSET UNITYSDK_OFFSET(0x15284560)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__DOTELEPORT_B__1_OFFSET UNITYSDK_OFFSET(0x152845A0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__DOTELEPORT_B__2_OFFSET UNITYSDK_OFFSET(0x15284670)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationTeleportRowWidgetController___c__DisplayClass19_0_TypeDefinitionIndex = 48510;

	class UIMainCityNavigationTeleportRowWidgetController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_552* teleportTemplate; // 0x10
		::MoleMole::UIMainCityNavigationTeleportRowWidgetController* __4__this; // 0x18
		::System::String* teleportAudioKey; // 0x20
		::System::Action* __9__2; // 0x28
		::System::Boolean menusReady; // 0x30
		::System::Boolean dialogReady; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoTeleport_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__DOTELEPORT_B__0_OFFSET))(this);
		}

		::System::Void _DoTeleport_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__DOTELEPORT_B__1_OFFSET))(this);
		}

		::System::Void _DoTeleport_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__DOTELEPORT_B__2_OFFSET))(this);
		}
	};
}
