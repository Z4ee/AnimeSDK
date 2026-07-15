#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_93;
namespace RPG::Client::PixAir { class PixAirEquipData; }
namespace RPG::Client::PixAir { class PixAirEquipLevelData; }
namespace RPG::GameCore { class PixAirEquipPriceRow; }
namespace RPG::GameCore { class PixAirEquipRow; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x19ED48B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19ED4800)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_BUYPRICE_OFFSET UNITYSDK_OFFSET(0x19ED4B00)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0x19ED4BC0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x19ED4A80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0x19ED4AC0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x19ED4BA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19ED4AE0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0x19ED4B50)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_SOLD_OFFSET UNITYSDK_OFFSET(0x19ED4AA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0x19ED4BD0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x19ED4A90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0x19ED4AD0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x19ED4BB0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19ED4AF0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_SOLD_OFFSET UNITYSDK_OFFSET(0x19ED4AB0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19ED4950)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED49B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA__INIT_OFFSET UNITYSDK_OFFSET(0x19ED49C0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipShopData_TypeDefinitionIndex = 75343;

	class PixAirEquipShopData : public ::System::Object
	{
	public:
		::RPG::GameCore::PixAirEquipRow* _Row; // 0x10
		::RPG::Client::PixAir::PixAirEquipData* _EquipData_k__BackingField; // 0x18
		::RPG::GameCore::PixAirEquipPriceRow* _PriceRow; // 0x20
		::RPG::Client::PixAir::PixAirEquipLevelData* _LevelData_k__BackingField; // 0x28
		::System::Boolean _Sold_k__BackingField; // 0x30
		::System::UInt32 _GoodIndex_k__BackingField; // 0x34
		::System::UInt32 _EquipId_k__BackingField; // 0x38
		::System::UInt32 _Level_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipShopData* Create(::Class_1_21C7581DFE99F091_93* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipShopData*(*)(::Class_1_21C7581DFE99F091_93*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PixAir::PixAirEquipShopData* Create_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipShopData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA__INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_21C7581DFE99F091_93* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_93*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_EquipId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_EQUIPID_OFFSET))(this);
		}

		::System::Void set_EquipId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_EQUIPID_OFFSET))(this, a1);
		}

		::System::Boolean get_Sold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_SOLD_OFFSET))(this);
		}

		::System::Void set_Sold(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_SOLD_OFFSET))(this, a1);
		}

		::System::UInt32 get_GoodIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_GOODINDEX_OFFSET))(this);
		}

		::System::Void set_GoodIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_GOODINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuyPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_BUYPRICE_OFFSET))(this);
		}

		::System::UInt32 get_SellPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_SELLPRICE_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipLevelData* get_LevelData()
		{
			return ((::RPG::Client::PixAir::PixAirEquipLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_LEVELDATA_OFFSET))(this);
		}

		::System::Void set_LevelData(::RPG::Client::PixAir::PixAirEquipLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_LEVELDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipData* get_EquipData()
		{
			return ((::RPG::Client::PixAir::PixAirEquipData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_GET_EQUIPDATA_OFFSET))(this);
		}

		::System::Void set_EquipData(::RPG::Client::PixAir::PixAirEquipData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPDATA_SET_EQUIPDATA_OFFSET))(this, a1);
		}
	};
}
