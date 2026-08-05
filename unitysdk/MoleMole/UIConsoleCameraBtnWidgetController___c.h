#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183D2600)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183D2640)
#define MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__ONCLICKCAMERABTN_B__3_0_OFFSET UNITYSDK_OFFSET(0x183D2650)

namespace MoleMole
{
	inline static constexpr unsigned int UIConsoleCameraBtnWidgetController___c_TypeDefinitionIndex = 90210;

	class UIConsoleCameraBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIConsoleCameraBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EAD0);
		}
		static ::MoleMole::UIConsoleCameraBtnWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIConsoleCameraBtnWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIConsoleCameraBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EAD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickCameraBtn_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONSOLECAMERABTNWIDGETCONTROLLER___C__ONCLICKCAMERABTN_B__3_0_OFFSET))(this);
		}
	};
}
