#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/WaitForDisplayPageType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/System/Object.h"

class Class_1_12A9E44435FBA7F9_1;
class Class_1_58C02EFC41D1F04D_5;
class Class_1_A40145A90ACDEF85;
class Class_1_E14A0A1A8B1F847C_1;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class BoxingClubBattleRecord; }
namespace RPG::Client { class BoxingClubFailInfo; }
namespace RPG::Client { class BoxingClubWinInfo; }
namespace RPG::Client { class PVEBattleResultInfo; }
namespace RPG::GameCore { class BoxingClubChallengeConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_CLEARWAITFORRANDOMMARK_OFFSET UNITYSDK_OFFSET(0x92013C0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91FF5B0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETCURSTAGERECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x9200850)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETCURSTAGE_OFFSET UNITYSDK_OFFSET(0x92019C0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETRECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x9200410)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ACTIVITYMODUELID_OFFSET UNITYSDK_OFFSET(0x92026A0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x9202A20)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x92029E0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BATTLERECORD_OFFSET UNITYSDK_OFFSET(0x9202950)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BESTROUNDRECORD_OFFSET UNITYSDK_OFFSET(0x92029A0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BOXINGCLUBCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x91FE460)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CANUSETRIAL_OFFSET UNITYSDK_OFFSET(0x9202B00)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CHALLENGEMAXROUNDNUM_OFFSET UNITYSDK_OFFSET(0x9201A50)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CHALLENGENAME_OFFSET UNITYSDK_OFFSET(0x9202740)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x92028B0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_FIRSTPASSREWARDARRAY_OFFSET UNITYSDK_OFFSET(0x9202600)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0x92029C0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_HASUNFINISHEDBATTLERECORD_OFFSET UNITYSDK_OFFSET(0x9202990)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9202810)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x9202540)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9202970)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISNEWLEVEL_OFFSET UNITYSDK_OFFSET(0x9202AE0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x92016E0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x91FEA50)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_STAGEARRAY_OFFSET UNITYSDK_OFFSET(0x9202560)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_TRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9202C80)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9202A00)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GIVEUPMATCH_OFFSET UNITYSDK_OFFSET(0x91FF370)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x91FE050)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_RESETDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x9200AE0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SETBATTLESUCCESS_OFFSET UNITYSDK_OFFSET(0x91FF540)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SETLEVELREAD_OFFSET UNITYSDK_OFFSET(0x92014F0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x92029F0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_BATTLERECORD_OFFSET UNITYSDK_OFFSET(0x9202960)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_BESTROUNDRECORD_OFFSET UNITYSDK_OFFSET(0x92029B0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0x92029D0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ID_OFFSET UNITYSDK_OFFSET(0x9202550)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9202980)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISNEWLEVEL_OFFSET UNITYSDK_OFFSET(0x9202AF0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9202A90)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9202A10)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_STARTBOXINGCLUBBATTLE_OFFSET UNITYSDK_OFFSET(0x91FF190)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_STARTMATCHING_OFFSET UNITYSDK_OFFSET(0x91FEB40)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCBATTLERECORD_OFFSET UNITYSDK_OFFSET(0x91FE500)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCGIVEUP_OFFSET UNITYSDK_OFFSET(0x91FE5A0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x91FEAB0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0x91FE090)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYRECOVERAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9200C90)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSETBATTLEREWARD_OFFSET UNITYSDK_OFFSET(0x9200B30)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSETLEVELNEW_OFFSET UNITYSDK_OFFSET(0x9201870)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x91FF6D0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_UPDATELOCALAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x92009D0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x91FE040)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__DORETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x9201FC0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__EXITTOTOWNBYSERVERQUITNOTIFY_OFFSET UNITYSDK_OFFSET(0x92021F0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__GENERATEFAILINFO_OFFSET UNITYSDK_OFFSET(0x91FE8D0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__ISPREVLEVELCLEARED_OFFSET UNITYSDK_OFFSET(0x9202340)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__ONBATTLERESULTCONFIRM_OFFSET UNITYSDK_OFFSET(0x9201DF0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__REMOVEHANDBLERS_OFFSET UNITYSDK_OFFSET(0x91FF650)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__SETNEWLEVELSTATUS_OFFSET UNITYSDK_OFFSET(0x92018C0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__STOREWAITFORRANDOMSTATUS_OFFSET UNITYSDK_OFFSET(0x91FFD90)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__UPDATEINFOBYBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x9201E70)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubLevelInstance_TypeDefinitionIndex = 51098;

	class BoxingClubLevelInstance : public ::System::Object
	{
	public:
		::RPG::Client::BoxingClubBattleRecord* _BattleRecord_k__BackingField; // 0x10
		::RPG::Client::BoxingClubWinInfo* _WinInfo; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDList_k__BackingField; // 0x20
		::RPG::Client::BoxingClubFailInfo* _FailInfo; // 0x28
		::RPG::Client::WaitForDisplayPageType _Type_k__BackingField; // 0x30
		::System::Int32 _UnClickEntranceNum; // 0x34
		::System::Boolean WaitForDisplayPage; // 0x38
		::System::Boolean _HasTakenReward_k__BackingField; // 0x39
		::System::Boolean _IsFinished_k__BackingField; // 0x3A
		::System::Boolean _IsNewLevel_k__BackingField; // 0x3B
		::System::UInt32 _BestRoundRecord_k__BackingField; // 0x3C
		::System::UInt32 _ID_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__CTOR_OFFSET))(this, challengeID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E14A0A1A8B1F847C_1* packet)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNC_OFFSET))(this, packet);
		}

		::System::Void SyncBattleRecord(::Class_1_E14A0A1A8B1F847C_1* packet)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCBATTLERECORD_OFFSET))(this, packet);
		}

		::System::Void SyncGiveUp(::Class_1_58C02EFC41D1F04D_5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCGIVEUP_OFFSET))(this, rsp);
		}

		::System::Void SyncUpdate(::Class_1_12A9E44435FBA7F9_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCUPDATE_OFFSET))(this, rsp);
		}

		::System::Void StartMatching(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_STARTMATCHING_OFFSET))(this, avatarIDs);
		}

		::System::Void StartBoxingClubBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_STARTBOXINGCLUBBATTLE_OFFSET))(this);
		}

		::System::Void GiveUpMatch(::System::UInt32 challengeID, ::System::Boolean isGiveUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GIVEUPMATCH_OFFSET))(this, challengeID, isGiveUp);
		}

		::System::Void SetBattleSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SETBATTLESUCCESS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void TryShowNextRoundInfoPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET))(this);
		}

		::System::UInt32 GetRecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETRECOMMENDLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetCurStageRecommendLevel(::System::UInt32 eventID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETCURSTAGERECOMMENDLEVEL_OFFSET))(this, eventID);
		}

		::System::Void UpdateLocalAvatarIDList(::System::Collections::Generic::List_1<::System::UInt32>* ids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_UPDATELOCALAVATARIDLIST_OFFSET))(this, ids);
		}

		::System::Void ResetDisplayType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_RESETDISPLAYTYPE_OFFSET))(this);
		}

		::System::Void TrySetBattleReward(::Class_1_A40145A90ACDEF85* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A40145A90ACDEF85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSETBATTLEREWARD_OFFSET))(this, ntf);
		}

		::System::Void TryRecoverAvatarIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYRECOVERAVATARIDS_OFFSET))(this);
		}

		::System::Void ClearWaitForRandomMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_CLEARWAITFORRANDOMMARK_OFFSET))(this);
		}

		::System::Void SetLevelRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SETLEVELREAD_OFFSET))(this);
		}

		::System::Void TrySetLevelNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSETLEVELNEW_OFFSET))(this);
		}

		::System::UInt32 GetCurStage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETCURSTAGE_OFFSET))(this);
		}

		::System::Void _RemoveHandblers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__REMOVEHANDBLERS_OFFSET))(this);
		}

		::System::Void _OnBattleResultConfirm(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__ONBATTLERESULTCONFIRM_OFFSET))(this, obj);
		}

		::System::Void _UpdateInfoByBattleResult(::RPG::Client::PVEBattleResultInfo* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PVEBattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__UPDATEINFOBYBATTLERESULT_OFFSET))(this, param);
		}

		::System::Void _GenerateFailInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__GENERATEFAILINFO_OFFSET))(this);
		}

		::System::Void _DoReturnToMaze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__DORETURNTOMAZE_OFFSET))(this);
		}

		::System::Void _ExitToTownByServerQuitNotify(::RPG::Client::BattleGamePhase* phase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__EXITTOTOWNBYSERVERQUITNOTIFY_OFFSET))(this, phase);
		}

		::System::Boolean _IsPrevLevelCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__ISPREVLEVELCLEARED_OFFSET))(this);
		}

		::System::Void _SetNewLevelStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__SETNEWLEVELSTATUS_OFFSET))(this);
		}

		::System::Void _StoreWaitForRandomStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__STOREWAITFORRANDOMSTATUS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::BoxingClubChallengeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::BoxingClubChallengeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_BoxingClubChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BOXINGCLUBCHALLENGEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_StageArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_STAGEARRAY_OFFSET))(this);
		}

		::System::UInt32 get_FirstPassRewardArray()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_FIRSTPASSREWARDARRAY_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ACTIVITYMODUELID_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CHALLENGENAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_DamageType()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_DAMAGETYPE_OFFSET))(this);
		}

		::RPG::Client::BoxingClubBattleRecord* get_BattleRecord()
		{
			return ((::RPG::Client::BoxingClubBattleRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BATTLERECORD_OFFSET))(this);
		}

		::System::Void set_BattleRecord(::RPG::Client::BoxingClubBattleRecord* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BoxingClubBattleRecord*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_BATTLERECORD_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_HasUnFinishedBattleRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_HASUNFINISHEDBATTLERECORD_OFFSET))(this);
		}

		::System::UInt32 get_BestRoundRecord()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BESTROUNDRECORD_OFFSET))(this);
		}

		::System::Void set_BestRoundRecord(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_BESTROUNDRECORD_OFFSET))(this, value);
		}

		::System::Boolean get_HasTakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_HASTAKENREWARD_OFFSET))(this);
		}

		::System::Void set_HasTakenReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_HASTAKENREWARD_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_AVATARIDLIST_OFFSET))(this);
		}

		::System::Void set_AvatarIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_AVATARIDLIST_OFFSET))(this, value);
		}

		::RPG::Client::WaitForDisplayPageType get_Type()
		{
			return ((::RPG::Client::WaitForDisplayPageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::WaitForDisplayPageType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WaitForDisplayPageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_TYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::BoxingClubActivityType get_ActivityType()
		{
			return ((::RPG::GameCore::BoxingClubActivityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ACTIVITYTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeMaxRoundNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CHALLENGEMAXROUNDNUM_OFFSET))(this);
		}

		::System::Boolean get_IsNewLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISNEWLEVEL_OFFSET))(this);
		}

		::System::Void set_IsNewLevel(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISNEWLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_CanUseTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CANUSETRIAL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TrialAvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_TRIALAVATARIDS_OFFSET))(this);
		}
	};
}
