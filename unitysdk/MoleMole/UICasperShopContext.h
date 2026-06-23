#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_29115E91C1E3B232.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UICASPERSHOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186A1CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICasperShopContext_TypeDefinitionIndex = 41567;

	class UICasperShopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		// static const ::System::Int32 ZERO_TAB = 0x0; // 0x0
		// static const ::System::Int32 HADAL_TAB = 0x1; // 0x0
		// static const ::System::Int32 AVATAR_AWAKEN_TAB = 0x2; // 0x0
		::System::Action* BackToMainCityButtonAction; // 0x28
		::System::Int32 ShopID; // 0x30
		::System::Int32 Index; // 0x34
		::Enum_3_29115E91C1E3B232 ShowType; // 0x38
		::System::Boolean HideAllTabHint; // 0x3C
		::System::Boolean IsCanShowLocked; // 0x3D
		::System::Boolean ShowHintInHadalShop; // 0x3E
		::System::Boolean BackIsGOMainCity; // 0x3F
		::System::Int32 DefaultShopTabID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICASPERSHOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
