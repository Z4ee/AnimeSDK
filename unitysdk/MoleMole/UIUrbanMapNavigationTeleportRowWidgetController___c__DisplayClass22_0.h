#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E0D0A34AE1807B71.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapNavigationTeleportRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x156D6980)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__0_OFFSET UNITYSDK_OFFSET(0x156D6990)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__1_OFFSET UNITYSDK_OFFSET(0x156D6A10)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__2_OFFSET UNITYSDK_OFFSET(0x156D6B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass22_0_TypeDefinitionIndex = 73851;

	class UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::String* teleportAudioKey; // 0x10
		::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController* __4__this; // 0x18
		::System::Action* __9__2; // 0x20
		::Struct_2_E0D0A34AE1807B71 baseParam; // 0x28
		::System::Boolean dialogReady; // 0x80
		::System::Boolean menusReady; // 0x81
		::System::Int32 teleportID; // 0x84

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
