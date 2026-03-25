#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_16.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_3;
class Class_1_FA4F4A67B1C04320_140;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeInstance_ChallengeProgress; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEINSTANCE_CACHECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x92C8710)
#define RPG_CLIENT_CHALLENGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92CA260)
#define RPG_CLIENT_CHALLENGEINSTANCE_GETCHALLENGEAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x92C9ED0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0x92CA4B0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x92C9850)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTSTAGENUM_OFFSET UNITYSDK_OFFSET(0x92CA520)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x92CA650)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x92CA630)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x92CA500)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x92CA410)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x92CA470)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x92CA490)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_LASTPROGRESSBEFORE_OFFSET UNITYSDK_OFFSET(0x92C9860)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x92CA4D0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x92BC8B0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x92CA610)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0x92C9830)
#define RPG_CLIENT_CHALLENGEINSTANCE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x92C7EB0)
#define RPG_CLIENT_CHALLENGEINSTANCE_REFRESHCHALLENGETARGET_OFFSET UNITYSDK_OFFSET(0x92C8BC0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SAVEPROGRESSBEFOREENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x92C8970)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETBUFF_OFFSET UNITYSDK_OFFSET(0x92C9E80)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETERROREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x92C9740)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETTLE_OFFSET UNITYSDK_OFFSET(0x92C9CF0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x92BD300)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0x92CA4C0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x92CA480)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x92CA4A0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x92CA620)
#define RPG_CLIENT_CHALLENGEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0x92C9870)
#define RPG_CLIENT_CHALLENGEINSTANCE_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x92BCEA0)
#define RPG_CLIENT_CHALLENGEINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x92BC5A0)
#define RPG_CLIENT_CHALLENGEINSTANCE__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x92BD280)
#define RPG_CLIENT_CHALLENGEINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x92CA680)
#define RPG_CLIENT_CHALLENGEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x92BC030)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGEKILLEDMONSTER_OFFSET UNITYSDK_OFFSET(0x92C92F0)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGETURNCOST_OFFSET UNITYSDK_OFFSET(0x92C9190)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETTOTALSCORE_OFFSET UNITYSDK_OFFSET(0x92C95D0)
#define RPG_CLIENT_CHALLENGEINSTANCE__ISALLMONSTERCLEARED_OFFSET UNITYSDK_OFFSET(0x92CA2C0)
#define RPG_CLIENT_CHALLENGEINSTANCE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x92C7EF0)
#define RPG_CLIENT_CHALLENGEINSTANCE__ONTEAMDATAREFRESH_OFFSET UNITYSDK_OFFSET(0x92C8370)
#define RPG_CLIENT_CHALLENGEINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x92BC710)
#define RPG_CLIENT_CHALLENGEINSTANCE__SHOWCHALLENGEMAZEHINT_OFFSET UNITYSDK_OFFSET(0x92C8530)
#define RPG_CLIENT_CHALLENGEINSTANCE__SHOWENVIRONMENTHINT_OFFSET UNITYSDK_OFFSET(0x92C8480)
#define RPG_CLIENT_CHALLENGEINSTANCE__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x92BD1D0)
#define RPG_CLIENT_CHALLENGEINSTANCE__SYNCPROGRESS_OFFSET UNITYSDK_OFFSET(0x92C9630)
#define RPG_CLIENT_CHALLENGEINSTANCE__TRYRESETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x92C85B0)
#define RPG_CLIENT_CHALLENGEINSTANCE___ONHIDELOADINGPAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0x92CA770)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance_TypeDefinitionIndex = 51193;

	class ChallengeInstance : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__TextID_Switched_To_Second_Team()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0x11CC0);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Second_Team_Challenge_Start()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0x11CD0);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_One_Team_Challenge_Start()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0x11CE0);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_First_Team_Challenge_Start()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0x11CF0);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Buff_Hint()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeInstance_TypeDefinitionIndex)->GetStaticField(0x11D00);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _MonsterIDs; // 0x10
		::RPG::Client::ChallengeData* _ChallengeDataRef_k__BackingField; // 0x18
		::RPG::Client::ChallengeInstance_ChallengeProgress* _CurrentProgress; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeTargetState>* CachedTargetStatesBeforeChallenge; // 0x28
		::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_140*>* KillMonsters; // 0x30
		::System::Action* _ErrorExitCallback; // 0x38
		::RPG::Client::ChallengeInstance_ChallengeProgress* _LastProgressBeforeEnterBattle; // 0x40
		::Enum_3_DB663931210BBC27_16 _Status_k__BackingField; // 0x48
		::System::UInt32 ScoreSecond; // 0x4C
		::System::Boolean _IsSettled_k__BackingField; // 0x50
		::System::Boolean IsNewRecord; // 0x51
		::System::Boolean _IsFirstEnterChallenge; // 0x52
		::System::Boolean _IsUsingFirstTeam; // 0x53
		::System::UInt32 ScoreFirst; // 0x54
		::System::Boolean CachedChallengeIsFinish; // 0x58
		::System::Boolean _IsSecondTeamStart; // 0x59
		::System::Boolean _IsWin_k__BackingField; // 0x5A
		::System::Boolean _NeedShowSecondEnvironmentDialog; // 0x5B
		::System::UInt32 DeadAvatarNum; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__CCTOR_OFFSET))();
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _OnTeamDataRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ONTEAMDATAREFRESH_OFFSET))(this, arg);
		}

		::System::Void SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETUPLOADINGSTRATEGY_OFFSET))(this);
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

		::System::Void CacheChallengeTargetState(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CACHECHALLENGETARGETSTATE_OFFSET))(this, challengeID);
		}

		::System::Void SaveProgressBeforeEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SAVEPROGRESSBEFOREENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshChallengeTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_REFRESHCHALLENGETARGET_OFFSET))(this);
		}

		::System::Void SetErrorExitCallback(::System::Action* errorExitCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETERROREXITCALLBACK_OFFSET))(this, errorExitCallback);
		}

		::System::Void _SyncProgress(::System::UInt32 turnCost, ::System::UInt32 avatarDeadNum, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_140*>* killMonsters, ::System::UInt32 currentScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_140*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SYNCPROGRESS_OFFSET))(this, turnCost, avatarDeadNum, killMonsters, currentScore);
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

		::System::Void Sync(::Class_1_3AD2528CD53B1639_3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SYNC_OFFSET))(this, data);
		}

		::System::Void _SyncExtraInfo(::Class_1_3AD2528CD53B1639_3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SYNCEXTRAINFO_OFFSET))(this, data);
		}

		::System::Void Settle(::System::Boolean isWin, ::System::UInt32 stars, ::System::UInt32 score1, ::System::UInt32 score2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETTLE_OFFSET))(this, isWin, stars, score1, score2);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 stars)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_UPDATETARGETSTATUS_OFFSET))(this, stars);
		}

		::System::Void _CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void SetBuff(::Il2CppArray<::System::UInt32>* buffID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETBUFF_OFFSET))(this, buffID);
		}

		::Il2CppArray<::RPG::Client::IAvatarInfoProvider*>* GetChallengeAvatarDatas()
		{
			return ((::Il2CppArray<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GETCHALLENGEAVATARDATAS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 _GetTotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETTOTALSCORE_OFFSET))(this);
		}

		::System::UInt32 _GetCurStageTurnCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGETURNCOST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_140*>* _GetCurStageKilledMonster()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_140*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGEKILLEDMONSTER_OFFSET))(this);
		}

		::System::Boolean _IsAllMonsterCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ISALLMONSTERCLEARED_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Void set_IsSettled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_ISSETTLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_ISWIN_OFFSET))(this, value);
		}

		::RPG::Client::ChallengeData* get_ChallengeDataRef()
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CHALLENGEDATAREF_OFFSET))(this);
		}

		::System::Void set_ChallengeDataRef(::RPG::Client::ChallengeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_CHALLENGEDATAREF_OFFSET))(this, value);
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

		::Enum_3_DB663931210BBC27_16 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_16 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_16))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPID_OFFSET))(this);
		}

		::System::Void __OnHideLoadingPage_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___ONHIDELOADINGPAGE_B__3_0_OFFSET))(this);
		}
	};
}
