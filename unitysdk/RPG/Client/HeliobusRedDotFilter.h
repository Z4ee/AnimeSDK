#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class HeliobusModule; }
namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x19810940)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198108F0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GETNEWUNLOCKCHALLENGEGROUPS_OFFSET UNITYSDK_OFFSET(0x19811220)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET UNITYSDK_OFFSET(0x19812050)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0x19811FF0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET UNITYSDK_OFFSET(0x19812010)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKSKILL_OFFSET UNITYSDK_OFFSET(0x19812030)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0x19812090)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x19812070)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEENTRYREDDOT_OFFSET UNITYSDK_OFFSET(0x19812370)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEUPGRADEREDDOT_OFFSET UNITYSDK_OFFSET(0x19812390)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISACTIVITYGOTOEVERYDAYACTIVE_OFFSET UNITYSDK_OFFSET(0x198123B0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISHELIOBUSLIGHTCONEREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x19812150)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISHELIOBUSQUESTREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x198120B0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANREPLYCOMMENTPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0x198122D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANREPLYMISSIONPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0x198121F0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANTAKEANCHORPOSTID_OFFSET UNITYSDK_OFFSET(0x19812230)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSNEWPOPULATIONPHASEISSEEN_OFFSET UNITYSDK_OFFSET(0x19812350)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSNEWPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0x19812290)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSTABCANREPLYCOMMENTPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0x19812310)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSTABPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0x19812250)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x198103F0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET UNITYSDK_OFFSET(0x19812060)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0x19812000)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET UNITYSDK_OFFSET(0x19812020)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKSKILL_OFFSET UNITYSDK_OFFSET(0x19812040)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0x198120A0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x19812080)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEENTRYREDDOT_OFFSET UNITYSDK_OFFSET(0x19812380)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEUPGRADEREDDOT_OFFSET UNITYSDK_OFFSET(0x198123A0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSCANTAKEANCHORPOSTID_OFFSET UNITYSDK_OFFSET(0x19812240)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSNEWPOPULATIONPHASEISSEEN_OFFSET UNITYSDK_OFFSET(0x19812360)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_0_OFFSET UNITYSDK_OFFSET(0x19812CC0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_1_OFFSET UNITYSDK_OFFSET(0x19812D20)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_2_OFFSET UNITYSDK_OFFSET(0x19812D80)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_3_OFFSET UNITYSDK_OFFSET(0x19812DE0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_4_OFFSET UNITYSDK_OFFSET(0x19812E40)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x198127A0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ONMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x19811900)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ONQUESTCHANGED_OFFSET UNITYSDK_OFFSET(0x19811B10)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGEGROUPREDDOT_OFFSET UNITYSDK_OFFSET(0x19811380)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGERAIDREDDOT_OFFSET UNITYSDK_OFFSET(0x198113E0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x19811440)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSINCOMEREDDOT_OFFSET UNITYSDK_OFFSET(0x198119C0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSREDDOT_OFFSET UNITYSDK_OFFSET(0x19811510)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSKILLREDDOT_OFFSET UNITYSDK_OFFSET(0x198114B0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSCANREPLYMISSIONPOSTREDDOT_OFFSET UNITYSDK_OFFSET(0x19811D80)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOPULATIONPHASEISSEEN_OFFSET UNITYSDK_OFFSET(0x19811F20)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOSTREDDOT_OFFSET UNITYSDK_OFFSET(0x19811EB0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSPOSTREDDOT_OFFSET UNITYSDK_OFFSET(0x198115E0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHTIMELIMITEDLIGHTCONEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x198117C0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHTIMELIMITEDQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x19811680)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESH_OFFSET UNITYSDK_OFFSET(0x19810720)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__SETINCOMEQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x198104A0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER___REFRESHHELIOBUSINCOMEREDDOT_B__14_0_OFFSET UNITYSDK_OFFSET(0x19812EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusRedDotFilter_TypeDefinitionIndex = 66840;

	class HeliobusRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusNewUnlockChallengeRaidLevel_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSTabCanReplyCommentPostTypeList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _IncomeQuestIdList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _HeliobusNewUnlockChallengeGroupLevel_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusTimeLimitedUnclaimedQuestReward_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusTimeLimitedUnclaimedLightConeReward_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSNewPostIDList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusNewUnlockSkill_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSCanReplyCommentPostIDList; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSTabPostTypeList; // 0x58
		::RPG::Client::HeliobusModule* _Module; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSCanReplyMissionPostIDList; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusChallengeUnclaimedReward_k__BackingField; // 0x70
		::System::UInt32 _HeliobusGoToFinalQuestID; // 0x78
		::System::UInt32 _SNSCanTakeAnchorPostID_k__BackingField; // 0x7C
		::System::Boolean IsChallengeRewardDataDirty; // 0x80
		::System::Boolean IsTimeLimitedLightConeDataDirty; // 0x81
		::System::Boolean _SNSNewPopulationPhaseIsSeen_k__BackingField; // 0x82
		::System::Boolean _IncomeEntryRedDot_k__BackingField; // 0x83
		::System::Boolean _IncomeUpgradeRedDot_k__BackingField; // 0x84
		::System::Boolean IsChallengeDataDirty; // 0x85
		::System::Boolean IsTimeLimitedQuestDataDirty; // 0x86
		::System::Boolean IsSkillDataDirty; // 0x87
		::System::UInt32 _IncomeUnlockMissionID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockChallengeGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GETNEWUNLOCKCHALLENGEGROUPS_OFFSET))(this);
		}

		::System::Void _Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESH_OFFSET))(this);
		}

		::System::Void _OnMainMissionFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ONMAINMISSIONFINISH_OFFSET))(this, a1);
		}

		::System::Void _RefreshChallengeGroupRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGEGROUPREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshChallengeRaidRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGERAIDREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshChallengeRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGEREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshTimeLimitedQuestRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHTIMELIMITEDQUESTREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshTimeLimitedLightConeRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHTIMELIMITEDLIGHTCONEREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _OnQuestChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ONQUESTCHANGED_OFFSET))(this, a1);
		}

		::System::Void _RefreshSkillRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSKILLREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshHeliobusRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSREDDOT_OFFSET))(this, a1);
		}

		::System::Void _RefreshHeliobusIncomeRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSINCOMEREDDOT_OFFSET))(this, a1);
		}

		::System::Void _RefreshSNSPostRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSPOSTREDDOT_OFFSET))(this, a1);
		}

		::System::Void _RefreshSNSCanReplyMissionPostRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSCANREPLYMISSIONPOSTREDDOT_OFFSET))(this, a1);
		}

		::System::Void _RefreshSNSNewPostRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOSTREDDOT_OFFSET))(this, a1);
		}

		::System::Void _RefreshSNSNewPopulationPhaseIsSeen(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOPULATIONPHASEISSEEN_OFFSET))(this, a1);
		}

		::System::Void _SetIncomeQuestIdList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__SETINCOMEQUESTIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_HeliobusNewUnlockChallengeGroupLevel()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET))(this);
		}

		::System::Void set_HeliobusNewUnlockChallengeGroupLevel(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusNewUnlockChallengeRaidLevel()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET))(this);
		}

		::System::Void set_HeliobusNewUnlockChallengeRaidLevel(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusNewUnlockSkill()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKSKILL_OFFSET))(this);
		}

		::System::Void set_HeliobusNewUnlockSkill(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKSKILL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusChallengeUnclaimedReward()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET))(this);
		}

		::System::Void set_HeliobusChallengeUnclaimedReward(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusTimeLimitedUnclaimedQuestReward()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET))(this);
		}

		::System::Void set_HeliobusTimeLimitedUnclaimedQuestReward(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusTimeLimitedUnclaimedLightConeReward()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET))(this);
		}

		::System::Void set_HeliobusTimeLimitedUnclaimedLightConeReward(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHeliobusQuestRewardSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISHELIOBUSQUESTREWARDSEEN_OFFSET))(this);
		}

		::System::Boolean get_IsHeliobusLightConeRewardSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISHELIOBUSLIGHTCONEREWARDSEEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SNSCanReplyMissionPostIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANREPLYMISSIONPOSTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_SNSCanTakeAnchorPostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANTAKEANCHORPOSTID_OFFSET))(this);
		}

		::System::Void set_SNSCanTakeAnchorPostID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSCANTAKEANCHORPOSTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SNSTabPostTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSTABPOSTTYPELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SNSNewPostIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSNEWPOSTIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SNSCanReplyCommentPostIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANREPLYCOMMENTPOSTIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SNSTabCanReplyCommentPostTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSTABCANREPLYCOMMENTPOSTTYPELIST_OFFSET))(this);
		}

		::System::Boolean get_SNSNewPopulationPhaseIsSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSNEWPOPULATIONPHASEISSEEN_OFFSET))(this);
		}

		::System::Void set_SNSNewPopulationPhaseIsSeen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSNEWPOPULATIONPHASEISSEEN_OFFSET))(this, a1);
		}

		::System::Boolean get_IncomeEntryRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEENTRYREDDOT_OFFSET))(this);
		}

		::System::Void set_IncomeEntryRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEENTRYREDDOT_OFFSET))(this, a1);
		}

		::System::Boolean get_IncomeUpgradeRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEUPGRADEREDDOT_OFFSET))(this);
		}

		::System::Void set_IncomeUpgradeRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEUPGRADEREDDOT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActivityGoToEveryDayActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISACTIVITYGOTOEVERYDAYACTIVE_OFFSET))(this);
		}

		::System::Void _AddHandlers_b__2_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_1_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_2_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_3_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers_b__2_4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_4_OFFSET))(this, a1);
		}

		::System::Void __RefreshHeliobusIncomeRedDot_b__14_0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER___REFRESHHELIOBUSINCOMEREDDOT_B__14_0_OFFSET))(this, a1);
		}
	};
}
