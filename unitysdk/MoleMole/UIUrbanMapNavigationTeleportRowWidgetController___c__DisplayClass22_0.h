#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FFE1714EF1F6DB9E.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapNavigationTeleportRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1275F290)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__0_OFFSET UNITYSDK_OFFSET(0x1275F2A0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__1_OFFSET UNITYSDK_OFFSET(0x1275F310)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__2_OFFSET UNITYSDK_OFFSET(0x1275F410)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass22_0_TypeDefinitionIndex = 52899;

	class UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::String* teleportAudioKey; // 0x10
		::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController* __4__this; // 0x18
		::Struct_2_FFE1714EF1F6DB9E baseParam; // 0x20
		::System::Action* __9__2; // 0x70
		::System::Boolean menusReady; // 0x78
		::System::Boolean dialogReady; // 0x79
		::System::Int32 teleportID; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoTeleportBigScene_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__0_OFFSET))(this);
		}

		::System::Void _DoTeleportBigScene_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__1_OFFSET))(this);
		}

		::System::Void _DoTeleportBigScene_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__2_OFFSET))(this);
		}
	};
}
