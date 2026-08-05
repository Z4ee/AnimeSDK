#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10ED41B0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED41F0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__ONROWBTNCLICK_B__9_0_OFFSET UNITYSDK_OFFSET(0x10ED4200)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___C__ONROWBTNCLICK_B__9_1_OFFSET UNITYSDK_OFFSET(0x10ED42C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISpecialGiftSignInRowWidgetController___c_TypeDefinitionIndex = 73104;

	class UISpecialGiftSignInRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISpecialGiftSignInRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISpecialGiftSignInRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISpecialGiftSignInRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x500A0);
		}
		static ::System::Action** StaticGet___9__9_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISpecialGiftSignInRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x500A8);
		}
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISpecialGiftSignInRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x500B0);
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
