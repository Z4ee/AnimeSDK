#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15872600)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15872640)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___C___CTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x15872650)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InfoBtnWidgetController___c_TypeDefinitionIndex = 72329;

	class UIAbyssS2InfoBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2InfoBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40610);
		}
		static ::MoleMole::UIAbyssS2InfoBtnWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2InfoBtnWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2InfoBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___C___CTOR_B__23_0_OFFSET))(this);
		}
	};
}
