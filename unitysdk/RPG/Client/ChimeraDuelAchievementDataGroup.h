#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x9FFBD50)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0x9FFC9C0)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_SET_TABNAME_OFFSET UNITYSDK_OFFSET(0x9FFC9D0)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__ADDCHIMERAGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9FFC280)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__ADDGROUPITEM_OFFSET UNITYSDK_OFFSET(0x9FFC680)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9FFB660)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INITCHIMERALIST_OFFSET UNITYSDK_OFFSET(0x9FFBE80)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INITITEMLIST_OFFSET UNITYSDK_OFFSET(0x9FFC110)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INIT_OFFSET UNITYSDK_OFFSET(0x9FFBE00)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__SORTCHIMERAGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x9FFC490)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__SORTITEMGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x9FFC830)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelAchievementDataGroup_TypeDefinitionIndex = 58302;

	class ChimeraDuelAchievementDataGroup : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _SpecialMasterID = 0x265; // 0x0
		// static const ::System::UInt32 _AllMasterChimeraGroupID = 0x9C45; // 0x0
		::Il2CppArray<::RPG::Client::TextID>* _TextIDDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _SpecialItemGroupIDDict; // 0x18
		::Il2CppArray<::System::UInt32>* _ItemGroupIDDict; // 0x20
		::Il2CppArray<::System::UInt32>* _SpecialChimeraGroupIDList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelChimeraData*>* ChimeraList; // 0x30
		::Il2CppArray<::System::UInt32>* _ChimeraBattleGroupIDList; // 0x38
		::Il2CppArray<::System::UInt32>* _ChimeraGroupIDList; // 0x40
		::Il2CppArray<::System::UInt32>* _ItemBattleGroupIDDict; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelItemData*>* ItemList; // 0x50
		::System::Boolean _IsInBattle; // 0x58
		::System::Int32 _TabIndex; // 0x5C
		::System::UInt32 _MasterID; // 0x60
		::RPG::Client::TextID _TabName_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelAchievementDataGroup* Create(::System::Int32 index, ::System::Boolean isInBattle, ::System::UInt32 masterID)
		{
			return ((::RPG::Client::ChimeraDuelAchievementDataGroup*(*)(::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_CREATE_OFFSET))(index, isInBattle, masterID);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INIT_OFFSET))(this);
		}

		::System::Void _InitChimeraList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INITCHIMERALIST_OFFSET))(this);
		}

		::System::Void _SortChimeraGroupDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__SORTCHIMERAGROUPDATALIST_OFFSET))(this);
		}

		::System::Void _AddChimeraGroupData(::System::UInt32 chimeraGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__ADDCHIMERAGROUPDATA_OFFSET))(this, chimeraGroupID);
		}

		::System::Void _InitItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INITITEMLIST_OFFSET))(this);
		}

		::System::Void _SortItemGroupDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__SORTITEMGROUPDATALIST_OFFSET))(this);
		}

		::System::Void _AddGroupItem(::System::UInt32 itemGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__ADDGROUPITEM_OFFSET))(this, itemGroupID);
		}

		::RPG::Client::TextID get_TabName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_GET_TABNAME_OFFSET))(this);
		}

		::System::Void set_TabName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_SET_TABNAME_OFFSET))(this, value);
		}
	};
}
