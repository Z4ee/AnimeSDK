#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
class Class_1_D40936EF3BF54118_85;
class Class_1_D40936EF3BF54118_86;
class Class_1_D40936EF3BF54118_87;
namespace RPG::Client { class RogueBuffShopData; }
namespace RPG::Client { class RogueFormulaShopData; }
namespace RPG::Client { class RogueMiracleShopData; }

#define RPG_CLIENT_ROGUESHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7E48B0)
#define RPG_CLIENT_ROGUESHOPINFO_GET_BUFFSHOP_OFFSET UNITYSDK_OFFSET(0xC7E4940)
#define RPG_CLIENT_ROGUESHOPINFO_GET_FORMULASHOP_OFFSET UNITYSDK_OFFSET(0xC7E4960)
#define RPG_CLIENT_ROGUESHOPINFO_GET_MIRACLESHOP_OFFSET UNITYSDK_OFFSET(0xC7E4920)
#define RPG_CLIENT_ROGUESHOPINFO_SET_BUFFSHOP_OFFSET UNITYSDK_OFFSET(0xC7E4950)
#define RPG_CLIENT_ROGUESHOPINFO_SET_FORMULASHOP_OFFSET UNITYSDK_OFFSET(0xC7E4970)
#define RPG_CLIENT_ROGUESHOPINFO_SET_MIRACLESHOP_OFFSET UNITYSDK_OFFSET(0xC7E4930)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPCONFIG_OFFSET UNITYSDK_OFFSET(0xC7E4770)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPITEM_OFFSET UNITYSDK_OFFSET(0xC7E4710)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPCONFIG_OFFSET UNITYSDK_OFFSET(0xC7E4840)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPITEM_OFFSET UNITYSDK_OFFSET(0xC7E47E0)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCMIRACLE_OFFSET UNITYSDK_OFFSET(0xC7E4680)
#define RPG_CLIENT_ROGUESHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7E4980)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueShopInfo_TypeDefinitionIndex = 62971;

	class RogueShopInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueFormulaShopData* _FormulaShop_k__BackingField; // 0x10
		::RPG::Client::RogueBuffShopData* _BuffShop_k__BackingField; // 0x18
		::RPG::Client::RogueMiracleShopData* _MiracleShop_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO__CTOR_OFFSET))(this);
		}

		::System::Void SyncMiracle(::Class_1_D40936EF3BF54118_85* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCMIRACLE_OFFSET))(this, a1);
		}

		::System::Void SyncBuffShopItem(::Class_1_D40936EF3BF54118_86* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPITEM_OFFSET))(this, a1);
		}

		::System::Void SyncBuffShopConfig(::System::Int32 a1, ::System::Int32 a2, ::Class_1_C74059A83466814F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncFormulaShopItem(::Class_1_D40936EF3BF54118_87* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_87*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPITEM_OFFSET))(this, a1);
		}

		::System::Void SyncFormulaShopConfig(::System::Int32 a1, ::System::Int32 a2, ::Class_1_C74059A83466814F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleShopData* get_MiracleShop()
		{
			return ((::RPG::Client::RogueMiracleShopData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_GET_MIRACLESHOP_OFFSET))(this);
		}

		::System::Void set_MiracleShop(::RPG::Client::RogueMiracleShopData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SET_MIRACLESHOP_OFFSET))(this, a1);
		}

		::RPG::Client::RogueBuffShopData* get_BuffShop()
		{
			return ((::RPG::Client::RogueBuffShopData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_GET_BUFFSHOP_OFFSET))(this);
		}

		::System::Void set_BuffShop(::RPG::Client::RogueBuffShopData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SET_BUFFSHOP_OFFSET))(this, a1);
		}

		::RPG::Client::RogueFormulaShopData* get_FormulaShop()
		{
			return ((::RPG::Client::RogueFormulaShopData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_GET_FORMULASHOP_OFFSET))(this);
		}

		::System::Void set_FormulaShop(::RPG::Client::RogueFormulaShopData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SET_FORMULASHOP_OFFSET))(this, a1);
		}
	};
}
