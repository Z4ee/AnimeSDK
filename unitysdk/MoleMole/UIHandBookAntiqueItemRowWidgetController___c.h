#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15257860)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152578A0)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___C__ONGOTOBUTTON_B__7_0_OFFSET UNITYSDK_OFFSET(0x152578B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAntiqueItemRowWidgetController___c_TypeDefinitionIndex = 42733;

	class UIHandBookAntiqueItemRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookAntiqueItemRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookAntiqueItemRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookAntiqueItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43940);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookAntiqueItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGoToButton_b__7_0(::System::Boolean isJump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___C__ONGOTOBUTTON_B__7_0_OFFSET))(this, isJump);
		}
	};
}
