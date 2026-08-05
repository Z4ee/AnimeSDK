#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182D7320)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182D7360)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DELNYAKICHNEW_B__17_1_OFFSET UNITYSDK_OFFSET(0x182D7370)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__TELEPORTBYCHANGESCENE_B__20_0_OFFSET UNITYSDK_OFFSET(0x182D7380)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex = 81105;

	class UIMainCityNavigationTeleportRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityNavigationTeleportRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityNavigationTeleportRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D250);
		}
		static ::System::Action** StaticGet___9__17_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D258);
		}
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D260);
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
