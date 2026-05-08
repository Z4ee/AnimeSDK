#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_771;
namespace MoleMole { class UIUrbanMapNavigationTeleportRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C3EBB0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__DOTELEPORTMAINCITY_B__0_OFFSET UNITYSDK_OFFSET(0x14C3EBC0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__DOTELEPORTMAINCITY_B__1_OFFSET UNITYSDK_OFFSET(0x14C3EC00)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__DOTELEPORTMAINCITY_B__2_OFFSET UNITYSDK_OFFSET(0x14C3ECD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 52900;

	class UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_771* teleportTemplate; // 0x10
		::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController* __4__this; // 0x18
		::System::Action* __9__2; // 0x20
		::System::String* teleportAudioKey; // 0x28
		::System::Boolean dialogReady; // 0x30
		::System::Boolean menusReady; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoTeleportMainCity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__DOTELEPORTMAINCITY_B__0_OFFSET))(this);
		}

		::System::Void _DoTeleportMainCity_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__DOTELEPORTMAINCITY_B__1_OFFSET))(this);
		}

		::System::Void _DoTeleportMainCity_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__DOTELEPORTMAINCITY_B__2_OFFSET))(this);
		}
	};
}
