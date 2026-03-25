#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData_ChallengeOpenResult.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_D11346F5905C32B7;
class Class_1_E3BF1E96389B67AF;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChallengeRecommendData; }
namespace RPG::Client { class CheckItemFinishMainMission; }
namespace RPG::Client { class CheckItemReachPlayerLevel; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEDATA_AUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x92BF040)
#define RPG_CLIENT_CHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92BEB60)
#define RPG_CLIENT_CHALLENGEDATA_GETALLMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x92C1930)
#define RPG_CLIENT_CHALLENGEDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x92BB920)
#define RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0x92C0B10)
#define RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTROW_OFFSET UNITYSDK_OFFSET(0x92C0B90)
#define RPG_CLIENT_CHALLENGEDATA_GETCHALLENGETARGETDATALIST_OFFSET UNITYSDK_OFFSET(0x92BF310)
#define RPG_CLIENT_CHALLENGEDATA_GETEVENTCOUNTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x92C1810)
#define RPG_CLIENT_CHALLENGEDATA_GETISOPEN_OFFSET UNITYSDK_OFFSET(0x92BFA60)
#define RPG_CLIENT_CHALLENGEDATA_GETMONSTERDATABYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x92C0C00)
#define RPG_CLIENT_CHALLENGEDATA_GETMONSTERWEAKLISTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x92C18A0)
#define RPG_CLIENT_CHALLENGEDATA_GETOPENRESULT_OFFSET UNITYSDK_OFFSET(0x92C0040)
#define RPG_CLIENT_CHALLENGEDATA_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x92C1CE0)
#define RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x92BF020)
#define RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0x92C1F40)
#define RPG_CLIENT_CHALLENGEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x92C2000)
#define RPG_CLIENT_CHALLENGEDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x92C20C0)
#define RPG_CLIENT_CHALLENGEDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x92C1D60)
#define RPG_CLIENT_CHALLENGEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x92C1D20)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x92C2040)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0x92C1D80)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISPERFECTFINISH_OFFSET UNITYSDK_OFFSET(0x92C2060)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x92C1FE0)
#define RPG_CLIENT_CHALLENGEDATA_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x92C2100)
#define RPG_CLIENT_CHALLENGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x92C09C0)
#define RPG_CLIENT_CHALLENGEDATA_GET_PRECHALLENGEID_OFFSET UNITYSDK_OFFSET(0x92C09A0)
#define RPG_CLIENT_CHALLENGEDATA_GET_PRELEVEL_OFFSET UNITYSDK_OFFSET(0x92C0980)
#define RPG_CLIENT_CHALLENGEDATA_GET_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x92C0940)
#define RPG_CLIENT_CHALLENGEDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x92B9FC0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x92C1D40)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCOREFIRST_OFFSET UNITYSDK_OFFSET(0x92C1F60)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCORESECOND_OFFSET UNITYSDK_OFFSET(0x92C1F80)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x92BB510)
#define RPG_CLIENT_CHALLENGEDATA_GET_STAGENUM_OFFSET UNITYSDK_OFFSET(0x92C1CC0)
#define RPG_CLIENT_CHALLENGEDATA_GET_STARS_OFFSET UNITYSDK_OFFSET(0x92C1F20)
#define RPG_CLIENT_CHALLENGEDATA_GET_TAKENREWARD_OFFSET UNITYSDK_OFFSET(0x92C1FC0)
#define RPG_CLIENT_CHALLENGEDATA_GET_TARGETBITSET_OFFSET UNITYSDK_OFFSET(0x92C1FA0)
#define RPG_CLIENT_CHALLENGEDATA_HASREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x92BF3F0)
#define RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTFINISH_OFFSET UNITYSDK_OFFSET(0x92BF690)
#define RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x92BF450)
#define RPG_CLIENT_CHALLENGEDATA_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x92BBCC0)
#define RPG_CLIENT_CHALLENGEDATA_ISPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x92BF8F0)
#define RPG_CLIENT_CHALLENGEDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92BBC30)
#define RPG_CLIENT_CHALLENGEDATA_SET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0x92C1F50)
#define RPG_CLIENT_CHALLENGEDATA_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x92C1D70)
#define RPG_CLIENT_CHALLENGEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x92C1D30)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x92C2050)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0x92BF0C0)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x92C1FF0)
#define RPG_CLIENT_CHALLENGEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x92C1D50)
#define RPG_CLIENT_CHALLENGEDATA_SET_SCOREFIRST_OFFSET UNITYSDK_OFFSET(0x92C1F70)
#define RPG_CLIENT_CHALLENGEDATA_SET_SCORESECOND_OFFSET UNITYSDK_OFFSET(0x92C1F90)
#define RPG_CLIENT_CHALLENGEDATA_SET_STARS_OFFSET UNITYSDK_OFFSET(0x92C1F30)
#define RPG_CLIENT_CHALLENGEDATA_SET_TAKENREWARD_OFFSET UNITYSDK_OFFSET(0x92C1FD0)
#define RPG_CLIENT_CHALLENGEDATA_SET_TARGETBITSET_OFFSET UNITYSDK_OFFSET(0x92C1FB0)
#define RPG_CLIENT_CHALLENGEDATA_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0x92BBB90)
#define RPG_CLIENT_CHALLENGEDATA_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x92BEAA0)
#define RPG_CLIENT_CHALLENGEDATA_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x92BEC10)
#define RPG_CLIENT_CHALLENGEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x92C2120)
#define RPG_CLIENT_CHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92BA500)
#define RPG_CLIENT_CHALLENGEDATA__GETEVENTIDLISTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x92BAE00)
#define RPG_CLIENT_CHALLENGEDATA__GETEXTRAMONSTERIDBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x92C1760)
#define RPG_CLIENT_CHALLENGEDATA__GETMONSTERIDBYEVENTID_OFFSET UNITYSDK_OFFSET(0x92C1310)
#define RPG_CLIENT_CHALLENGEDATA__GETMONSTERLEVELBYEVENTID_OFFSET UNITYSDK_OFFSET(0x92BAEB0)
#define RPG_CLIENT_CHALLENGEDATA__ISAUTOSETTLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x92BFBF0)
#define RPG_CLIENT_CHALLENGEDATA__ISFINISHPRECHALLENGE_OFFSET UNITYSDK_OFFSET(0x92BFE80)
#define RPG_CLIENT_CHALLENGEDATA__ISFINISHPREMISSION_OFFSET UNITYSDK_OFFSET(0x92BF940)
#define RPG_CLIENT_CHALLENGEDATA__ISREACHPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x92BFAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeData_TypeDefinitionIndex = 51189;

	class ChallengeData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__AutoSettleFinishBitSet()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChallengeData_TypeDefinitionIndex)->GetStaticField(0x11B10);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>* _ChallengeTargets; // 0x10
		::RPG::Client::CheckItemFinishMainMission* _FinishMainMissionCheckItem; // 0x18
		::RPG::Client::ChallengeRecommendData* _ChallengeRecommendData; // 0x20
		::RPG::Client::CheckItemReachPlayerLevel* _PlayerLevelCheckItem; // 0x28
		::RPG::Client::ChallengeGroupData* ChallengeGroupDataRef; // 0x30
		::RPG::GameCore::ChallengeMazeConfigRow* _Row_k__BackingField; // 0x38
		::System::Int32 IndexInGroup; // 0x40
		::System::UInt32 _TakenReward_k__BackingField; // 0x44
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x48
		::System::UInt32 _ChallengeTimes_k__BackingField; // 0x4C
		::System::UInt32 _TargetBitSet_k__BackingField; // 0x50
		::System::UInt32 _ScoreFirst_k__BackingField; // 0x54
		::System::Boolean _IsFinish_k__BackingField; // 0x58
		::System::Boolean _IsRewardTaken_k__BackingField; // 0x59
		::System::Boolean _IsFirstOpen; // 0x5A
		::System::UInt32 _ScoreSecond_k__BackingField; // 0x5C
		::System::UInt32 _ID_k__BackingField; // 0x60
		::System::UInt32 _Stars_k__BackingField; // 0x64

		::System::Void _ctor(::System::UInt32 id, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__CTOR_OFFSET))(this, id, groupType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 targetBitSet, ::System::UInt32 scoreFirst, ::System::UInt32 scoreSecond, ::System::UInt32 rewardTakenBitSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_UPDATETARGETSTATUS_OFFSET))(this, targetBitSet, scoreFirst, scoreSecond, rewardTakenBitSet);
		}

		::System::Void UpdateTarget(::System::UInt32 targetBitSet, ::System::UInt32 rewardTakenBitSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_UPDATETARGET_OFFSET))(this, targetBitSet, rewardTakenBitSet);
		}

		::System::Void AutoSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_AUTOSETTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>* GetChallengeTargetDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETCHALLENGETARGETDATALIST_OFFSET))(this);
		}

		::System::Boolean HasRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_HASREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean HasTargetRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean HasTargetRewardNotFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTFINISH_OFFSET))(this);
		}

		::System::Boolean IsPreMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_ISPREMISSIONFINISH_OFFSET))(this);
		}

		::System::Boolean GetIsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETISOPEN_OFFSET))(this);
		}

		::RPG::Client::ChallengeData_ChallengeOpenResult GetOpenResult()
		{
			return ((::RPG::Client::ChallengeData_ChallengeOpenResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETOPENRESULT_OFFSET))(this);
		}

		::System::Boolean _IsReachPlayerLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISREACHPLAYERLEVEL_OFFSET))(this);
		}

		::System::Boolean _IsAutoSettleUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISAUTOSETTLEUNLOCK_OFFSET))(this);
		}

		::System::Boolean _IsFinishPreChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISFINISHPRECHALLENGE_OFFSET))(this);
		}

		::System::Boolean _IsFinishPreMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISFINISHPREMISSION_OFFSET))(this);
		}

		::System::UInt32 GetBattleEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTID_OFFSET))(this);
		}

		::RPG::GameCore::BattleEventRow* GetBattleEventRow()
		{
			return ((::RPG::GameCore::BattleEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataByStageIndex(::System::Int32 stageIndex)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETMONSTERDATABYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::Int32 GetEventCountByStageIndex(::System::Int32 stageIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETEVENTCOUNTBYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 stageIndex, ::System::Int32 eventIndex)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, stageIndex, eventIndex);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* GetMonsterWeakListByStageIndex(::System::Int32 stageIndex)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETMONSTERWEAKLISTBYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllMonsterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETALLMONSTERIDS_OFFSET))(this);
		}

		::System::Void SyncArchiveExtInfo(::Class_1_E3BF1E96389B67AF* extInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E3BF1E96389B67AF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SYNCARCHIVEEXTINFO_OFFSET))(this, extInfo);
		}

		::System::Void SaveExtInfoWhenEnterChallenge(::Class_1_D11346F5905C32B7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D11346F5905C32B7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, rsp);
		}

		::System::Boolean IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}

		::RPG::Client::ChallengeRecommendData* GetRecommendData()
		{
			return ((::RPG::Client::ChallengeRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETRECOMMENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetExtraMonsterIDByStageIndex(::System::Int32 stageIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETEXTRAMONSTERIDBYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetEventIDListByStageIndex(::System::Int32 stageIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETEVENTIDLISTBYSTAGEINDEX_OFFSET))(this, stageIndex);
		}

		::System::UInt32 _GetMonsterLevelByEventID(::System::UInt32 eventID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETMONSTERLEVELBYEVENTID_OFFSET))(this, eventID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetMonsterIDByEventID(::System::UInt32 eventID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETMONSTERIDBYEVENTID_OFFSET))(this, eventID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::ChallengeMazeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ChallengeMazeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ChallengeMazeConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Void set_GroupType(::RPG::GameCore::ChallengeGroupType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_GROUPTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_StageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_STAGENUM_OFFSET))(this);
		}

		::System::Boolean get_IsFirstOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISFIRSTOPEN_OFFSET))(this);
		}

		::System::Void set_IsFirstOpen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISFIRSTOPEN_OFFSET))(this, value);
		}

		::System::UInt32 get_Stars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_STARS_OFFSET))(this);
		}

		::System::Void set_Stars(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_STARS_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGETIMES_OFFSET))(this);
		}

		::System::Void set_ChallengeTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_CHALLENGETIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_ScoreFirst()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCOREFIRST_OFFSET))(this);
		}

		::System::Void set_ScoreFirst(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_SCOREFIRST_OFFSET))(this, value);
		}

		::System::UInt32 get_ScoreSecond()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCORESECOND_OFFSET))(this);
		}

		::System::Void set_ScoreSecond(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_SCORESECOND_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetBitSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_TARGETBITSET_OFFSET))(this);
		}

		::System::Void set_TargetBitSet(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_TARGETBITSET_OFFSET))(this, value);
		}

		::System::UInt32 get_TakenReward()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_TAKENREWARD_OFFSET))(this);
		}

		::System::Void set_TakenReward(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_TAKENREWARD_OFFSET))(this, value);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISREWARDTAKEN_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_IsPerfectFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISPERFECTFINISH_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_PreMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_PREMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_PreLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_PRELEVEL_OFFSET))(this);
		}

		::System::UInt32 get_PreChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_PRECHALLENGEID_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_MapEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_MAPENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeCountDown()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGECOUNTDOWN_OFFSET))(this);
		}
	};
}
