#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16760AC0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16760B00)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__TRYSENDDEPOSITREWARDREQUEST_B__9_0_OFFSET UNITYSDK_OFFSET(0x16760B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c_TypeDefinitionIndex = 49860;

	class UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x51060);
		}
		static ::MoleMole::UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x51068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TrySendDepositRewardRequest_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__TRYSENDDEPOSITREWARDREQUEST_B__9_0_OFFSET))(this);
		}
	};
}
