#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class RogueWorkBenchCost; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xB129840)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_DISPLAYUNITDATA_OFFSET UNITYSDK_OFFSET(0xB129880)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xB1297E0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ISBOUGHT_OFFSET UNITYSDK_OFFSET(0xB129820)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB129800)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ORIGINCOSTDATA_OFFSET UNITYSDK_OFFSET(0xB129860)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xB129850)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_DISPLAYUNITDATA_OFFSET UNITYSDK_OFFSET(0xB129890)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xB1297F0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ISBOUGHT_OFFSET UNITYSDK_OFFSET(0xB129830)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB129810)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ORIGINCOSTDATA_OFFSET UNITYSDK_OFFSET(0xB129870)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB129400)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchMagicUnitShopItem_TypeDefinitionIndex = 62047;

	class RogueWorkBenchMagicUnitShopItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicUnitDataItem* _DisplayUnitData_k__BackingField; // 0x10
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x18
		::RPG::Client::RogueWorkBenchCost* _OriginCostData_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x28
		::System::Boolean _IsBought_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 id, ::System::Boolean isBought, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* costList, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* originCostList, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM__CTOR_OFFSET))(this, id, isBought, costList, originCostList, level);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsBought()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ISBOUGHT_OFFSET))(this);
		}

		::System::Void set_IsBought(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ISBOUGHT_OFFSET))(this, value);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_COSTDATA_OFFSET))(this, value);
		}

		::RPG::Client::RogueWorkBenchCost* get_OriginCostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ORIGINCOSTDATA_OFFSET))(this);
		}

		::System::Void set_OriginCostData(::RPG::Client::RogueWorkBenchCost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ORIGINCOSTDATA_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicUnitDataItem* get_DisplayUnitData()
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_DISPLAYUNITDATA_OFFSET))(this);
		}

		::System::Void set_DisplayUnitData(::RPG::Client::RogueMagicUnitDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_DISPLAYUNITDATA_OFFSET))(this, value);
		}
	};
}
