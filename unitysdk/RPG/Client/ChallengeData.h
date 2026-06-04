#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData_ChallengeOpenResult.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_2BE37F50413FF023;
class Class_1_FE65FB558D9B9E65;
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

#define RPG_CLIENT_CHALLENGEDATA_AUTOSETTLE_OFFSET UNITYSDK_OFFSET(0xB4F6490)
#define RPG_CLIENT_CHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4F5EE0)
#define RPG_CLIENT_CHALLENGEDATA_GETALLMONSTERIDS_OFFSET UNITYSDK_OFFSET(0xB4F8750)
#define RPG_CLIENT_CHALLENGEDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0xB4F1F10)
#define RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0xB4F7970)
#define RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTROW_OFFSET UNITYSDK_OFFSET(0xB4F79E0)
#define RPG_CLIENT_CHALLENGEDATA_GETCHALLENGETARGETDATALIST_OFFSET UNITYSDK_OFFSET(0xB4F6510)
#define RPG_CLIENT_CHALLENGEDATA_GETDESCRIPTIONPARAMS_OFFSET UNITYSDK_OFFSET(0xB4F1E50)
#define RPG_CLIENT_CHALLENGEDATA_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xB4F1C90)
#define RPG_CLIENT_CHALLENGEDATA_GETEVENTCOUNTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xB4F86C0)
#define RPG_CLIENT_CHALLENGEDATA_GETISOPEN_OFFSET UNITYSDK_OFFSET(0xB4F6DE0)
#define RPG_CLIENT_CHALLENGEDATA_GETMONSTERDATABYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xB4F7A50)
#define RPG_CLIENT_CHALLENGEDATA_GETMONSTERWEAKLISTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xB4F4410)
#define RPG_CLIENT_CHALLENGEDATA_GETOPENRESULT_OFFSET UNITYSDK_OFFSET(0xB4F7140)
#define RPG_CLIENT_CHALLENGEDATA_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xB4F8970)
#define RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xB4F5DA0)
#define RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0xB4F5BB0)
#define RPG_CLIENT_CHALLENGEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB4F5C90)
#define RPG_CLIENT_CHALLENGEDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB4CF550)
#define RPG_CLIENT_CHALLENGEDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0xB4F5A20)
#define RPG_CLIENT_CHALLENGEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB4F59E0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB4F5CD0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0xB4F5A40)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISPERFECTFINISH_OFFSET UNITYSDK_OFFSET(0xB4F5DC0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISRELATEDTIERCEOPEN_OFFSET UNITYSDK_OFFSET(0xB4F4920)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB4F5C30)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISTIERCEFINISHED_OFFSET UNITYSDK_OFFSET(0xB4F1B70)
#define RPG_CLIENT_CHALLENGEDATA_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0xB4F5D80)
#define RPG_CLIENT_CHALLENGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB4CB850)
#define RPG_CLIENT_CHALLENGEDATA_GET_PRECHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB4F5D60)
#define RPG_CLIENT_CHALLENGEDATA_GET_PRELEVEL_OFFSET UNITYSDK_OFFSET(0xB4F5D40)
#define RPG_CLIENT_CHALLENGEDATA_GET_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0xB4F5CF0)
#define RPG_CLIENT_CHALLENGEDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB4EFEB0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB4F5A00)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCOREFIRST_OFFSET UNITYSDK_OFFSET(0xB4F5BD0)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCORESECOND_OFFSET UNITYSDK_OFFSET(0xB4F5BF0)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xB4F1730)
#define RPG_CLIENT_CHALLENGEDATA_GET_STAGENUM_OFFSET UNITYSDK_OFFSET(0xB4F4A00)
#define RPG_CLIENT_CHALLENGEDATA_GET_STARS_OFFSET UNITYSDK_OFFSET(0xB4F5B90)
#define RPG_CLIENT_CHALLENGEDATA_GET_TARGETBITSET_OFFSET UNITYSDK_OFFSET(0xB4F5C10)
#define RPG_CLIENT_CHALLENGEDATA_HASREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0xB4F6730)
#define RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTFINISH_OFFSET UNITYSDK_OFFSET(0xB4F6A00)
#define RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0xB4F67C0)
#define RPG_CLIENT_CHALLENGEDATA_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB4F2300)
#define RPG_CLIENT_CHALLENGEDATA_ISPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xB4F6C60)
#define RPG_CLIENT_CHALLENGEDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB4F2250)
#define RPG_CLIENT_CHALLENGEDATA_SET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0xB4F5BC0)
#define RPG_CLIENT_CHALLENGEDATA_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0xB4F5A30)
#define RPG_CLIENT_CHALLENGEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB4F59F0)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB4F5CE0)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0xB4F5AD0)
#define RPG_CLIENT_CHALLENGEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB4F5A10)
#define RPG_CLIENT_CHALLENGEDATA_SET_SCOREFIRST_OFFSET UNITYSDK_OFFSET(0xB4F5BE0)
#define RPG_CLIENT_CHALLENGEDATA_SET_SCORESECOND_OFFSET UNITYSDK_OFFSET(0xB4F5C00)
#define RPG_CLIENT_CHALLENGEDATA_SET_STARS_OFFSET UNITYSDK_OFFSET(0xB4F5BA0)
#define RPG_CLIENT_CHALLENGEDATA_SET_TARGETBITSET_OFFSET UNITYSDK_OFFSET(0xB4F5C20)
#define RPG_CLIENT_CHALLENGEDATA_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0xB4F21B0)
#define RPG_CLIENT_CHALLENGEDATA_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xB4F5E20)
#define RPG_CLIENT_CHALLENGEDATA_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0xB4F5F80)
#define RPG_CLIENT_CHALLENGEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4F89D0)
#define RPG_CLIENT_CHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F0780)
#define RPG_CLIENT_CHALLENGEDATA__GETEVENTIDLISTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xB4F0F50)
#define RPG_CLIENT_CHALLENGEDATA__GETEXTRAMONSTERIDBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xB4F8610)
#define RPG_CLIENT_CHALLENGEDATA__GETMONSTERIDBYEVENTID_OFFSET UNITYSDK_OFFSET(0xB4F82D0)
#define RPG_CLIENT_CHALLENGEDATA__GETMONSTERLEVELBYEVENTID_OFFSET UNITYSDK_OFFSET(0xB4F1000)
#define RPG_CLIENT_CHALLENGEDATA__ISAUTOSETTLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xB4F6F70)
#define RPG_CLIENT_CHALLENGEDATA__ISFINISHPRECHALLENGE_OFFSET UNITYSDK_OFFSET(0xB4F7060)
#define RPG_CLIENT_CHALLENGEDATA__ISFINISHPREMISSION_OFFSET UNITYSDK_OFFSET(0xB4F6CB0)
#define RPG_CLIENT_CHALLENGEDATA__ISREACHPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0xB4F6E60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeData_TypeDefinitionIndex = 59032;

	class ChallengeData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__AutoSettleFinishBitSet()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChallengeData_TypeDefinitionIndex)->GetStaticField(0x11E30);
		}
		::RPG::Client::ChallengeRecommendData* _ChallengeRecommendData; // 0x10
		::RPG::GameCore::ChallengeMazeConfigRow* _Row_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>* _ChallengeTargets; // 0x20
		::RPG::Client::CheckItemFinishMainMission* _FinishMainMissionCheckItem; // 0x28
		::RPG::Client::ChallengeGroupData* ChallengeGroupDataRef; // 0x30
		::RPG::Client::CheckItemReachPlayerLevel* _PlayerLevelCheckItem; // 0x38
		::System::UInt32 _ChallengeTimes_k__BackingField; // 0x40
		::System::UInt32 _TargetBitSet_k__BackingField; // 0x44
		::System::UInt32 _ScoreFirst_k__BackingField; // 0x48
		::System::UInt32 _Stars_k__BackingField; // 0x4C
		::System::Int32 IndexInGroup; // 0x50
		::System::UInt32 _ID_k__BackingField; // 0x54
		::System::Boolean _IsFinish_k__BackingField; // 0x58
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x5C
		::System::UInt32 _ScoreSecond_k__BackingField; // 0x60

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeMazeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ChallengeMazeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ChallengeMazeConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Void set_GroupType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_GROUPTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_STAGENUM_OFFSET))(this);
		}

		::System::Boolean get_IsFirstOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISFIRSTOPEN_OFFSET))(this);
		}

		::System::Void set_IsFirstOpen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISFIRSTOPEN_OFFSET))(this, a1);
		}

		::System::UInt32 get_Stars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_STARS_OFFSET))(this);
		}

		::System::Void set_Stars(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_STARS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGETIMES_OFFSET))(this);
		}

		::System::Void set_ChallengeTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_CHALLENGETIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_ScoreFirst()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCOREFIRST_OFFSET))(this);
		}

		::System::Void set_ScoreFirst(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_SCOREFIRST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ScoreSecond()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCORESECOND_OFFSET))(this);
		}

		::System::Void set_ScoreSecond(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_SCORESECOND_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetBitSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_TARGETBITSET_OFFSET))(this);
		}

		::System::Void set_TargetBitSet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_TARGETBITSET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISREWARDTAKEN_OFFSET))(this);
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

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTierceFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISTIERCEFINISHED_OFFSET))(this);
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

		::System::Boolean get_IsPerfectFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISPERFECTFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsRelatedTierceOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISRELATEDTIERCEOPEN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_UPDATETARGETSTATUS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateTarget(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_UPDATETARGET_OFFSET))(this, a1, a2);
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

		::System::UInt32 GetBattleEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTID_OFFSET))(this);
		}

		::RPG::GameCore::BattleEventRow* GetBattleEventRow()
		{
			return ((::RPG::GameCore::BattleEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTROW_OFFSET))(this);
		}

		::RPG::Client::TextID GetDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETDESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetDescriptionParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETDESCRIPTIONPARAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataByStageIndex(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETMONSTERDATABYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetEventCountByStageIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETEVENTCOUNTBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* GetMonsterWeakListByStageIndex(::System::Int32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETMONSTERWEAKLISTBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllMonsterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETALLMONSTERIDS_OFFSET))(this);
		}

		::System::Void SyncArchiveExtInfo(::Class_1_FE65FB558D9B9E65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE65FB558D9B9E65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SYNCARCHIVEEXTINFO_OFFSET))(this, a1);
		}

		::System::Void SaveExtInfoWhenEnterChallenge(::Class_1_2BE37F50413FF023* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BE37F50413FF023*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, a1);
		}

		::System::Boolean IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}

		::RPG::Client::ChallengeRecommendData* GetRecommendData()
		{
			return ((::RPG::Client::ChallengeRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETRECOMMENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetExtraMonsterIDByStageIndex(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETEXTRAMONSTERIDBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetEventIDListByStageIndex(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETEVENTIDLISTBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMonsterLevelByEventID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETMONSTERLEVELBYEVENTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetMonsterIDByEventID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETMONSTERIDBYEVENTID_OFFSET))(this, a1);
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
	};
}
