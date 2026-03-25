#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_18;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTACTIVITYUTILS_ENDLESSEXTRAREWARDALLRECEIVE_OFFSET UNITYSDK_OFFSET(0x96B18F0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETCURRENTBATTLEROUNDLIMIT_OFFSET UNITYSDK_OFFSET(0x96AF950)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSBOOSTWAVE_OFFSET UNITYSDK_OFFSET(0x96B19D0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x96ADC10)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDWAVES_OFFSET UNITYSDK_OFFSET(0x96AF770)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWAVEOFFSET_OFFSET UNITYSDK_OFFSET(0x96B1750)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWINWAVE_OFFSET UNITYSDK_OFFSET(0x96B1620)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETEXTRAREWARDQUESTDATA_OFFSET UNITYSDK_OFFSET(0x96B1070)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETFIGHTGROUPSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x96B0D20)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETGOTOMISSIONID_OFFSET UNITYSDK_OFFSET(0x96B12C0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINFOTIPSTIME_OFFSET UNITYSDK_OFFSET(0x96B1A70)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET UNITYSDK_OFFSET(0x96B0330)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x96B1490)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMONSTERIDSBYSTAGEID_OFFSET UNITYSDK_OFFSET(0x96B0A20)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET UNITYSDK_OFFSET(0x96AD2A0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETPREPARESUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x96AF000)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETTRIALAVATARDATABYGROUPID_OFFSET UNITYSDK_OFFSET(0x96B1540)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETUNIQUEREDDOTIDBYGROUPID_OFFSET UNITYSDK_OFFSET(0x96B16E0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GET_EXTRAREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x96B1110)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSAVAILEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0x96B1890)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x96AD7A0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISEXTRAREWARDAVAIL_OFFSET UNITYSDK_OFFSET(0x96B1020)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYBATTLE_OFFSET UNITYSDK_OFFSET(0x96B0E30)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0x96AF610)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISMESSAGESUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x96B11A0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x96B0900)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONTOOK_OFFSET UNITYSDK_OFFSET(0x96B1370)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityUtils_TypeDefinitionIndex = 52087;

	class FightActivityUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>* GetInScheduleFightGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_18*>* GetNewReddotGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_99BD961747420BEB_18*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET))();
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
