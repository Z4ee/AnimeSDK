#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157A4350)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157A4390)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__ONROWBTNCLICK_B__9_0_OFFSET UNITYSDK_OFFSET(0x157A43A0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__ONROWBTNCLICK_B__9_1_OFFSET UNITYSDK_OFFSET(0x157A4460)

namespace MoleMole
{
	inline static constexpr unsigned int UISpecialGiftSignInRowWidgetController___c_TypeDefinitionIndex = 80743;

	class UISpecialGiftSignInRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISpecialGiftSignInRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CC40);
		}
		static ::MoleMole::UISpecialGiftSignInRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISpecialGiftSignInRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISpecialGiftSignInRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CC48);
		}
		static ::System::Action** StaticGet___9__9_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISpecialGiftSignInRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnRowBtnClick_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__ONROWBTNCLICK_B__9_0_OFFSET))(this);
		}

		::System::Void _OnRowBtnClick_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__ONROWBTNCLICK_B__9_1_OFFSET))(this);
		}
	};
}
