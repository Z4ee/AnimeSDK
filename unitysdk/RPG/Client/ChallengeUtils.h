#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ConditionParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEUTILS_CANTRIGGERCHALLENGEAUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x9F62E60)
#define RPG_CLIENT_CHALLENGEUTILS_GETAUTOSETTLEMAXLEVELBYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x9F62DE0)
#define RPG_CLIENT_CHALLENGEUTILS_GETBATTLEEVENTIDBYEVENTID_OFFSET UNITYSDK_OFFSET(0x9F62B90)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEACTIVITYDOINGGUIDEMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x9F63F70)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEACTIVITYUNLOCKMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x9F63E20)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEGROUPTYPEBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x9F63060)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEMEMORYRESIDENTUNLOCKMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x9F63290)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEMEMORYUNLOCKMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x9F62670)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEMEMORYUNLOCKPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x9F63190)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGESTORYUNLOCKMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x9F63390)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGESTORYUNLOCKPREMAINMISSION_1_OFFSET UNITYSDK_OFFSET(0x9F63530)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGESTORYUNLOCKPREMAINMISSION_2_OFFSET UNITYSDK_OFFSET(0x9F63600)
#define RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGESTORYUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x9F63460)
#define RPG_CLIENT_CHALLENGEUTILS_GETGUIDECHALLENGELATEUPDATEMINILEVELMISSIONID_OFFSET UNITYSDK_OFFSET(0x9F636D0)
#define RPG_CLIENT_CHALLENGEUTILS_HASTYPEAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x9F643B0)
#define RPG_CLIENT_CHALLENGEUTILS_HASTYPENEWGROUP_OFFSET UNITYSDK_OFFSET(0x9F64210)
#define RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEACTIVITYGUIDEFINISHED_OFFSET UNITYSDK_OFFSET(0x9F64180)
#define RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEACTIVITYUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9F62910)
#define RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEMEMORYPRELEVELUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F637A0)
#define RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEMEMORYPREMISSIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F63850)
#define RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEMEMORYRESIDENTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F639B0)
#define RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F62860)
#define RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGESTORYPREMISSIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F60950)
#define RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGESTORYUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F63A00)
#define RPG_CLIENT_CHALLENGEUTILS_ISDOINGCHALLENGESTORYPREMISSION_OFFSET UNITYSDK_OFFSET(0x9F60A00)
#define RPG_CLIENT_CHALLENGEUTILS_ISGUIDECHALLENGEBOSSSHOW_OFFSET UNITYSDK_OFFSET(0x9F62B10)
#define RPG_CLIENT_CHALLENGEUTILS_ISGUIDECHALLENGELATEUPDATETABUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F623E0)
#define RPG_CLIENT_CHALLENGEUTILS_ISGUIDECHALLENGEMEMORYTABUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F62440)
#define RPG_CLIENT_CHALLENGEUTILS_ISGUIDECHALLENGESTORYSHOW_OFFSET UNITYSDK_OFFSET(0x9F62A90)
#define RPG_CLIENT_CHALLENGEUTILS_ISHANDBOOKGUIDECHALLENGEUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F62350)
#define RPG_CLIENT_CHALLENGEUTILS_ISINCHALLENGEMODE_OFFSET UNITYSDK_OFFSET(0x9F64540)
#define RPG_CLIENT_CHALLENGEUTILS_PREPARECHALLENGECONDITION_OFFSET UNITYSDK_OFFSET(0x9F63A40)
#define RPG_CLIENT_CHALLENGEUTILS__ADDCONDITIONMISSIONS_OFFSET UNITYSDK_OFFSET(0x9F63CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeUtils_TypeDefinitionIndex = 58153;

	class ChallengeUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsHandbookGuideChallengeUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISHANDBOOKGUIDECHALLENGEUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsGuideChallengeMemoryTabUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISGUIDECHALLENGEMEMORYTABUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsGuideChallengeLateUpdateTabUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISGUIDECHALLENGELATEUPDATETABUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsGuideChallengeStoryShow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISGUIDECHALLENGESTORYSHOW_OFFSET))();
		}

		static ::System::Boolean IsGuideChallengeBossShow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISGUIDECHALLENGEBOSSSHOW_OFFSET))();
		}

		static ::System::UInt32 GetBattleEventIDByEventID(::System::UInt32 eventID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETBATTLEEVENTIDBYEVENTID_OFFSET))(eventID);
		}

		static ::System::UInt32 GetAutoSettleMaxLevelByGroupType(::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETAUTOSETTLEMAXLEVELBYGROUPTYPE_OFFSET))(groupType);
		}

		static ::System::Boolean CanTriggerChallengeAutoSettle(::System::UInt32 challengeID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_CANTRIGGERCHALLENGEAUTOSETTLE_OFFSET))(challengeID);
		}

		static ::RPG::GameCore::ChallengeGroupType GetChallengeGroupTypeByChallengeID(::System::UInt32 challengeID)
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEGROUPTYPEBYCHALLENGEID_OFFSET))(challengeID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetChallengeMemoryUnlockMainMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEMEMORYUNLOCKMAINMISSIONIDLIST_OFFSET))();
		}

		static ::System::UInt32 GetChallengeMemoryUnlockPlayerLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEMEMORYUNLOCKPLAYERLEVEL_OFFSET))();
		}

		static ::System::UInt32 GetChallengeMemoryResidentUnlockMessageGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEMEMORYRESIDENTUNLOCKMESSAGEGROUPID_OFFSET))();
		}

		static ::System::UInt32 GetChallengeStoryUnlockMainMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGESTORYUNLOCKMAINMISSIONID_OFFSET))();
		}

		static ::System::UInt32 GetChallengeStoryUnlockSubMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGESTORYUNLOCKSUBMISSIONID_OFFSET))();
		}

		static ::System::UInt32 GetChallengeStoryUnlockPreMainMission_1()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGESTORYUNLOCKPREMAINMISSION_1_OFFSET))();
		}

		static ::System::UInt32 GetChallengeStoryUnlockPreMainMission_2()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGESTORYUNLOCKPREMAINMISSION_2_OFFSET))();
		}

		static ::System::UInt32 GetGuideChallengeLateUpdateMiniLevelMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETGUIDECHALLENGELATEUPDATEMINILEVELMISSIONID_OFFSET))();
		}

		static ::System::Boolean IsChallengeMemoryPreLevelUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEMEMORYPRELEVELUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsChallengeMemoryPreMissionUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEMEMORYPREMISSIONUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsChallengeMemoryResidentUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEMEMORYRESIDENTUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsChallengeMemoryScheduleUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsChallengeStoryPreMissionUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGESTORYPREMISSIONUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsDoingChallengeStoryPreMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISDOINGCHALLENGESTORYPREMISSION_OFFSET))();
		}

		static ::System::Boolean IsChallengeStoryUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGESTORYUNLOCK_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* PrepareChallengeCondition()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_PREPARECHALLENGECONDITION_OFFSET))();
		}

		static ::System::Void _AddConditionMissions(::System::Collections::Generic::List_1<::System::UInt32>*& mainMissionIDs, ::System::Collections::Generic::List_1<::System::UInt32>*& subMissionIDs, ::Il2CppArray<::RPG::GameCore::ConditionParam*>* conditions)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS__ADDCONDITIONMISSIONS_OFFSET))(mainMissionIDs, subMissionIDs, conditions);
		}

		static ::System::Boolean IsChallengeActivityUnlocked(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEACTIVITYUNLOCKED_OFFSET))(type);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetChallengeActivityUnlockMainMissionIDs(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEACTIVITYUNLOCKMAINMISSIONIDS_OFFSET))(type);
		}

		static ::System::UInt32 GetChallengeActivityDoingGuideMainMissionID(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_GETCHALLENGEACTIVITYDOINGGUIDEMAINMISSIONID_OFFSET))(type);
		}

		static ::System::Boolean IsChallengeActivityGuideFinished(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISCHALLENGEACTIVITYGUIDEFINISHED_OFFSET))(type);
		}

		static ::System::Boolean HasTypeNewGroup(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_HASTYPENEWGROUP_OFFSET))(type);
		}

		static ::System::Boolean HasTypeAvailableReward(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_HASTYPEAVAILABLEREWARD_OFFSET))(type);
		}

		static ::System::Boolean IsInChallengeMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEUTILS_ISINCHALLENGEMODE_OFFSET))();
		}
	};
}
