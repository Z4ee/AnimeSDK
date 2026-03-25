#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x9486110)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPPAGEPARAM_GET_SHOPITEMID_OFFSET UNITYSDK_OFFSET(0x94861A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPPAGEPARAM_SET_SHOPITEMID_OFFSET UNITYSDK_OFFSET(0x94861B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9486190)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatShopPageParam_TypeDefinitionIndex = 61965;

	class DiceCombatShopPageParam : public ::System::Object
	{
	public:
		::System::UInt32 _ShopItemID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPPAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatShopPageParam* Create(::System::UInt32 shopItemID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopPageParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPPAGEPARAM_CREATE_OFFSET))(shopItemID);
		}

		::System::UInt32 get_ShopItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPPAGEPARAM_GET_SHOPITEMID_OFFSET))(this);
		}

		::System::Void set_ShopItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPPAGEPARAM_SET_SHOPITEMID_OFFSET))(this, value);
		}
	};
}
