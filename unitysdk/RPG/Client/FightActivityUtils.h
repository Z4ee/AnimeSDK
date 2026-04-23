#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTACTIVITYUTILS_ENDLESSEXTRAREWARDALLRECEIVE_OFFSET UNITYSDK_OFFSET(0xA3713E0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETCURRENTBATTLEROUNDLIMIT_OFFSET UNITYSDK_OFFSET(0xA36F440)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSBOOSTWAVE_OFFSET UNITYSDK_OFFSET(0xA3714C0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xA36D700)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDWAVES_OFFSET UNITYSDK_OFFSET(0xA36F260)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWAVEOFFSET_OFFSET UNITYSDK_OFFSET(0xA371240)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWINWAVE_OFFSET UNITYSDK_OFFSET(0xA371110)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETEXTRAREWARDQUESTDATA_OFFSET UNITYSDK_OFFSET(0xA370B50)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETFIGHTGROUPSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xA370800)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETGOTOMISSIONID_OFFSET UNITYSDK_OFFSET(0xA370DA0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINFOTIPSTIME_OFFSET UNITYSDK_OFFSET(0xA371560)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET UNITYSDK_OFFSET(0xA36FE10)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xA370F80)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMONSTERIDSBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xA370500)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET UNITYSDK_OFFSET(0xA36CD90)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETPREPARESUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA36EAF0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETTRIALAVATARDATABYGROUPID_OFFSET UNITYSDK_OFFSET(0xA371030)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETUNIQUEREDDOTIDBYGROUPID_OFFSET UNITYSDK_OFFSET(0xA3711D0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GET_EXTRAREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xA370BF0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSAVAILEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0xA371380)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xA36D290)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISEXTRAREWARDAVAIL_OFFSET UNITYSDK_OFFSET(0xA370B00)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYBATTLE_OFFSET UNITYSDK_OFFSET(0xA370910)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0xA36F100)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISMESSAGESUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xA370C80)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xA3703E0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONTOOK_OFFSET UNITYSDK_OFFSET(0xA370E50)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityUtils_TypeDefinitionIndex = 59037;

	class FightActivityUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>* GetInScheduleFightGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB*>* GetNewReddotGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetMonsterIDsByStageID(::System::UInt32 stageID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETMONSTERIDSBYSTAGEID_OFFSET))(stageID);
		}

		static ::RPG::Client::ScheduleData* GetFightGroupScheduleData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETFIGHTGROUPSCHEDULEDATA_OFFSET))(groupID);
		}

		static ::System::Boolean IsInFightActivityBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYBATTLE_OFFSET))();
		}

		static ::System::Boolean IsInFightActivityEndlessBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET))();
		}

		static ::System::Boolean IsExtraRewardAvail()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISEXTRAREWARDAVAIL_OFFSET))();
		}

		static ::RPG::Client::QuestData* GetExtraRewardQuestData()
		{
			return ((::RPG::Client::QuestData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETEXTRAREWARDQUESTDATA_OFFSET))();
		}

		static ::System::UInt32 get_ExtraRewardQuestID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GET_EXTRAREWARDQUESTID_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPrepareSubmissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETPREPARESUBMISSIONLIST_OFFSET))();
		}

		static ::System::Boolean IsPremissionFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONFINISH_OFFSET))();
		}

		static ::System::Boolean IsMessageSubmissionFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISMESSAGESUBMISSIONFINISH_OFFSET))();
		}

		static ::System::UInt32 GetGoToMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETGOTOMISSIONID_OFFSET))();
		}

		static ::System::Boolean IsPremissionTook()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONTOOK_OFFSET))();
		}

		static ::System::UInt32 GetMessageGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETMESSAGEGROUPID_OFFSET))();
		}

		static ::RPG::Client::IAvatarInfoProvider* GetTrialAvatarDataByGroupID(::System::UInt32 groupID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETTRIALAVATARDATABYGROUPID_OFFSET))(groupID);
		}

		static ::System::UInt32 GetCurrentBattleRoundLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETCURRENTBATTLEROUNDLIMIT_OFFSET))();
		}

		static ::System::UInt32 GetEndlessWinWave()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWINWAVE_OFFSET))();
		}

		static ::System::UInt32 GetUniqueReddotIDByGroupID(::System::UInt32 groupID, ::System::UInt32 difficultyLevel, ::System::UInt32 wave)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETUNIQUEREDDOTIDBYGROUPID_OFFSET))(groupID, difficultyLevel, wave);
		}

		static ::System::UInt32 GetEndlessWaveOffset(::System::UInt32 groupID, ::System::UInt32 wave)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWAVEOFFSET_OFFSET))(groupID, wave);
		}

		static ::Il2CppArray<::System::UInt32>* GetEndlessRewardWaves(::System::UInt32 groupID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDWAVES_OFFSET))(groupID);
		}

		static ::Il2CppArray<::System::UInt32>* GetEndlessRewardQuest(::System::UInt32 groupID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDQUEST_OFFSET))(groupID);
		}

		static ::System::Boolean HasEndlessQuestReward(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSQUESTREWARD_OFFSET))(groupID);
		}

		static ::System::Boolean HasEndlessAvailExtraReward(::System::UInt32 groupID, ::System::UInt32 offset)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSAVAILEXTRAREWARD_OFFSET))(groupID, offset);
		}

		static ::System::Boolean EndlessExtraRewardAllReceive(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ENDLESSEXTRAREWARDALLRECEIVE_OFFSET))(groupID);
		}

		static ::System::UInt32 GetEndlessBoostWave()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSBOOSTWAVE_OFFSET))();
		}

		static ::System::Single GetInfoTipsTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETINFOTIPSTIME_OFFSET))();
		}
	};
}
