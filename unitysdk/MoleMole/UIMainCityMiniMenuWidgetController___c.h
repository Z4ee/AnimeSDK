#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189C2EA0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189C2EE0)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__HASFAIRY_B__50_0_OFFSET UNITYSDK_OFFSET(0x189C2EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMiniMenuWidgetController___c_TypeDefinitionIndex = 51082;

	class UIMainCityMiniMenuWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMiniMenuWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47290);
		}
		static ::MoleMole::UIMainCityMiniMenuWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityMiniMenuWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMiniMenuWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasFairy_b__50_0(::MoleMole::UIGeneralNewsBubbleRowWidgetController* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__HASFAIRY_B__50_0_OFFSET))(this, r);
		}
	};
}
