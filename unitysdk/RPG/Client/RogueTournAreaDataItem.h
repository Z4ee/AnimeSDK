#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_87;
class Class_1_A30F847E93AD8C60;
namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueTournAreaGroupData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUETOURNAREADATAITEM_CLEARALLPLAYEDAREAUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xA36BA30)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA36A020)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GETTOURNMODEBYAREA_OFFSET UNITYSDK_OFFSET(0xA36AA50)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xA36BD80)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA36BD40)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AVAILROGUESCORE_OFFSET UNITYSDK_OFFSET(0xA36BE20)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AVAILTOURNEXP_OFFSET UNITYSDK_OFFSET(0xA36BE40)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA36BDA0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xA36BE60)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0xA36BEC0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA36BEE0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA36BEA0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_LOCKEDHINT_OFFSET UNITYSDK_OFFSET(0xA36BE00)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_MONSTERDROPITEMS_OFFSET UNITYSDK_OFFSET(0xA36BE80)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA36BDE0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xA36BD60)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_WORLDLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xA36BDC0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_ISNEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xA36B3C0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_ISREACHWORLDLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xA36AAD0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_REWRITEMONSTERLEVELBYAREA_OFFSET UNITYSDK_OFFSET(0xA36AB30)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SETAREAUNLOCKANIMPLAYED_OFFSET UNITYSDK_OFFSET(0xA36B640)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xA36BD90)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xA36BD50)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AVAILROGUESCORE_OFFSET UNITYSDK_OFFSET(0xA36BE30)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AVAILTOURNEXP_OFFSET UNITYSDK_OFFSET(0xA36BE50)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA36BDB0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xA36BE70)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0xA36BED0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA36BEF0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA36BEB0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_LOCKEDHINT_OFFSET UNITYSDK_OFFSET(0xA36BE10)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_MONSTERDROPITEMS_OFFSET UNITYSDK_OFFSET(0xA36BE90)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA36BDF0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xA36BD70)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_WORLDLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xA36BDD0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xA368720)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA36A7D0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_CLASSIC_OFFSET UNITYSDK_OFFSET(0xA36BBA0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_DIVISION_OFFSET UNITYSDK_OFFSET(0xA36BC10)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_OFFSET UNITYSDK_OFFSET(0xA36A8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaDataItem_TypeDefinitionIndex = 55010;

	class RogueTournAreaDataItem : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x10
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _DifficultyIDs; // 0x20
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* _MonsterDropItems_k__BackingField; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* _FirstRewardItems_k__BackingField; // 0x30
		::RPG::Client::TextID _Name_k__BackingField; // 0x38
		::System::UInt32 _WorldLevelLimit_k__BackingField; // 0x48
		::System::UInt32 _AreaID_k__BackingField; // 0x4C
		::RPG::Client::TextID _LockedHint_k__BackingField; // 0x50
		::System::Boolean _IsFirstRewardTaken_k__BackingField; // 0x60
		::System::Boolean _IsFirstPassed_k__BackingField; // 0x61
		::System::Boolean _IsUnlocked_k__BackingField; // 0x62
		::System::UInt32 _AvailTournExp_k__BackingField; // 0x64
		::System::UInt32 _AvailRogueScore_k__BackingField; // 0x68
		::RPG::GameCore::RogueTournMode _TournMode_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournAreaDataItem* Create(::System::UInt32 areaID)
		{
			return ((::RPG::Client::RogueTournAreaDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_CREATE_OFFSET))(areaID);
		}

		static ::RPG::GameCore::RogueTournMode GetTournModeByArea(::System::UInt32 areaID)
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GETTOURNMODEBYAREA_OFFSET))(areaID);
		}

		::System::Void Sync(::Class_1_4CF8088A158DCE25_87* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_87*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SYNC_OFFSET))(this, proto);
		}

		::System::Boolean IsReachWorldLevelLimit(::System::UInt32 worldLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_ISREACHWORLDLEVELLIMIT_OFFSET))(this, worldLevel);
		}

		::System::Void RewriteMonsterLevelByArea(::RPG::Client::MonsterData* finalMonster, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* monsters)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_REWRITEMONSTERLEVELBYAREA_OFFSET))(this, finalMonster, monsters);
		}

		::System::Boolean IsNeedPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_ISNEEDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void SetAreaUnlockAnimPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SETAREAUNLOCKANIMPLAYED_OFFSET))(this);
		}

		static ::System::Void ClearAllPlayedAreaUnlockAnim()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_CLEARALLPLAYEDAREAUNLOCKANIM_OFFSET))();
		}

		static ::RPG::Client::IRogueTournDifficulty* _GetDifficultyByAreaRow(::Class_1_A30F847E93AD8C60* areaRow)
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::Class_1_A30F847E93AD8C60*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_OFFSET))(areaRow);
		}

		static ::RPG::Client::IRogueTournDifficulty* _GetDifficultyByAreaRow_Classic(::Class_1_A30F847E93AD8C60* areaRow)
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::Class_1_A30F847E93AD8C60*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_CLASSIC_OFFSET))(areaRow);
		}

		static ::RPG::Client::IRogueTournDifficulty* _GetDifficultyByAreaRow_Division(::Class_1_A30F847E93AD8C60* areaRow)
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::Class_1_A30F847E93AD8C60*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_DIVISION_OFFSET))(areaRow);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AREAID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_TOURNMODE_OFFSET))(this);
		}

		::System::Void set_TournMode(::RPG::GameCore::RogueTournMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_TOURNMODE_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AREAGROUP_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_DIFFICULTY_OFFSET))(this, value);
		}

		::System::UInt32 get_WorldLevelLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_WORLDLEVELLIMIT_OFFSET))(this);
		}

		::System::Void set_WorldLevelLimit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_WORLDLEVELLIMIT_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_LockedHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_LOCKEDHINT_OFFSET))(this);
		}

		::System::Void set_LockedHint(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_LOCKEDHINT_OFFSET))(this, value);
		}

		::System::UInt32 get_AvailRogueScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AVAILROGUESCORE_OFFSET))(this);
		}

		::System::Void set_AvailRogueScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AVAILROGUESCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_AvailTournExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AVAILTOURNEXP_OFFSET))(this);
		}

		::System::Void set_AvailTournExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AVAILTOURNEXP_OFFSET))(this, value);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* get_FirstRewardItems()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_FIRSTREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_FirstRewardItems(::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_FIRSTREWARDITEMS_OFFSET))(this, value);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* get_MonsterDropItems()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_MONSTERDROPITEMS_OFFSET))(this);
		}

		::System::Void set_MonsterDropItems(::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_MONSTERDROPITEMS_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTPASSED_OFFSET))(this);
		}

		::System::Void set_IsFirstPassed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTPASSED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsFirstRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET))(this, value);
		}
	};
}
