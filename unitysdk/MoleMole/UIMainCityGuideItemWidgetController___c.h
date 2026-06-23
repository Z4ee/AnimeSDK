#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1527F760)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1527F7A0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___C__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0x1527F7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityGuideItemWidgetController___c_TypeDefinitionIndex = 48586;

	class UIMainCityGuideItemWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityGuideItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A460);
		}
		static ::MoleMole::UIMainCityGuideItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityGuideItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityGuideItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___C__ONUIINIT_B__10_0_OFFSET))(this);
		}
	};
}
