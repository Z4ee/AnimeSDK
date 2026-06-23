#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMENUSNAVIGATIONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178A3BB0)
#define MOLEMOLE_UIMAINCITYMENUSNAVIGATIONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178A3BF0)
#define MOLEMOLE_UIMAINCITYMENUSNAVIGATIONWIDGETCONTROLLER___C__TELPORTBYCHANGESCENE_B__8_0_OFFSET UNITYSDK_OFFSET(0x178A3C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenusNavigationWidgetController___c_TypeDefinitionIndex = 41686;

	class UIMainCityMenusNavigationWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityMenusNavigationWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityMenusNavigationWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusNavigationWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30F10);
		}
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusNavigationWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30F18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSNAVIGATIONWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSNAVIGATIONWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TelportByChangeScene_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSNAVIGATIONWIDGETCONTROLLER___C__TELPORTBYCHANGESCENE_B__8_0_OFFSET))(this);
		}
	};
}
