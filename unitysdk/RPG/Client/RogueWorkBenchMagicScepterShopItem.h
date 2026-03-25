#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueWorkBenchCost; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xA3F0E90)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_DISPLAYSCEPTERDATA_OFFSET UNITYSDK_OFFSET(0xA3F0ED0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xA3F0E30)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ISBOUGHT_OFFSET UNITYSDK_OFFSET(0xA3F0E70)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA3F0E50)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ORIGINCOSTDATA_OFFSET UNITYSDK_OFFSET(0xA3F0EB0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xA3F0EA0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_DISPLAYSCEPTERDATA_OFFSET UNITYSDK_OFFSET(0xA3F0EE0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xA3F0E40)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ISBOUGHT_OFFSET UNITYSDK_OFFSET(0xA3F0E80)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA3F0E60)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ORIGINCOSTDATA_OFFSET UNITYSDK_OFFSET(0xA3F0EC0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F0C90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchMagicScepterShopItem_TypeDefinitionIndex = 54858;

	class RogueWorkBenchMagicScepterShopItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterDataItem* _DisplayScepterData_k__BackingField; // 0x10
		::RPG::Client::RogueWorkBenchCost* _OriginCostData_k__BackingField; // 0x18
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x28
		::System::Boolean _IsBought_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 level, ::System::Boolean isBought, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* costList, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* originCostList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM__CTOR_OFFSET))(this, id, level, isBought, costList, originCostList);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsBought()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ISBOUGHT_OFFSET))(this);
		}

		::System::Void set_IsBought(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ISBOUGHT_OFFSET))(this, value);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_COSTDATA_OFFSET))(this, value);
		}

		::RPG::Client::RogueWorkBenchCost* get_OriginCostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ORIGINCOSTDATA_OFFSET))(this);
		}

		::System::Void set_OriginCostData(::RPG::Client::RogueWorkBenchCost* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ORIGINCOSTDATA_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicScepterDataItem* get_DisplayScepterData()
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_DISPLAYSCEPTERDATA_OFFSET))(this);
		}

		::System::Void set_DisplayScepterData(::RPG::Client::RogueMagicScepterDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_DISPLAYSCEPTERDATA_OFFSET))(this, value);
		}
	};
}
