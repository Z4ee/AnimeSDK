#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
class Class_1_E7C4009BCC22497A_72;
class Class_1_E7C4009BCC22497A_73;
class Class_1_E7C4009BCC22497A_74;
namespace RPG::Client { class RogueBuffShopData; }
namespace RPG::Client { class RogueFormulaShopData; }
namespace RPG::Client { class RogueMiracleShopData; }

#define RPG_CLIENT_ROGUESHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA35D3D0)
#define RPG_CLIENT_ROGUESHOPINFO_GET_BUFFSHOP_OFFSET UNITYSDK_OFFSET(0xA35D570)
#define RPG_CLIENT_ROGUESHOPINFO_GET_FORMULASHOP_OFFSET UNITYSDK_OFFSET(0xA35D590)
#define RPG_CLIENT_ROGUESHOPINFO_GET_MIRACLESHOP_OFFSET UNITYSDK_OFFSET(0xA35D550)
#define RPG_CLIENT_ROGUESHOPINFO_SET_BUFFSHOP_OFFSET UNITYSDK_OFFSET(0xA35D580)
#define RPG_CLIENT_ROGUESHOPINFO_SET_FORMULASHOP_OFFSET UNITYSDK_OFFSET(0xA35D5A0)
#define RPG_CLIENT_ROGUESHOPINFO_SET_MIRACLESHOP_OFFSET UNITYSDK_OFFSET(0xA35D560)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPCONFIG_OFFSET UNITYSDK_OFFSET(0xA35D290)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPITEM_OFFSET UNITYSDK_OFFSET(0xA35D230)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPCONFIG_OFFSET UNITYSDK_OFFSET(0xA35D360)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPITEM_OFFSET UNITYSDK_OFFSET(0xA35D300)
#define RPG_CLIENT_ROGUESHOPINFO_SYNCMIRACLE_OFFSET UNITYSDK_OFFSET(0xA35D1A0)
#define RPG_CLIENT_ROGUESHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA35D5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueShopInfo_TypeDefinitionIndex = 54850;

	class RogueShopInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueMiracleShopData* _MiracleShop_k__BackingField; // 0x10
		::RPG::Client::RogueBuffShopData* _BuffShop_k__BackingField; // 0x18
		::RPG::Client::RogueFormulaShopData* _FormulaShop_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO__CTOR_OFFSET))(this);
		}

		::System::Void SyncMiracle(::Class_1_E7C4009BCC22497A_72* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCMIRACLE_OFFSET))(this, info);
		}

		::System::Void SyncBuffShopItem(::Class_1_E7C4009BCC22497A_73* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_73*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPITEM_OFFSET))(this, info);
		}

		::System::Void SyncBuffShopConfig(::System::Int32 remainRefreshTimes, ::System::Int32 totalRefreshTimes, ::Class_1_4D5D53619B020DDD* cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCBUFFSHOPCONFIG_OFFSET))(this, remainRefreshTimes, totalRefreshTimes, cost);
		}

		::System::Void SyncFormulaShopItem(::Class_1_E7C4009BCC22497A_74* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_74*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPITEM_OFFSET))(this, info);
		}

		::System::Void SyncFormulaShopConfig(::System::Int32 remainRefreshTimes, ::System::Int32 totalRefreshTimes, ::Class_1_4D5D53619B020DDD* cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESHOPINFO_SYNCFORMULASHOPCONFIG_OFFSET))(this, remainRefreshTimes, totalRefreshTimes, cost);
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
