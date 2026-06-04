#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class HeliobusModule; }
namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD17ED0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD17E50)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GETNEWUNLOCKCHALLENGEGROUPS_OFFSET UNITYSDK_OFFSET(0xBD187B0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET UNITYSDK_OFFSET(0xBD195A0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0xBD19540)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET UNITYSDK_OFFSET(0xBD19560)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSNEWUNLOCKSKILL_OFFSET UNITYSDK_OFFSET(0xBD19580)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0xBD195E0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xBD195C0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEENTRYREDDOT_OFFSET UNITYSDK_OFFSET(0xBD197D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_INCOMEUPGRADEREDDOT_OFFSET UNITYSDK_OFFSET(0xBD197F0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISACTIVITYGOTOEVERYDAYACTIVE_OFFSET UNITYSDK_OFFSET(0xBD0C320)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISHELIOBUSLIGHTCONEREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xBD196A0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_ISHELIOBUSQUESTREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xBD19600)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANREPLYCOMMENTPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0xBD19790)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANREPLYMISSIONPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0xBD19740)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSCANTAKEANCHORPOSTID_OFFSET UNITYSDK_OFFSET(0xBD19750)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSNEWPOPULATIONPHASEISSEEN_OFFSET UNITYSDK_OFFSET(0xBD197B0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSNEWPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0xBD19780)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSTABCANREPLYCOMMENTPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0xBD197A0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_GET_SNSTABPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0xBD19770)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xBD0CC10)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSCHALLENGEUNCLAIMEDREWARD_OFFSET UNITYSDK_OFFSET(0xBD195B0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0xBD19550)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET UNITYSDK_OFFSET(0xBD19570)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSNEWUNLOCKSKILL_OFFSET UNITYSDK_OFFSET(0xBD19590)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDLIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0xBD195F0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_HELIOBUSTIMELIMITEDUNCLAIMEDQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xBD195D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEENTRYREDDOT_OFFSET UNITYSDK_OFFSET(0xBD197E0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_INCOMEUPGRADEREDDOT_OFFSET UNITYSDK_OFFSET(0xBD19800)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSCANTAKEANCHORPOSTID_OFFSET UNITYSDK_OFFSET(0xBD19760)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER_SET_SNSNEWPOPULATIONPHASEISSEEN_OFFSET UNITYSDK_OFFSET(0xBD197C0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_0_OFFSET UNITYSDK_OFFSET(0xBD19810)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_1_OFFSET UNITYSDK_OFFSET(0xBD19870)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_2_OFFSET UNITYSDK_OFFSET(0xBD198D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_3_OFFSET UNITYSDK_OFFSET(0xBD19930)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ADDHANDLERS_B__2_4_OFFSET UNITYSDK_OFFSET(0xBD19990)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xBD0C710)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ONMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xBD18E50)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__ONQUESTCHANGED_OFFSET UNITYSDK_OFFSET(0xBD19060)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGEGROUPREDDOT_OFFSET UNITYSDK_OFFSET(0xBD18910)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGERAIDREDDOT_OFFSET UNITYSDK_OFFSET(0xBD18970)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHCHALLENGEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xBD189D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSINCOMEREDDOT_OFFSET UNITYSDK_OFFSET(0xBD18F10)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHHELIOBUSREDDOT_OFFSET UNITYSDK_OFFSET(0xBD18A90)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSKILLREDDOT_OFFSET UNITYSDK_OFFSET(0xBD18A30)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSCANREPLYMISSIONPOSTREDDOT_OFFSET UNITYSDK_OFFSET(0xBD192D0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOPULATIONPHASEISSEEN_OFFSET UNITYSDK_OFFSET(0xBD19470)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSNEWPOSTREDDOT_OFFSET UNITYSDK_OFFSET(0xBD19400)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHSNSPOSTREDDOT_OFFSET UNITYSDK_OFFSET(0xBD18B50)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHTIMELIMITEDLIGHTCONEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xBD18D20)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESHTIMELIMITEDQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xBD18BF0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__REFRESH_OFFSET UNITYSDK_OFFSET(0xBD17C80)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER__SETINCOMEQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xBD17A00)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD19B20)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD19AB0)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBD19A40)
#define RPG_CLIENT_HELIOBUSREDDOTFILTER___REFRESHHELIOBUSINCOMEREDDOT_B__14_0_OFFSET UNITYSDK_OFFSET(0xBD199F0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusRedDotFilter_TypeDefinitionIndex = 62483;

	class HeliobusRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusTimeLimitedUnclaimedQuestReward_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _HeliobusNewUnlockChallengeGroupLevel_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusTimeLimitedUnclaimedLightConeReward_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusChallengeUnclaimedReward_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusNewUnlockSkill_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _IncomeQuestIdList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSCanReplyCommentPostIDList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSTabPostTypeList; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSNewPostIDList; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSCanReplyMissionPostIDList; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _SNSTabCanReplyCommentPostTypeList; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _HeliobusNewUnlockChallengeRaidLevel_k__BackingField; // 0x68
		::RPG::Client::HeliobusModule* _Module; // 0x70
		::System::Boolean IsChallengeRewardDataDirty; // 0x78
		::System::Boolean _IncomeEntryRedDot_k__BackingField; // 0x79
		::System::Boolean IsTimeLimitedQuestDataDirty; // 0x7A
		::System::Boolean _SNSNewPopulationPhaseIsSeen_k__BackingField; // 0x7B
		::System::UInt32 _SNSCanTakeAnchorPostID_k__BackingField; // 0x7C
		::System::UInt32 _HeliobusGoToFinalQuestID; // 0x80
		::System::Boolean _IncomeUpgradeRedDot_k__BackingField; // 0x84
		::System::Boolean IsChallengeDataDirty; // 0x85
		::System::Boolean IsSkillDataDirty; // 0x86
		::System::Boolean IsTimeLimitedLightConeDataDirty; // 0x87
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
