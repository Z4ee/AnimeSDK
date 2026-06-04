#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB_1;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTACTIVITYUTILS_ENDLESSEXTRAREWARDALLRECEIVE_OFFSET UNITYSDK_OFFSET(0xB9C4FE0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETCURRENTBATTLEROUNDLIMIT_OFFSET UNITYSDK_OFFSET(0xB9C2ED0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSBOOSTWAVE_OFFSET UNITYSDK_OFFSET(0xB9C50C0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xB9C0FF0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDWAVES_OFFSET UNITYSDK_OFFSET(0xB9C2D10)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWAVEOFFSET_OFFSET UNITYSDK_OFFSET(0xB9C4E50)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWINWAVE_OFFSET UNITYSDK_OFFSET(0xB9C4D20)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETEXTRAREWARDQUESTDATA_OFFSET UNITYSDK_OFFSET(0xB9C4770)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETFIGHTGROUPSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xB9C4390)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETGOTOMISSIONID_OFFSET UNITYSDK_OFFSET(0xB9C49C0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINFOTIPSTIME_OFFSET UNITYSDK_OFFSET(0xB9C5160)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET UNITYSDK_OFFSET(0xB9C3910)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xB9C4B90)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMONSTERIDSBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xB9C4070)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET UNITYSDK_OFFSET(0xB9C0620)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETPREPARESUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xB9C2590)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETTRIALAVATARDATABYGROUPID_OFFSET UNITYSDK_OFFSET(0xB9C4C40)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETUNIQUEREDDOTIDBYGROUPID_OFFSET UNITYSDK_OFFSET(0xB9C4DE0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GET_EXTRAREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xB9C4810)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSAVAILEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0xB9C4F80)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xB9C0B50)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISEXTRAREWARDAVAIL_OFFSET UNITYSDK_OFFSET(0xB9C4720)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYBATTLE_OFFSET UNITYSDK_OFFSET(0xB9C44A0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0xB9C2BA0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISMESSAGESUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xB9C48A0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xB9C3F50)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONTOOK_OFFSET UNITYSDK_OFFSET(0xB9C4A70)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityUtils_TypeDefinitionIndex = 59967;

	class FightActivityUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>* GetInScheduleFightGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB_1*>* GetNewReddotGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB_1*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetMonsterIDsByStageID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETMONSTERIDSBYSTAGEID_OFFSET))(a1);
		}

		static ::RPG::Client::ScheduleData* GetFightGroupScheduleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETFIGHTGROUPSCHEDULEDATA_OFFSET))(a1);
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

		static ::RPG::AvatarSystem::IAvatar* GetTrialAvatarDataByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETTRIALAVATARDATABYGROUPID_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurrentBattleRoundLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETCURRENTBATTLEROUNDLIMIT_OFFSET))();
		}

		static ::System::UInt32 GetEndlessWinWave()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWINWAVE_OFFSET))();
		}

		static ::System::UInt32 GetUniqueReddotIDByGroupID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETUNIQUEREDDOTIDBYGROUPID_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetEndlessWaveOffset(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWAVEOFFSET_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* GetEndlessRewardWaves(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDWAVES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetEndlessRewardQuest(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDQUEST_OFFSET))(a1);
		}

		static ::System::Boolean HasEndlessQuestReward(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSQUESTREWARD_OFFSET))(a1);
		}

		static ::System::Boolean HasEndlessAvailExtraReward(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSAVAILEXTRAREWARD_OFFSET))(a1, a2);
		}

		static ::System::Boolean EndlessExtraRewardAllReceive(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ENDLESSEXTRAREWARDALLRECEIVE_OFFSET))(a1);
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
