#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PixAirShopRow; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1C842FA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_GET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1C843080)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C843060)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C843070)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1C842FF0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C842FE0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipShopInfo_TypeDefinitionIndex = 78891;

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
