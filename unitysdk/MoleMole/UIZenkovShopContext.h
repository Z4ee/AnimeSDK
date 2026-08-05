#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVSHOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10F14BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShopContext_TypeDefinitionIndex = 44853;

	class UIZenkovShopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		// static const ::System::Int32 BASE_TAB = 0x0; // 0x0
		// static const ::System::Int32 LIMIT_TAB = 0x1; // 0x0
		// static const ::System::Int32 SPECIAL_ITEM_TAB = 0x2; // 0x0
		::System::Int32 DefaultShopTabID; // 0x28
		::System::Int32 ShopID; // 0x2C
		::System::Int32 Index; // 0x30
		::System::Int32 SelectItemId; // 0x34
		::System::Boolean HideAllTabHint; // 0x38
		::System::Int32 SelectGoodsId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
