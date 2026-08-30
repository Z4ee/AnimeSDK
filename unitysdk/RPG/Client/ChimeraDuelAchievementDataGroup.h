#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xCBC6EA0)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0xCBC7D60)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_SET_TABNAME_OFFSET UNITYSDK_OFFSET(0xCBC7D70)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__ADDCHIMERAGROUPDATA_OFFSET UNITYSDK_OFFSET(0xCBC7440)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__ADDGROUPITEM_OFFSET UNITYSDK_OFFSET(0xCBC79E0)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xCBC65D0)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INITCHIMERALIST_OFFSET UNITYSDK_OFFSET(0xCBC6FD0)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INITITEMLIST_OFFSET UNITYSDK_OFFSET(0xCBC7330)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INIT_OFFSET UNITYSDK_OFFSET(0xCBC6F50)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__SORTCHIMERAGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xCBC7780)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__SORTITEMGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xCBC7BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelAchievementDataGroup_TypeDefinitionIndex = 63356;

	class ChimeraDuelAchievementDataGroup : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _SpecialMasterID = 0x265; // 0x0
		// static const ::System::UInt32 _AllMasterChimeraGroupID = 0x9C45; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _SpecialItemGroupIDDict; // 0x10
		::Il2CppArray<::System::UInt32>* _ItemGroupIDDict; // 0x18
		::Il2CppArray<::System::UInt32>* _ChimeraGroupIDList; // 0x20
		::Il2CppArray<::System::UInt32>* _SpecialChimeraGroupIDList; // 0x28
		::Il2CppArray<::RPG::Client::TextID>* _TextIDDict; // 0x30
		::Il2CppArray<::System::UInt32>* _ItemBattleGroupIDDict; // 0x38
		::Il2CppArray<::System::UInt32>* _ChimeraBattleGroupIDList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelItemData*>* ItemList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelChimeraData*>* ChimeraList; // 0x50
		::System::Int32 _TabIndex; // 0x58
		::System::UInt32 _MasterID; // 0x5C
		::System::Boolean _IsInBattle; // 0x60
		::RPG::Client::TextID _TabName_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelAchievementDataGroup* Create(::System::Int32 a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ChimeraDuelAchievementDataGroup*(*)(::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_CREATE_OFFSET))(a1, a2, a3);
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

		::System::Void _AddChimeraGroupData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__ADDCHIMERAGROUPDATA_OFFSET))(this, a1);
		}

		::System::Void _InitItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__INITITEMLIST_OFFSET))(this);
		}

		::System::Void _SortItemGroupDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__SORTITEMGROUPDATALIST_OFFSET))(this);
		}

		::System::Void _AddGroupItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP__ADDGROUPITEM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TabName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_GET_TABNAME_OFFSET))(this);
		}

		::System::Void set_TabName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP_SET_TABNAME_OFFSET))(this, a1);
		}
	};
}
