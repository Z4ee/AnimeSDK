#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E279A0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E279E0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_0_OFFSET UNITYSDK_OFFSET(0x13E279F0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_1_OFFSET UNITYSDK_OFFSET(0x13E27AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex = 46972;

	class UIShoppingMallLimitedCardWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIShoppingMallLimitedCardWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIShoppingMallLimitedCardWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CE80);
		}
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CE88);
		}
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickReceiveBtn_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_0_OFFSET))(this);
		}

		::System::Void _OnClickReceiveBtn_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_1_OFFSET))(this);
		}
	};
}
