#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B8C230)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B8C270)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DELNYAKICHNEW_B__17_1_OFFSET UNITYSDK_OFFSET(0x14B8C280)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__TELEPORTBYCHANGESCENE_B__20_0_OFFSET UNITYSDK_OFFSET(0x14B8C290)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex = 78449;

	class UIMainCityNavigationTeleportRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityNavigationTeleportRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityNavigationTeleportRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37F80);
		}
		static ::System::Action** StaticGet___9__17_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37F88);
		}
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationTeleportRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37F90);
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
