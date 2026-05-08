#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E48380)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E483C0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DELNYAKICHNEW_B__13_1_OFFSET UNITYSDK_OFFSET(0x12E483D0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__TELEPORTBYBIGSCENEID_B__24_0_OFFSET UNITYSDK_OFFSET(0x12E483E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationTeleportRowWidgetController___c_TypeDefinitionIndex = 52902;

	class UIUrbanMapNavigationTeleportRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__13_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F2B0);
		}
		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F2B8);
		}
		static ::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F2C0);
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
