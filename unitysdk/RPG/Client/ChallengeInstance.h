#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_17.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_2;
class Class_1_D17272E82AE804C2_148;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeInstance_ChallengeProgress; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEINSTANCE_CACHECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB548850)
#define RPG_CLIENT_CHALLENGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB547A90)
#define RPG_CLIENT_CHALLENGEINSTANCE_GETCHALLENGEAVATARDATAS_OFFSET UNITYSDK_OFFSET(0xB5484A0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0xB547750)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xB547990)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTSTAGENUM_OFFSET UNITYSDK_OFFSET(0xB547810)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB547940)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0xB547920)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_HASSETTLEREWARD_OFFSET UNITYSDK_OFFSET(0xB547710)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0xB5477A0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB547540)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0xB5476F0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB547730)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_LASTPROGRESSBEFORE_OFFSET UNITYSDK_OFFSET(0xB5479A0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0xB547770)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xB5477C0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB547900)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0xB547970)
#define RPG_CLIENT_CHALLENGEINSTANCE_REFRESHCHALLENGETARGET_OFFSET UNITYSDK_OFFSET(0xB548BF0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SAVEPROGRESSBEFOREENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xB548170)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETERROREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xB549A10)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETTLE_OFFSET UNITYSDK_OFFSET(0xB5482E0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0xB547AF0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0xB547760)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_HASSETTLEREWARD_OFFSET UNITYSDK_OFFSET(0xB547720)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0xB547700)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB547740)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB547910)
#define RPG_CLIENT_CHALLENGEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0xB547B30)
#define RPG_CLIENT_CHALLENGEINSTANCE_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xB549A60)
#define RPG_CLIENT_CHALLENGEINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0xB549B50)
#define RPG_CLIENT_CHALLENGEINSTANCE__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xB549AC0)
#define RPG_CLIENT_CHALLENGEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5479B0)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGEKILLEDMONSTER_OFFSET UNITYSDK_OFFSET(0xB549600)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGETURNCOST_OFFSET UNITYSDK_OFFSET(0xB5492C0)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETTOTALSCORE_OFFSET UNITYSDK_OFFSET(0xB5499B0)
#define RPG_CLIENT_CHALLENGEINSTANCE__HASANYAVATARDEAD_OFFSET UNITYSDK_OFFSET(0xB549420)
#define RPG_CLIENT_CHALLENGEINSTANCE__ISALLMONSTERCLEARED_OFFSET UNITYSDK_OFFSET(0xB5475A0)
#define RPG_CLIENT_CHALLENGEINSTANCE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xB549D70)
#define RPG_CLIENT_CHALLENGEINSTANCE__ONTEAMDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xB54A2B0)
#define RPG_CLIENT_CHALLENGEINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0xB549C60)
#define RPG_CLIENT_CHALLENGEINSTANCE__SHOWCHALLENGEMAZEHINT_OFFSET UNITYSDK_OFFSET(0xB54A480)
#define RPG_CLIENT_CHALLENGEINSTANCE__SHOWENVIRONMENTHINT_OFFSET UNITYSDK_OFFSET(0xB54A3D0)
#define RPG_CLIENT_CHALLENGEINSTANCE__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xB549B00)
#define RPG_CLIENT_CHALLENGEINSTANCE__SYNCPROGRESS_OFFSET UNITYSDK_OFFSET(0xB548060)
#define RPG_CLIENT_CHALLENGEINSTANCE__TRYRESETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xB54A500)
#define RPG_CLIENT_CHALLENGEINSTANCE___ONHIDELOADINGPAGE_B__71_0_OFFSET UNITYSDK_OFFSET(0xB54A720)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance_TypeDefinitionIndex = 59036;

	class ChallengeInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeTargetState>* CachedTargetStatesBeforeChallenge; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _MonsterIDs; // 0x18
		::System::Action* _ErrorExitCallback; // 0x20
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_148*>* KillMonsters; // 0x28
		::RPG::Client::ChallengeInstance_ChallengeProgress* _CurrentProgress; // 0x30
		::RPG::Client::ChallengeInstance_ChallengeProgress* _LastProgressBeforeEnterBattle; // 0x38
		::RPG::Client::ChallengeData* _ChallengeDataRef_k__BackingField; // 0x40
		::Enum_3_DB663931210BBC27_17 _Status_k__BackingField; // 0x48
		::System::UInt32 ScoreSecond; // 0x4C
		::System::Boolean IsNewRecord; // 0x50
		::System::Boolean _NeedShowSecondEnvironmentDialog; // 0x51
		::System::Boolean _IsSecondTeamStart; // 0x52
		::System::Boolean _HasSettleReward_k__BackingField; // 0x53
		::System::Boolean _IsUsingFirstTeam; // 0x54
		::System::Boolean _IsWin_k__BackingField; // 0x55
		::System::UInt32 DeadAvatarNum; // 0x58
		::System::UInt32 ScoreFirst; // 0x5C
		::System::Boolean _IsFirstEnterChallenge; // 0x60
		::System::Boolean CachedChallengeIsFinish; // 0x61
		::System::Boolean _IsSettled_k__BackingField; // 0x62

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Void set_IsSettled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_ISSETTLED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSettleReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_HASSETTLEREWARD_OFFSET))(this);
		}

		::System::Void set_HasSettleReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_HASSETTLEREWARD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_ISWIN_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeData* get_ChallengeDataRef()
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CHALLENGEDATAREF_OFFSET))(this);
		}

		::System::Void set_ChallengeDataRef(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_CHALLENGEDATAREF_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_MAPENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTSTAGENUM_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_17 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_17(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_17 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_17))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_TurnCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_TURNCOST_OFFSET))(this);
		}

		::RPG::Client::ChallengeInstance_ChallengeProgress* get_CurrentProgress()
		{
			return ((::RPG::Client::ChallengeInstance_ChallengeProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::RPG::Client::ChallengeInstance_ChallengeProgress* get_LastProgressBefore()
		{
			return ((::RPG::Client::ChallengeInstance_ChallengeProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_LASTPROGRESSBEFORE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_3AD2528CD53B1639_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SYNC_OFFSET))(this, a1);
		}

		::System::Void Settle(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETTLE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* GetChallengeAvatarDatas()
		{
			return ((::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GETCHALLENGEAVATARDATAS_OFFSET))(this);
		}

		::System::Void CacheChallengeTargetState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CACHECHALLENGETARGETSTATE_OFFSET))(this, a1);
		}

		::System::Void SaveProgressBeforeEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SAVEPROGRESSBEFOREENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshChallengeTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_REFRESHCHALLENGETARGET_OFFSET))(this);
		}

		::System::Void SetErrorExitCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETERROREXITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_UPDATETARGETSTATUS_OFFSET))(this, a1);
		}

		::System::Void _CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void _SyncExtraInfo(::Class_1_3AD2528CD53B1639_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SYNCEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Void _AddChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnTeamDataRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ONTEAMDATAREFRESH_OFFSET))(this, a1);
		}

		::System::UInt32 _GetTotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETTOTALSCORE_OFFSET))(this);
		}

		::System::UInt32 _GetCurStageTurnCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGETURNCOST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_148*>* _GetCurStageKilledMonster()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_148*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGEKILLEDMONSTER_OFFSET))(this);
		}

		::System::Boolean _IsAllMonsterCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ISALLMONSTERCLEARED_OFFSET))(this);
		}

		::System::Boolean _HasAnyAvatarDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__HASANYAVATARDEAD_OFFSET))(this);
		}

		::System::Void _ShowEnvironmentHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SHOWENVIRONMENTHINT_OFFSET))(this);
		}

		::System::Void _ShowChallengeMazeHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SHOWCHALLENGEMAZEHINT_OFFSET))(this);
		}

		::System::Void _TryReSettleChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__TRYRESETTLECHALLENGE_OFFSET))(this);
		}

		::System::Void _SyncProgress(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_148*>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_148*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SYNCPROGRESS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __OnHideLoadingPage_b__71_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___ONHIDELOADINGPAGE_B__71_0_OFFSET))(this);
		}
	};
}
