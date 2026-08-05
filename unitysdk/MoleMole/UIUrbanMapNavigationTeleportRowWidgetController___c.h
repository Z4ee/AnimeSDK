#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167872A0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167872E0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DELNYAKICHNEW_B__13_1_OFFSET UNITYSDK_OFFSET(0x167872F0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__TELEPORTBYBIGSCENEID_B__24_0_OFFSET UNITYSDK_OFFSET(0x16787300)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationTeleportRowWidgetController___c_TypeDefinitionIndex = 59634;

	class UIUrbanMapNavigationTeleportRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x333D0);
		}
		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x333D8);
		}
		static ::System::Action** StaticGet___9__13_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x333E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DelNyakichNew_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DELNYAKICHNEW_B__13_1_OFFSET))(this);
		}

		::System::Void _TeleportByBigSceneID_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__TELEPORTBYBIGSCENEID_B__24_0_OFFSET))(this);
		}
	};
}
