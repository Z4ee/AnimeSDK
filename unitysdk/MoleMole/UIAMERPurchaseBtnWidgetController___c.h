#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BE7C10)
#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE7C50)
#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_0_OFFSET UNITYSDK_OFFSET(0x12BE7C60)
#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_1_OFFSET UNITYSDK_OFFSET(0x12BE7C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex = 85790;

	class UIAMERPurchaseBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EEC0);
		}
		static ::MoleMole::UIAMERPurchaseBtnWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAMERPurchaseBtnWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EEC8);
		}
		static ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_2>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::Struct_2_5B421F8FFABD4CA3_2>**)Il2CppClass::FromTypeDefinitionIndex(UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EED0);
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

		::System::Void _OnBuyBtn_b__3_1(::Struct_2_5B421F8FFABD4CA3_2 e)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5B421F8FFABD4CA3_2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_1_OFFSET))(this, e);
		}
	};
}
