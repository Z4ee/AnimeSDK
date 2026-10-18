#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueWorkBenchCost; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xE05AB50)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xE05AB30)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_GET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0xE05AB70)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xE05AB60)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xE05AB40)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_SET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0xE05AB80)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE05A7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchLevelUpMagicScepterItem_TypeDefinitionIndex = 67347;

	class RogueWorkBenchLevelUpMagicScepterItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterDataItem* _ScepterData_k__BackingField; // 0x10
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_SET_COSTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicScepterDataItem* get_ScepterData()
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_GET_SCEPTERDATA_OFFSET))(this);
		}

		::System::Void set_ScepterData(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTERITEM_SET_SCEPTERDATA_OFFSET))(this, a1);
		}
	};
}
