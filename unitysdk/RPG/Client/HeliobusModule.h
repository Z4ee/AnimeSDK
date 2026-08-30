#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_21C7581DFE99F091_58;
class Class_1_45BB92167AED63A0_46;
namespace Proto { class HeliobusChallengeLineup; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class HeliobusChallengeData; }
namespace RPG::Client { class HeliobusRedDotFilter; }
namespace RPG::Client { class HeliobusSNSData; }
namespace RPG::Client { class HeliobusSkillData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A07C020)
#define RPG_CLIENT_HELIOBUSMODULE_ENTERCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x1A0768D0)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGECACHETEAM_OFFSET UNITYSDK_OFFSET(0x1A076D40)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1A076C40)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0x1A076A10)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x1A077200)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEUNCLAIMEDREWARDTAB_OFFSET UNITYSDK_OFFSET(0x1A0797C0)
#define RPG_CLIENT_HELIOBUSMODULE_GETINCOMEENTRYREDDOT_OFFSET UNITYSDK_OFFSET(0x1A07B540)
#define RPG_CLIENT_HELIOBUSMODULE_GETINCOMEUPGRADEREDDOT_OFFSET UNITYSDK_OFFSET(0x1A07B710)
#define RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0x1A078BE0)
#define RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A079180)
#define RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKSKILL_OFFSET UNITYSDK_OFFSET(0x1A0795C0)
#define RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDAVATARS_OFFSET UNITYSDK_OFFSET(0x1A077550)
#define RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDSKILL_OFFSET UNITYSDK_OFFSET(0x1A077440)
#define RPG_CLIENT_HELIOBUSMODULE_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1A07BAA0)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYCOMMENTPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0x1A07ACC0)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYMISSIONPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0x1A07A4D0)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSHELIOBUSCANTAKEANCHORPOSTID_OFFSET UNITYSDK_OFFSET(0x1A07AC50)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSNEWPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0x1A07B2D0)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSTABCANREPLYCOMMENTPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0x1A07AF30)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSTABPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0x1A07A8B0)
#define RPG_CLIENT_HELIOBUSMODULE_GETTIMELIMITEDUNCLAIMEDREWARD_OFFSET UNITYSDK_OFFSET(0x1A079A80)
#define RPG_CLIENT_HELIOBUSMODULE_GETUNLOCKEDSKILLS_OFFSET UNITYSDK_OFFSET(0x1A07B8C0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0x1A077EF0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSCHALLENGES_OFFSET UNITYSDK_OFFSET(0x1A077ED0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x1A07B810)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSKILLS_OFFSET UNITYSDK_OFFSET(0x1A07CA00)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSNSDATA_OFFSET UNITYSDK_OFFSET(0x1A07C9E0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET UNITYSDK_OFFSET(0x1A077F30)
#define RPG_CLIENT_HELIOBUSMODULE_GET_SELECTEDHELIOBUSSKILLID_OFFSET UNITYSDK_OFFSET(0x1A07CA20)
#define RPG_CLIENT_HELIOBUSMODULE_GET_TARGETCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A077F10)
#define RPG_CLIENT_HELIOBUSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1A07BB90)
#define RPG_CLIENT_HELIOBUSMODULE_MARKNEEDAUTOCHALLENGEENTER_OFFSET UNITYSDK_OFFSET(0x1A077C20)
#define RPG_CLIENT_HELIOBUSMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1A07C080)
#define RPG_CLIENT_HELIOBUSMODULE_SAVECHALLENGECACHETEAM_OFFSET UNITYSDK_OFFSET(0x1A0772B0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0x1A077F00)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSCHALLENGES_OFFSET UNITYSDK_OFFSET(0x1A077EE0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x1A07B820)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSKILLS_OFFSET UNITYSDK_OFFSET(0x1A07CA10)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSNSDATA_OFFSET UNITYSDK_OFFSET(0x1A07C9F0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET UNITYSDK_OFFSET(0x1A077F40)
#define RPG_CLIENT_HELIOBUSMODULE_SET_SELECTEDHELIOBUSSKILLID_OFFSET UNITYSDK_OFFSET(0x1A07CA30)
#define RPG_CLIENT_HELIOBUSMODULE_SET_TARGETCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A077F20)
#define RPG_CLIENT_HELIOBUSMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1A077C70)
#define RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGEGROUPLEVELSEEN_OFFSET UNITYSDK_OFFSET(0x1A079F60)
#define RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGERAIDLEVELSEEN_OFFSET UNITYSDK_OFFSET(0x1A07A210)
#define RPG_CLIENT_HELIOBUSMODULE_TRYMARKSKILLSEEN_OFFSET UNITYSDK_OFFSET(0x1A07A340)
#define RPG_CLIENT_HELIOBUSMODULE_TRYSAVERAIDCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1A0777B0)
#define RPG_CLIENT_HELIOBUSMODULE_TRYUNLOCKCHALLENGES_OFFSET UNITYSDK_OFFSET(0x1A077D00)
#define RPG_CLIENT_HELIOBUSMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A07C0C0)
#define RPG_CLIENT_HELIOBUSMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A07CA40)
#define RPG_CLIENT_HELIOBUSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07B830)
#define RPG_CLIENT_HELIOBUSMODULE__GETHELIOBUSSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1A07C6F0)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1A077F50)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x1A0781B0)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGERAIDDATA_OFFSET UNITYSDK_OFFSET(0x1A078450)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1A07BC10)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1A07D1A0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSCHALLENGEUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A07EB10)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSINFOCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A07E270)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSLINEUPUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A07EB90)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSELECTSKILLSCRSP_OFFSET UNITYSDK_OFFSET(0x1A07EA90)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSCOMMENTSCRSP_OFFSET UNITYSDK_OFFSET(0x1A07E540)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSLIKESCRSP_OFFSET UNITYSDK_OFFSET(0x1A07E6B0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSPOSTSCRSP_OFFSET UNITYSDK_OFFSET(0x1A07E480)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSREADSCRSP_OFFSET UNITYSDK_OFFSET(0x1A07E600)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A07E3F0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A07E860)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUPGRADELEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x1A07E770)
#define RPG_CLIENT_HELIOBUSMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1A07C3A0)
#define RPG_CLIENT_HELIOBUSMODULE__ONHELIOBUSRAIDCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x1A07C570)
#define RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONCHALLENGEUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0x1A078940)
#define RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONSKILLUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0x1A07C4E0)
#define RPG_CLIENT_HELIOBUSMODULE__ONTAKENSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1A07C410)
#define RPG_CLIENT_HELIOBUSMODULE__PREPAREMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A07DB40)
#define RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1A078650)
#define RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x1A078880)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusModule_TypeDefinitionIndex = 65728;

	class HeliobusModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Proto::HeliobusChallengeLineup*>* _ChallengeLineupDataDict; // 0x10
		::RPG::Client::HeliobusSNSData* _HeliobusSNSData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>* _HeliobusChallenges_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ChallengeRaidList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>* _HeliobusSkills_k__BackingField; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockSkillToastSubMissionIDs; // 0x38
		::RPG::Client::HeliobusRedDotFilter* _HeliobusRedDotFilter_k__BackingField; // 0x40
		::System::UInt32 _TargetChallengeGroupID_k__BackingField; // 0x48
		::System::UInt32 _FirstSkillID; // 0x4C
		::System::Boolean _IsMissionDataRequired; // 0x50
		::System::Boolean _HasNewUnlockSkillToast; // 0x51
		::System::Boolean _NeedAutoTriggerChallengeEntrance_k__BackingField; // 0x52
		::System::UInt32 _SelectedHeliobusSkillID_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__CTOR_OFFSET))(this);
		}

		::System::Void EnterChallengeBattle(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_ENTERCHALLENGEBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>* GetChallengeGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::HeliobusChallengeData* GetChallengeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::HeliobusChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetChallengeCacheTeam(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGECACHETEAM_OFFSET))(this, a1);
		}

		::System::Void SaveChallengeCacheTeam(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SAVECHALLENGECACHETEAM_OFFSET))(this, a1, a2, a3);
		}

		::Proto::HeliobusChallengeLineup* GetChallengeLineupData(::System::UInt32 a1)
		{
			return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGELINEUPDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetRaidChallengeSelectedSkill(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDSKILL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRaidChallengeSelectedAvatars(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDAVATARS_OFFSET))(this, a1);
		}

		::System::Void TrySaveRaidChallengeData(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYSAVERAIDCHALLENGEDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MarkNeedAutoChallengeEnter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_MARKNEEDAUTOCHALLENGEENTER_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Boolean TryUnlockChallenges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYUNLOCKCHALLENGES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>* get_HeliobusChallenges()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSCHALLENGES_OFFSET))(this);
		}

		::System::Void set_HeliobusChallenges(::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSCHALLENGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ChallengeRaidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_CHALLENGERAIDLIST_OFFSET))(this);
		}

		::System::Void set_ChallengeRaidList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_CHALLENGERAIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetChallengeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_TARGETCHALLENGEGROUPID_OFFSET))(this);
		}

		::System::Void set_TargetChallengeGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_TARGETCHALLENGEGROUPID_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedAutoTriggerChallengeEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET))(this);
		}

		::System::Void set_NeedAutoTriggerChallengeEntrance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET))(this, a1);
		}

		::System::Void _InitHeliobusChallengeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGEDATA_OFFSET))(this);
		}

		::System::Void _InitHeliobusChallengeLineupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGELINEUPDATA_OFFSET))(this);
		}

		::System::Void _InitHeliobusChallengeRaidData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGERAIDDATA_OFFSET))(this);
		}

		::System::Void _UpdateHeliobusChallengeData(::Class_1_21C7581DFE99F091_58* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_58*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateHeliobusChallengeLineupData(::Proto::HeliobusChallengeLineup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGELINEUPDATA_OFFSET))(this, a1);
		}

		::System::Void _OnShowHeliobusOnChallengeUnlockToast(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONCHALLENGEUNLOCKTOAST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* GetNewUnlockChallengeGroupLevel()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockChallengeRaidLevel()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockSkill()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKSKILL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetChallengeUnclaimedRewardTab()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEUNCLAIMEDREWARDTAB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTimeLimitedUnclaimedReward(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETTIMELIMITEDUNCLAIMEDREWARD_OFFSET))(this, a1, a2);
		}

		::System::Void TryMarkChallengeGroupLevelSeen(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGEGROUPLEVELSEEN_OFFSET))(this, a1, a2);
		}

		::System::Void TryMarkChallengeRaidLevelSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGERAIDLEVELSEEN_OFFSET))(this, a1);
		}

		::System::Void TryMarkSkillSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYMARKSKILLSEEN_OFFSET))(this, a1);
		}

		::System::Void GetSNSCanReplyMissionPostIDList(::System::Collections::Generic::List_1<::System::UInt32>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYMISSIONPOSTIDLIST_OFFSET))(this, a1);
		}

		::System::Void GetSNSTabPostTypeList(::System::Collections::Generic::List_1<::System::UInt32>*& a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSTABPOSTTYPELIST_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSNSHeliobusCanTakeAnchorPostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSHELIOBUSCANTAKEANCHORPOSTID_OFFSET))(this);
		}

		::System::Void GetSNSCanReplyCommentPostIDList(::System::Collections::Generic::List_1<::System::UInt32>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYCOMMENTPOSTIDLIST_OFFSET))(this, a1);
		}

		::System::Void GetSNSTabCanReplyCommentPostTypeList(::System::Collections::Generic::List_1<::System::UInt32>*& a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSTABCANREPLYCOMMENTPOSTTYPELIST_OFFSET))(this, a1, a2);
		}

		::System::Void GetSNSNewPostIDList(::System::Collections::Generic::List_1<::System::UInt32>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSNEWPOSTIDLIST_OFFSET))(this, a1);
		}

		::System::Boolean GetIncomeEntryRedDot(::System::Collections::Generic::List_1<::System::UInt32>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETINCOMEENTRYREDDOT_OFFSET))(this, a1);
		}

		::System::Boolean GetIncomeUpgradeRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETINCOMEUPGRADEREDDOT_OFFSET))(this);
		}

		::RPG::Client::HeliobusRedDotFilter* get_HeliobusRedDotFilter()
		{
			return ((::RPG::Client::HeliobusRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSREDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_HeliobusRedDotFilter(::RPG::Client::HeliobusRedDotFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSREDDOTFILTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockedSkills()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETUNLOCKEDSKILLS_OFFSET))(this);
		}

		::RPG::Client::HeliobusSkillData* GetSkillData(::System::UInt32 a1)
		{
			return ((::RPG::Client::HeliobusSkillData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSKILLDATA_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnTakenSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONTAKENSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnShowHeliobusOnSkillUnlockToast(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONSKILLUNLOCKTOAST_OFFSET))(this, a1);
		}

		::System::Void _OnHeliobusRaidChallengeFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONHELIOBUSRAIDCHALLENGEFINISH_OFFSET))(this, a1);
		}

		::System::Void _InitHeliobusSkillData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSSKILLDATA_OFFSET))(this);
		}

		::System::Void _GetHeliobusSkillData(::Class_1_45BB92167AED63A0_46* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_46*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__GETHELIOBUSSKILLDATA_OFFSET))(this, a1);
		}

		::RPG::Client::HeliobusSNSData* get_HeliobusSNSData()
		{
			return ((::RPG::Client::HeliobusSNSData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSNSDATA_OFFSET))(this);
		}

		::System::Void set_HeliobusSNSData(::RPG::Client::HeliobusSNSData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusSNSData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSNSDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>* get_HeliobusSkills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSKILLS_OFFSET))(this);
		}

		::System::Void set_HeliobusSkills(::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSKILLS_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedHeliobusSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_SELECTEDHELIOBUSSKILLID_OFFSET))(this);
		}

		::System::Void set_SelectedHeliobusSkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_SELECTEDHELIOBUSSKILLID_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdHeliobusActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusInfoChangedScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSINFOCHANGEDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusSnsUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusSnsPostScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSPOSTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusSnsCommentScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSCOMMENTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusSnsReadScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSREADSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusSnsLikeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSLIKESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusUpgradeLevelScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUPGRADELEVELSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusUnlockSkillScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusSelectSkillScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSELECTSKILLSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusChallengeUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSCHALLENGEUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdHeliobusLineupUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSLINEUPUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _PrepareMainMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__PREPAREMAINMISSIONDATA_OFFSET))(this);
		}
	};
}
