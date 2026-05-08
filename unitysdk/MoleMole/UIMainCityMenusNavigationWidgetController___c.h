#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMENUSNAVIGATIONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15565980)
#define MOLEMOLE_UIMAINCITYMENUSNAVIGATIONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155659C0)
#define MOLEMOLE_UIMAINCITYMENUSNAVIGATIONWIDGETCONTROLLER___C__TELPORTBYCHANGESCENE_B__8_0_OFFSET UNITYSDK_OFFSET(0x155659D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenusNavigationWidgetController___c_TypeDefinitionIndex = 79128;

	class UIMainCityMenusNavigationWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityMenusNavigationWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityMenusNavigationWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusNavigationWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F080);
		}
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusNavigationWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F088);
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
