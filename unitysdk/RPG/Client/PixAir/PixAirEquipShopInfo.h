#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PixAirShopRow; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xDB45950)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_GET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xDB45A30)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0xDB45A10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0xDB45A20)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xDB459A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDB45990)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipShopInfo_TypeDefinitionIndex = 79373;

	class PixAirEquipShopInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::PixAirShopRow* _ShopRow; // 0x10
		::System::UInt32 _ShopID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipShopInfo* Create()
		{
			return ((::RPG::Client::PixAir::PixAirEquipShopInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_CREATE_OFFSET))();
		}

		::System::Void SyncUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_SET_SHOPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_GET_REFRESHCOUNT_OFFSET))(this);
		}
	};
}
