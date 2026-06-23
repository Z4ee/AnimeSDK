#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C36B40)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C36B80)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DELNYAKICHNEW_B__17_1_OFFSET UNITYSDK_OFFSET(0x14C36B90)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__TELEPORTBYCHANGESCENE_B__20_0_OFFSET UNITYSDK_OFFSET(0x14C36BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex = 48507;

	class UIMainCityNavigationTeleportRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A490);
		}
		static ::System::Action** StaticGet___9__17_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A498);
		}
		static ::MoleMole::UIMainCityNavigationTeleportRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityNavigationTeleportRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DelNyakichNew_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DELNYAKICHNEW_B__17_1_OFFSET))(this);
		}

		::System::Void _TeleportByChangeScene_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__TELEPORTBYCHANGESCENE_B__20_0_OFFSET))(this);
		}
	};
}
