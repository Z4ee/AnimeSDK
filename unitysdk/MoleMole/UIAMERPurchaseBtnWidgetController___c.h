#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_3.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16073990)
#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160739D0)
#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_0_OFFSET UNITYSDK_OFFSET(0x160739E0)
#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_1_OFFSET UNITYSDK_OFFSET(0x160739F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex = 69139;

	class UIAMERPurchaseBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAMERPurchaseBtnWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAMERPurchaseBtnWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C8D0);
		}
		static ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_3>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::Struct_2_5B421F8FFABD4CA3_3>**)Il2CppClass::FromTypeDefinitionIndex(UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C8D8);
		}
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBuyBtn_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_0_OFFSET))(this);
		}

		::System::Void _OnBuyBtn_b__3_1(::Struct_2_5B421F8FFABD4CA3_3 e)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5B421F8FFABD4CA3_3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_1_OFFSET))(this, e);
		}
	};
}
