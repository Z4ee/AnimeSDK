#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueWorkBenchCost; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x184E19D0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_DISPLAYSCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x184E1A10)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x184E1970)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ISBOUGHT_OFFSET UNITYSDK_OFFSET(0x184E19B0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x184E1990)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ORIGINCOSTDATA_OFFSET UNITYSDK_OFFSET(0x184E19F0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0x184E19E0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_DISPLAYSCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x184E1A20)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x184E1980)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ISBOUGHT_OFFSET UNITYSDK_OFFSET(0x184E19C0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x184E19A0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ORIGINCOSTDATA_OFFSET UNITYSDK_OFFSET(0x184E1A00)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x184E17D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchMagicScepterShopItem_TypeDefinitionIndex = 64346;

	class RogueWorkBenchMagicScepterShopItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterDataItem* _DisplayScepterData_k__BackingField; // 0x10
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x18
		::RPG::Client::RogueWorkBenchCost* _OriginCostData_k__BackingField; // 0x20
		::System::Boolean _IsBought_k__BackingField; // 0x28
		::System::UInt32 _Level_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBought()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ISBOUGHT_OFFSET))(this);
		}

		::System::Void set_IsBought(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ISBOUGHT_OFFSET))(this, a1);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_COSTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueWorkBenchCost* get_OriginCostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_ORIGINCOSTDATA_OFFSET))(this);
		}

		::System::Void set_OriginCostData(::RPG::Client::RogueWorkBenchCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_ORIGINCOSTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicScepterDataItem* get_DisplayScepterData()
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_GET_DISPLAYSCEPTERDATA_OFFSET))(this);
		}

		::System::Void set_DisplayScepterData(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTERSHOPITEM_SET_DISPLAYSCEPTERDATA_OFFSET))(this, a1);
		}
	};
}
