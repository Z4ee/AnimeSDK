#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class HeliobusModule; }
namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA614150)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6140D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GETNEWUNLOCKCHALLENGEGROUPS_OFFSET UNITYSDK_OFFSET(0xA614940)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET UNITYSDK_OFFSET(0xA615520)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0xA6154C0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET UNITYSDK_OFFSET(0xA6154E0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKSKILL_OFFSET UNITYSDK_OFFSET(0xA615500)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0xA615560)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xA615540)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEENTRYREDDOT_OFFSET UNITYSDK_OFFSET(0xA615750)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEUPGRADEREDDOT_OFFSET UNITYSDK_OFFSET(0xA615770)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISACTIVITYGOTOEVERYDAYACTIVE_OFFSET UNITYSDK_OFFSET(0xA6092C0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISHELIOBUSLIGHTCONEREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xA615620)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISHELIOBUSQUESTREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xA615580)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANREPLYCOMMENTPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0xA615710)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANREPLYMISSIONPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0xA6156C0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANTAKEANCHORPOSTID_OFFSET UNITYSDK_OFFSET(0xA6156D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSNEWPOPULATIONPHASEISSEEN_OFFSET UNITYSDK_OFFSET(0xA615730)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSNEWPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0xA615700)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSTABCANREPLYCOMMENTPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0xA615720)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSTABPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0xA6156F0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA609BC0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET UNITYSDK_OFFSET(0xA615530)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0xA6154D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET UNITYSDK_OFFSET(0xA6154F0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKSKILL_OFFSET UNITYSDK_OFFSET(0xA615510)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0xA615570)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xA615550)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEENTRYREDDOT_OFFSET UNITYSDK_OFFSET(0xA615760)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEUPGRADEREDDOT_OFFSET UNITYSDK_OFFSET(0xA615780)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSCANTAKEANCHORPOSTID_OFFSET UNITYSDK_OFFSET(0xA6156E0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSNEWPOPULATIONPHASEISSEEN_OFFSET UNITYSDK_OFFSET(0xA615740)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_0_OFFSET UNITYSDK_OFFSET(0xA615790)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_1_OFFSET UNITYSDK_OFFSET(0xA6157F0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_2_OFFSET UNITYSDK_OFFSET(0xA615850)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_3_OFFSET UNITYSDK_OFFSET(0xA6158B0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_4_OFFSET UNITYSDK_OFFSET(0xA615910)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6096C0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ONMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xA614EA0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ONQUESTCHANGED_OFFSET UNITYSDK_OFFSET(0xA615080)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGEGROUPREDDOT_OFFSET UNITYSDK_OFFSET(0xA614A00)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGERAIDREDDOT_OFFSET UNITYSDK_OFFSET(0xA614A60)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA614AC0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSINCOMEREDDOT_OFFSET UNITYSDK_OFFSET(0xA614F50)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSREDDOT_OFFSET UNITYSDK_OFFSET(0xA614B90)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSKILLREDDOT_OFFSET UNITYSDK_OFFSET(0xA614B30)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSCANREPLYMISSIONPOSTREDDOT_OFFSET UNITYSDK_OFFSET(0xA615250)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOPULATIONPHASEISSEEN_OFFSET UNITYSDK_OFFSET(0xA6153F0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOSTREDDOT_OFFSET UNITYSDK_OFFSET(0xA615380)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSPOSTREDDOT_OFFSET UNITYSDK_OFFSET(0xA614C50)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHTIMELIMITEDLIGHTCONEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA614DD0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHTIMELIMITEDQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA614CF0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESH_OFFSET UNITYSDK_OFFSET(0xA613F00)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__SETINCOMEQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xA613D70)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA615AD0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA615A50)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA6159D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER___REFRESHHELIOBUSINCOMEREDDOT_B__14_0_OFFSET UNITYSDK_OFFSET(0xA615970)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusRedDotFilter_TypeDefinitionIndex = 61550;

	class HeliobusRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSTabCanReplyCommentPostTypeList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSCanReplyCommentPostIDList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusNewUnlockChallengeRaidLevel_k__BackingField; // 0x20
		::RPG::Client::HeliobusModule* _Module; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSCanReplyMissionPostIDList; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusNewUnlockSkill_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSTabPostTypeList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusTimeLimitedUnclaimedLightConeReward_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusTimeLimitedUnclaimedQuestReward_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _HeliobusNewUnlockChallengeGroupLevel_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _IncomeQuestIdList; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSNewPostIDList; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusChallengeUnclaimedReward_k__BackingField; // 0x70
		::System::Boolean IsTimeLimitedLightConeDataDirty; // 0x78
		::System::Boolean _IncomeEntryRedDot_k__BackingField; // 0x79
		::System::Boolean _SNSNewPopulationPhaseIsSeen_k__BackingField; // 0x7A
		::System::Boolean IsChallengeDataDirty; // 0x7B
		::System::UInt32 _IncomeUnlockMissionID; // 0x7C
		::System::UInt32 _SNSCanTakeAnchorPostID_k__BackingField; // 0x80
		::System::Boolean IsChallengeRewardDataDirty; // 0x84
		::System::Boolean IsTimeLimitedQuestDataDirty; // 0x85
		::System::Boolean _IncomeUpgradeRedDot_k__BackingField; // 0x86
		::System::Boolean IsSkillDataDirty; // 0x87
		::System::UInt32 _HeliobusGoToFinalQuestID; // 0x88

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

		::System::Void _OnMainMissionFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ONMAINMISSIONFINISH_OFFSET))(this, arg);
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

		::System::Void _OnQuestChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ONQUESTCHANGED_OFFSET))(this, arg);
		}

		::System::Void _RefreshSkillRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSKILLREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshHeliobusRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSREDDOT_OFFSET))(this, arg);
		}

		::System::Void _RefreshHeliobusIncomeRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSINCOMEREDDOT_OFFSET))(this, arg);
		}

		::System::Void _RefreshSNSPostRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSPOSTREDDOT_OFFSET))(this, arg);
		}

		::System::Void _RefreshSNSCanReplyMissionPostRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSCANREPLYMISSIONPOSTREDDOT_OFFSET))(this, arg);
		}

		::System::Void _RefreshSNSNewPostRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOSTREDDOT_OFFSET))(this, arg);
		}

		::System::Void _RefreshSNSNewPopulationPhaseIsSeen(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOPULATIONPHASEISSEEN_OFFSET))(this, arg);
		}

		::System::Void _SetIncomeQuestIdList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__SETINCOMEQUESTIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_HeliobusNewUnlockChallengeGroupLevel()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET))(this);
		}

		::System::Void set_HeliobusNewUnlockChallengeGroupLevel(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusNewUnlockChallengeRaidLevel()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET))(this);
		}

		::System::Void set_HeliobusNewUnlockChallengeRaidLevel(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusNewUnlockSkill()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKSKILL_OFFSET))(this);
		}

		::System::Void set_HeliobusNewUnlockSkill(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKSKILL_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusChallengeUnclaimedReward()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET))(this);
		}

		::System::Void set_HeliobusChallengeUnclaimedReward(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusTimeLimitedUnclaimedQuestReward()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET))(this);
		}

		::System::Void set_HeliobusTimeLimitedUnclaimedQuestReward(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HeliobusTimeLimitedUnclaimedLightConeReward()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET))(this);
		}

		::System::Void set_HeliobusTimeLimitedUnclaimedLightConeReward(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET))(this, value);
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

		::System::Void set_SNSCanTakeAnchorPostID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSCANTAKEANCHORPOSTID_OFFSET))(this, value);
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

		::System::Void set_SNSNewPopulationPhaseIsSeen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSNEWPOPULATIONPHASEISSEEN_OFFSET))(this, value);
		}

		::System::Boolean get_IncomeEntryRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEENTRYREDDOT_OFFSET))(this);
		}

		::System::Void set_IncomeEntryRedDot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEENTRYREDDOT_OFFSET))(this, value);
		}

		::System::Boolean get_IncomeUpgradeRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEUPGRADEREDDOT_OFFSET))(this);
		}

		::System::Void set_IncomeUpgradeRedDot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEUPGRADEREDDOT_OFFSET))(this, value);
		}

		::System::Boolean get_IsActivityGoToEveryDayActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISACTIVITYGOTOEVERYDAYACTIVE_OFFSET))(this);
		}

		::System::Void _AddHandlers_b__2_0(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_0_OFFSET))(this, arg);
		}

		::System::Void _AddHandlers_b__2_1(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_1_OFFSET))(this, arg);
		}

		::System::Void _AddHandlers_b__2_2(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_2_OFFSET))(this, arg);
		}

		::System::Void _AddHandlers_b__2_3(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_3_OFFSET))(this, arg);
		}

		::System::Void _AddHandlers_b__2_4(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_4_OFFSET))(this, arg);
		}

		::System::Void __RefreshHeliobusIncomeRedDot_b__14_0(::RPG::Client::MainMissionData* mainMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER___REFRESHHELIOBUSINCOMEREDDOT_B__14_0_OFFSET))(this, mainMissionData);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
