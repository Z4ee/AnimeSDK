#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184BFA70)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184BFAB0)
#define MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___C__ONCLICKCAMERABTN_B__11_0_OFFSET UNITYSDK_OFFSET(0x184BFAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraBtnWidgetController___c_TypeDefinitionIndex = 50498;

	class UIMainCityCameraBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityCameraBtnWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityCameraBtnWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4ADD0);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4ADD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickCameraBtn_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERABTNWIDGETCONTROLLER___C__ONCLICKCAMERABTN_B__11_0_OFFSET))(this);
		}
	};
}
