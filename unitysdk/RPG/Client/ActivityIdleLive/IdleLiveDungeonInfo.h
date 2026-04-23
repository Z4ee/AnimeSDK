#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_014C66952F2D60FA;
class Class_1_36E3880E987172D7_7;
class Class_1_455008579EB95638_46;
class Class_1_C821CB457FB5EBC6_9;
class Class_1_D17272E82AE804C2_489;
class Class_1_D40936EF3BF54118_50;
class Class_1_FBC6D4A7BD3E337F;
namespace RPG::Client::ActivityIdleLive { class DungeonSpEquipInventoryDisplayData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonGamePlayContext; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonRankInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_BACKTOMAIN_OFFSET UNITYSDK_OFFSET(0x9B4A3C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_DOSTARTDUNGEON_OFFSET UNITYSDK_OFFSET(0x9B4CF20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_ENDBATTLE_OFFSET UNITYSDK_OFFSET(0x9B4A630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_EXITDUNGEON_OFFSET UNITYSDK_OFFSET(0x9B4A920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETASSISTREWARD_OFFSET UNITYSDK_OFFSET(0x9B4AC70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETAVATAREQUIPPEDSPEQUIPINFO_OFFSET UNITYSDK_OFFSET(0x9B4B630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETCURRENTDUNGEONDATA_OFFSET UNITYSDK_OFFSET(0x9B4AD80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETDUNGEONDATA_OFFSET UNITYSDK_OFFSET(0x9B4A550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETSPEQUIPINVENTORYDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9B4B560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_DUNGEONDATAS_OFFSET UNITYSDK_OFFSET(0x9B4D840)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B4D860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x9B4D830)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x9B4D8A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_SPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x9B4D8C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_TEAMINFO_OFFSET UNITYSDK_OFFSET(0x9B4D880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B28600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_HANDLEEARLYFINISHDUNGEON_OFFSET UNITYSDK_OFFSET(0x9B4AC00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9B47AC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_REBUILDDUNGEON_OFFSET UNITYSDK_OFFSET(0x9B49390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_REBUILDSPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x9B49410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_REFRESHFRIENDDUNGEONINFOWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x9B289D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_REFRESHSELFTOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B4ADD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_RESETALLDUNGEONFRIENDSOLTDATAS_OFFSET UNITYSDK_OFFSET(0x9B4B410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_DUNGEONDATAS_OFFSET UNITYSDK_OFFSET(0x9B4D850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B4D870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x9B4D8B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_SPEQUIPSLOTINFO_OFFSET UNITYSDK_OFFSET(0x9B4D8D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_TEAMINFO_OFFSET UNITYSDK_OFFSET(0x9B4D890)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_STARTDUNGEON_OFFSET UNITYSDK_OFFSET(0x9B482C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x9B4C670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_2_OFFSET UNITYSDK_OFFSET(0x9B4CA30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_3_OFFSET UNITYSDK_OFFSET(0x9B4CA90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_4_OFFSET UNITYSDK_OFFSET(0x9B4D170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_5_OFFSET UNITYSDK_OFFSET(0x9B4D2F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B4BAA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B4D8E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__INITASSITIDLIST_OFFSET UNITYSDK_OFFSET(0x9B487D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__INITGAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B4CE20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__INITSPSLOTS_OFFSET UNITYSDK_OFFSET(0x9B47F30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__ISLOADING_OFFSET UNITYSDK_OFFSET(0x9B48700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__ONSETPLURALITYHPNUM_OFFSET UNITYSDK_OFFSET(0x9B4D750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__TRYSYNCSPEQUIPTOPREFS_OFFSET UNITYSDK_OFFSET(0x9B48DF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonInfo_TypeDefinitionIndex = 69267;

	class IdleLiveDungeonInfo : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* _spEquipSlotInfo_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _FriendDungeonInfoPromise; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveDungeonTeamInfo* _TeamInfo_k__BackingField; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankInfo* _RankInfo_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*>* _DungeonDatas_k__BackingField; // 0x30
		::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayContext* _GamePlayContext_k__BackingField; // 0x38
		::System::Boolean _HasReward; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_INIT_OFFSET))(this);
		}

		::System::Void StartDungeon(::System::UInt32 dungeonId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_STARTDUNGEON_OFFSET))(this, dungeonId);
		}

		::System::Boolean _IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__ISLOADING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _InitAssitIdList(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* dungeonData)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__INITASSITIDLIST_OFFSET))(this, dungeonData);
		}

		::System::Void RebuildDungeon(::System::UInt32 dungeonId, ::System::Boolean isRebuildTeam)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_REBUILDDUNGEON_OFFSET))(this, dungeonId, isRebuildTeam);
		}

		::System::Void BackToMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_BACKTOMAIN_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* GetDungeonData(::System::UInt32 dungeonId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETDUNGEONDATA_OFFSET))(this, dungeonId);
		}

		::System::Void EndBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_ENDBATTLE_OFFSET))(this);
		}

		::System::Void ExitDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_EXITDUNGEON_OFFSET))(this);
		}

		::System::Void HandleEarlyFinishDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_HANDLEEARLYFINISHDUNGEON_OFFSET))(this);
		}

		::System::Void GetAssistReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETASSISTREWARD_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* GetCurrentDungeonData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETCURRENTDUNGEONDATA_OFFSET))(this);
		}

		::System::Void RefreshSelfTotalProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_REFRESHSELFTOTALPROGRESS_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshFriendDungeonInfoWithPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_REFRESHFRIENDDUNGEONINFOWITHPROMISE_OFFSET))(this);
		}

		::System::Void ResetAllDungeonFriendSoltDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_RESETALLDUNGEONFRIENDSOLTDATAS_OFFSET))(this);
		}

		::System::Void RebuildSpEquipSlotInfo(::System::UInt32 dungeonId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_REBUILDSPEQUIPSLOTINFO_OFFSET))(this, dungeonId);
		}

		::RPG::Client::ActivityIdleLive::DungeonSpEquipInventoryDisplayData* GetSpEquipInventoryDisplayData(::System::UInt32 initSelectedEquipId)
		{
			return ((::RPG::Client::ActivityIdleLive::DungeonSpEquipInventoryDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETSPEQUIPINVENTORYDISPLAYDATA_OFFSET))(this, initSelectedEquipId);
		}

		::System::Collections::Generic::List_1<::Class_1_014C66952F2D60FA*>* GetAvatarEquippedSpEquipInfo()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_014C66952F2D60FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GETAVATAREQUIPPEDSPEQUIPINFO_OFFSET))(this);
		}

		::System::Void Update(::Class_1_455008579EB95638_46* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_46*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_OFFSET))(this, rsp);
		}

		::System::Void Update_1(::Class_1_D40936EF3BF54118_50* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_1_OFFSET))(this, rsp);
		}

		::System::Void Update_2(::Class_1_FBC6D4A7BD3E337F* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBC6D4A7BD3E337F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_2_OFFSET))(this, rsp);
		}

		::System::Void Update_3(::Class_1_36E3880E987172D7_7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_3_OFFSET))(this, rsp);
		}

		::System::Void DoStartDungeon(::System::UInt32 dungeonId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_DOSTARTDUNGEON_OFFSET))(this, dungeonId);
		}

		::System::Void Update_4(::Class_1_C821CB457FB5EBC6_9* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_4_OFFSET))(this, rsp);
		}

		::System::Void Update_5(::Class_1_D17272E82AE804C2_489* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_489*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_UPDATE_5_OFFSET))(this, notify);
		}

		::System::Void _InitGamePlayContext(::Class_1_36E3880E987172D7_7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__INITGAMEPLAYCONTEXT_OFFSET))(this, rsp);
		}

		::System::Void _TrySyncSpEquipToPrefs(::System::UInt32 dungeonId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__TRYSYNCSPEQUIPTOPREFS_OFFSET))(this, dungeonId);
		}

		::System::Void _InitSpSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__INITSPSLOTS_OFFSET))(this);
		}

		::System::Void _OnSetPluralityHPNum(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO__ONSETPLURALITYHPNUM_OFFSET))(this, arg);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_HASREWARD_OFFSET))(this);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*>* get_DungeonDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_DUNGEONDATAS_OFFSET))(this);
		}

		::System::Void set_DungeonDatas(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_DUNGEONDATAS_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayContext* get_GamePlayContext()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_GAMEPLAYCONTEXT_OFFSET))(this);
		}

		::System::Void set_GamePlayContext(::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_GAMEPLAYCONTEXT_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonTeamInfo* get_TeamInfo()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonTeamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_TEAMINFO_OFFSET))(this);
		}

		::System::Void set_TeamInfo(::RPG::Client::ActivityIdleLive::IdleLiveDungeonTeamInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_TEAMINFO_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankInfo* get_RankInfo()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_RANKINFO_OFFSET))(this);
		}

		::System::Void set_RankInfo(::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_RANKINFO_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* get_spEquipSlotInfo()
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_GET_SPEQUIPSLOTINFO_OFFSET))(this);
		}

		::System::Void set_spEquipSlotInfo(::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO_SET_SPEQUIPSLOTINFO_OFFSET))(this, value);
		}
	};
}
