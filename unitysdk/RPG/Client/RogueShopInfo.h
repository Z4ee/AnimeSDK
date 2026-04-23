#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
class Class_1_D40936EF3BF54118_78;
class Class_1_D40936EF3BF54118_79;
class Class_1_D40936EF3BF54118_80;
namespace RPG::Client { class RogueBuffShopData; }
namespace RPG::Client { class RogueFormulaShopData; }
namespace RPG::Client { class RogueMiracleShopData; }

#define RPG_CLIENT_ROGUESHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB093E70)
#define RPG_CLIENT_ROGUESHOPINFO_GET_BUFFSHOP_OFFSET UNITYSDK_OFFSET(0xB094010)
#define RPG_CLIENT_ROGUESHOPINFO_GET_FORMULASHOP_OFFSET UNITYSDK_OFFSET(0xB094030)
#define RPG_CLIENT_ROGUESHOPINFO_GET_MIRACLESHOP_OFFSET UNITYSDK_OFFSET(0xB093FF0)
#define RPG_CLIENT_ROGUESHOPINFO_SET_BUFFSHOP_OFFSET UNITYSDK_OFFSET(0xB094020)
#define RPG_CLIENT_ROGUESHOPINFO_SET_FORMULASHOP_OFFSET UNITYSDK_OFFSET(0xB094040)
#define RPG_CLIENT_ROGUESHOPINFO_SET_MIRACLESHOP_OFFSET UNITYSDK_OFFSET(0xB094000)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPCONFIG_OFFSET UNITYSDK_OFFSET(0xB093D30)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPITEM_OFFSET UNITYSDK_OFFSET(0xB093CD0)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPCONFIG_OFFSET UNITYSDK_OFFSET(0xB093E00)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPITEM_OFFSET UNITYSDK_OFFSET(0xB093DA0)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCMIRACLE_OFFSET UNITYSDK_OFFSET(0xB093C40)
#define RPG_CLIENT_ROGUESHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB094050)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueShopInfo_TypeDefinitionIndex = 62038;

	class RogueShopInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueBuffShopData* _BuffShop_k__BackingField; // 0x10
		::RPG::Client::RogueMiracleShopData* _MiracleShop_k__BackingField; // 0x18
		::RPG::Client::RogueFormulaShopData* _FormulaShop_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO__CTOR_OFFSET))(this);
		}

		::System::Void SyncMiracle(::Class_1_D40936EF3BF54118_78* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCMIRACLE_OFFSET))(this, info);
		}

		::System::Void SyncBuffShopItem(::Class_1_D40936EF3BF54118_79* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPITEM_OFFSET))(this, info);
		}

		::System::Void SyncBuffShopConfig(::System::Int32 remainRefreshTimes, ::System::Int32 totalRefreshTimes, ::Class_1_C74059A83466814F* cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPCONFIG_OFFSET))(this, remainRefreshTimes, totalRefreshTimes, cost);
		}

		::System::Void SyncFormulaShopItem(::Class_1_D40936EF3BF54118_80* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPITEM_OFFSET))(this, info);
		}

		::System::Void SyncFormulaShopConfig(::System::Int32 remainRefreshTimes, ::System::Int32 totalRefreshTimes, ::Class_1_C74059A83466814F* cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPCONFIG_OFFSET))(this, remainRefreshTimes, totalRefreshTimes, cost);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleShopData* get_MiracleShop()
		{
			return ((::RPG::Client::RogueMiracleShopData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_GET_MIRACLESHOP_OFFSET))(this);
		}

		::System::Void set_MiracleShop(::RPG::Client::RogueMiracleShopData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SET_MIRACLESHOP_OFFSET))(this, value);
		}

		::RPG::Client::RogueBuffShopData* get_BuffShop()
		{
			return ((::RPG::Client::RogueBuffShopData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_GET_BUFFSHOP_OFFSET))(this);
		}

		::System::Void set_BuffShop(::RPG::Client::RogueBuffShopData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SET_BUFFSHOP_OFFSET))(this, value);
		}

		::RPG::Client::RogueFormulaShopData* get_FormulaShop()
		{
			return ((::RPG::Client::RogueFormulaShopData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_GET_FORMULASHOP_OFFSET))(this);
		}

		::System::Void set_FormulaShop(::RPG::Client::RogueFormulaShopData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SET_FORMULASHOP_OFFSET))(this, value);
		}
	};
}
