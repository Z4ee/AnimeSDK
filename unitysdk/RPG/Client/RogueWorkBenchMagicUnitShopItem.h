#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class RogueWorkBenchCost; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xC87DA00)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_DISPLAYUNITDATA_OFFSET UNITYSDK_OFFSET(0xC87DA40)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xC87D9A0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ISBOUGHT_OFFSET UNITYSDK_OFFSET(0xC87D9E0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC87D9C0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ORIGINCOSTDATA_OFFSET UNITYSDK_OFFSET(0xC87DA20)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xC87DA10)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_DISPLAYUNITDATA_OFFSET UNITYSDK_OFFSET(0xC87DA50)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xC87D9B0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ISBOUGHT_OFFSET UNITYSDK_OFFSET(0xC87D9F0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC87D9D0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ORIGINCOSTDATA_OFFSET UNITYSDK_OFFSET(0xC87DA30)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC87D600)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchMagicUnitShopItem_TypeDefinitionIndex = 62980;

	class RogueWorkBenchMagicUnitShopItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueWorkBenchCost* _OriginCostData_k__BackingField; // 0x10
		::RPG::Client::RogueMagicUnitDataItem* _DisplayUnitData_k__BackingField; // 0x18
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _IsBought_k__BackingField; // 0x2C
		::System::UInt32 _Level_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBought()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ISBOUGHT_OFFSET))(this);
		}

		::System::Void set_IsBought(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ISBOUGHT_OFFSET))(this, a1);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_COSTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueWorkBenchCost* get_OriginCostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_ORIGINCOSTDATA_OFFSET))(this);
		}

		::System::Void set_OriginCostData(::RPG::Client::RogueWorkBenchCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_ORIGINCOSTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicUnitDataItem* get_DisplayUnitData()
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_GET_DISPLAYUNITDATA_OFFSET))(this);
		}

		::System::Void set_DisplayUnitData(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOPITEM_SET_DISPLAYUNITDATA_OFFSET))(this, a1);
		}
	};
}
