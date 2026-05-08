#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVSHOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14EBD720)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovShopContext_TypeDefinitionIndex = 65109;

	class UIBangkovShopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		// static const ::System::Int32 BASE_TAB = 0x0; // 0x0
		// static const ::System::Int32 LIMIT_TAB = 0x1; // 0x0
		// static const ::System::Int32 SPECIAL_ITEM_TAB = 0x2; // 0x0
		::System::Boolean HideAllTabHint; // 0x28
		::System::Int32 Index; // 0x2C
		::System::Int32 DefaultShopTabID; // 0x30
		::System::Int32 ShopID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSHOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
