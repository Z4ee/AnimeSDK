#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_99;
class Class_1_A30F847E93AD8C60;
namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueTournAreaGroupData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUETOURNAREADATAITEM_CLEARALLPLAYEDAREAUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xC7F3EF0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC7F2460)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GETTOURNMODEBYAREA_OFFSET UNITYSDK_OFFSET(0xC7F3070)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xC7F4240)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xC7F4200)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AVAILROGUESCORE_OFFSET UNITYSDK_OFFSET(0xC7F42E0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AVAILTOURNEXP_OFFSET UNITYSDK_OFFSET(0xC7F4300)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC7F4260)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC7F4320)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0xC7F4380)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC7F43A0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC7F4360)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_LOCKEDHINT_OFFSET UNITYSDK_OFFSET(0xC7F42C0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_MONSTERDROPITEMS_OFFSET UNITYSDK_OFFSET(0xC7F4340)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC7F42A0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xC7F4220)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_WORLDLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xC7F4280)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_ISNEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xC7F3860)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_ISREACHWORLDLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xC7F30F0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_REWRITEMONSTERLEVELBYAREA_OFFSET UNITYSDK_OFFSET(0xC7F3150)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SETAREAUNLOCKANIMPLAYED_OFFSET UNITYSDK_OFFSET(0xC7F3AF0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xC7F4250)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xC7F4210)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AVAILROGUESCORE_OFFSET UNITYSDK_OFFSET(0xC7F42F0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AVAILTOURNEXP_OFFSET UNITYSDK_OFFSET(0xC7F4310)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC7F4270)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC7F4330)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0xC7F4390)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC7F43B0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC7F4370)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_LOCKEDHINT_OFFSET UNITYSDK_OFFSET(0xC7F42D0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_MONSTERDROPITEMS_OFFSET UNITYSDK_OFFSET(0xC7F4350)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC7F42B0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xC7F4230)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_WORLDLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xC7F4290)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xC7F08A0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F2DF0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_CLASSIC_OFFSET UNITYSDK_OFFSET(0xC7F4060)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_DIVISION_OFFSET UNITYSDK_OFFSET(0xC7F40D0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_OFFSET UNITYSDK_OFFSET(0xC7F2EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaDataItem_TypeDefinitionIndex = 63131;

	class RogueTournAreaDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* _FirstRewardItems_k__BackingField; // 0x18
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* _MonsterDropItems_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _DifficultyIDs; // 0x28
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x30
		::System::UInt32 _AvailRogueScore_k__BackingField; // 0x38
		::RPG::GameCore::RogueTournMode _TournMode_k__BackingField; // 0x3C
		::RPG::Client::TextID _LockedHint_k__BackingField; // 0x40
		::RPG::Client::TextID _Name_k__BackingField; // 0x50
		::System::UInt32 _WorldLevelLimit_k__BackingField; // 0x60
		::System::UInt32 _AvailTournExp_k__BackingField; // 0x64
		::System::Boolean _IsUnlocked_k__BackingField; // 0x68
		::System::Boolean _IsFirstPassed_k__BackingField; // 0x69
		::System::Boolean _IsFirstRewardTaken_k__BackingField; // 0x6A
		::System::UInt32 _AreaID_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournAreaDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournAreaDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::GameCore::RogueTournMode GetTournModeByArea(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GETTOURNMODEBYAREA_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_21C7581DFE99F091_99* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_99*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsReachWorldLevelLimit(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_ISREACHWORLDLEVELLIMIT_OFFSET))(this, a1);
		}

		::System::Void RewriteMonsterLevelByArea(::RPG::Client::MonsterData* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_REWRITEMONSTERLEVELBYAREA_OFFSET))(this, a1, a2);
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

		static ::RPG::Client::IRogueTournDifficulty* _GetDifficultyByAreaRow(::Class_1_A30F847E93AD8C60* a1)
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::Class_1_A30F847E93AD8C60*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournDifficulty* _GetDifficultyByAreaRow_Classic(::Class_1_A30F847E93AD8C60* a1)
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::Class_1_A30F847E93AD8C60*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_CLASSIC_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournDifficulty* _GetDifficultyByAreaRow_Division(::Class_1_A30F847E93AD8C60* a1)
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::Class_1_A30F847E93AD8C60*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM__GETDIFFICULTYBYAREAROW_DIVISION_OFFSET))(a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_TOURNMODE_OFFSET))(this);
		}

		::System::Void set_TournMode(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_TOURNMODE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AREAGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldLevelLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_WORLDLEVELLIMIT_OFFSET))(this);
		}

		::System::Void set_WorldLevelLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_WORLDLEVELLIMIT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LockedHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_LOCKEDHINT_OFFSET))(this);
		}

		::System::Void set_LockedHint(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_LOCKEDHINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailRogueScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AVAILROGUESCORE_OFFSET))(this);
		}

		::System::Void set_AvailRogueScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AVAILROGUESCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailTournExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AVAILTOURNEXP_OFFSET))(this);
		}

		::System::Void set_AvailTournExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_AVAILTOURNEXP_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* get_FirstRewardItems()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_FIRSTREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_FirstRewardItems(::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_FIRSTREWARDITEMS_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* get_MonsterDropItems()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_MONSTERDROPITEMS_OFFSET))(this);
		}

		::System::Void set_MonsterDropItems(::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_MONSTERDROPITEMS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTPASSED_OFFSET))(this);
		}

		::System::Void set_IsFirstPassed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTPASSED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsFirstRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET))(this, a1);
		}
	};
}
