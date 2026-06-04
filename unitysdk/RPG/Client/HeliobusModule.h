#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_45BB92167AED63A0_39;
class Class_1_6BD41257D23618B4_10;
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

#define RPG_CLIENT_HELIOBUSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD13D80)
#define RPG_CLIENT_HELIOBUSMODULE_ENTERCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xBD0DA60)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGECACHETEAM_OFFSET UNITYSDK_OFFSET(0xBD0DED0)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xBD0DDD0)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0xBD0DBA0)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGELINEUPDATA_OFFSET UNITYSDK_OFFSET(0xBD0E240)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEUNCLAIMEDREWARDTAB_OFFSET UNITYSDK_OFFSET(0xBD107F0)
#define RPG_CLIENT_HELIOBUSMODULE_GETINCOMEENTRYREDDOT_OFFSET UNITYSDK_OFFSET(0xBD12E00)
#define RPG_CLIENT_HELIOBUSMODULE_GETINCOMEUPGRADEREDDOT_OFFSET UNITYSDK_OFFSET(0xBD12FD0)
#define RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0xBD0FC20)
#define RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET UNITYSDK_OFFSET(0xBD101B0)
#define RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKSKILL_OFFSET UNITYSDK_OFFSET(0xBD105F0)
#define RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDAVATARS_OFFSET UNITYSDK_OFFSET(0xBD0E590)
#define RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDSKILL_OFFSET UNITYSDK_OFFSET(0xBD0E480)
#define RPG_CLIENT_HELIOBUSMODULE_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0xBD13620)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYCOMMENTPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0xBD124C0)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYMISSIONPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0xBD11720)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSHELIOBUSCANTAKEANCHORPOSTID_OFFSET UNITYSDK_OFFSET(0xBD12350)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSNEWPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0xBD12B90)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSTABCANREPLYCOMMENTPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0xBD12810)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSTABPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0xBD11FD0)
#define RPG_CLIENT_HELIOBUSMODULE_GETTIMELIMITEDUNCLAIMEDREWARD_OFFSET UNITYSDK_OFFSET(0xBD10AB0)
#define RPG_CLIENT_HELIOBUSMODULE_GETUNLOCKEDSKILLS_OFFSET UNITYSDK_OFFSET(0xBD13440)
#define RPG_CLIENT_HELIOBUSMODULE_GET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0xBD0EF30)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSCHALLENGES_OFFSET UNITYSDK_OFFSET(0xBD0EF10)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xBD131C0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSKILLS_OFFSET UNITYSDK_OFFSET(0xBD14A80)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSNSDATA_OFFSET UNITYSDK_OFFSET(0xBD14A60)
#define RPG_CLIENT_HELIOBUSMODULE_GET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET UNITYSDK_OFFSET(0xBD0EF70)
#define RPG_CLIENT_HELIOBUSMODULE_GET_SELECTEDHELIOBUSSKILLID_OFFSET UNITYSDK_OFFSET(0xBD14AA0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_TARGETCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0xBD0EF50)
#define RPG_CLIENT_HELIOBUSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBD13720)
#define RPG_CLIENT_HELIOBUSMODULE_MARKNEEDAUTOCHALLENGEENTER_OFFSET UNITYSDK_OFFSET(0xBD0EC60)
#define RPG_CLIENT_HELIOBUSMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBD13F50)
#define RPG_CLIENT_HELIOBUSMODULE_SAVECHALLENGECACHETEAM_OFFSET UNITYSDK_OFFSET(0xBD0E2F0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0xBD0EF40)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSCHALLENGES_OFFSET UNITYSDK_OFFSET(0xBD0EF20)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xBD131D0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSKILLS_OFFSET UNITYSDK_OFFSET(0xBD14A90)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSNSDATA_OFFSET UNITYSDK_OFFSET(0xBD14A70)
#define RPG_CLIENT_HELIOBUSMODULE_SET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET UNITYSDK_OFFSET(0xBD0EF80)
#define RPG_CLIENT_HELIOBUSMODULE_SET_SELECTEDHELIOBUSSKILLID_OFFSET UNITYSDK_OFFSET(0xBD14AB0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_TARGETCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0xBD0EF60)
#define RPG_CLIENT_HELIOBUSMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xBD0ECB0)
#define RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGEGROUPLEVELSEEN_OFFSET UNITYSDK_OFFSET(0xBD111B0)
#define RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGERAIDLEVELSEEN_OFFSET UNITYSDK_OFFSET(0xBD11460)
#define RPG_CLIENT_HELIOBUSMODULE_TRYMARKSKILLSEEN_OFFSET UNITYSDK_OFFSET(0xBD11590)
#define RPG_CLIENT_HELIOBUSMODULE_TRYSAVERAIDCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xBD0E7F0)
#define RPG_CLIENT_HELIOBUSMODULE_TRYUNLOCKCHALLENGES_OFFSET UNITYSDK_OFFSET(0xBD0ED40)
#define RPG_CLIENT_HELIOBUSMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD13F90)
#define RPG_CLIENT_HELIOBUSMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD14AC0)
#define RPG_CLIENT_HELIOBUSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD131E0)
#define RPG_CLIENT_HELIOBUSMODULE__GETHELIOBUSSKILLDATA_OFFSET UNITYSDK_OFFSET(0xBD14710)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xBD0EF90)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGELINEUPDATA_OFFSET UNITYSDK_OFFSET(0xBD0F1F0)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGERAIDDATA_OFFSET UNITYSDK_OFFSET(0xBD0F490)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSSKILLDATA_OFFSET UNITYSDK_OFFSET(0xBD13970)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xBD15220)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSCHALLENGEUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBD175D0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSINFOCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBD168E0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSLINEUPUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBD17650)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSELECTSKILLSCRSP_OFFSET UNITYSDK_OFFSET(0xBD17550)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSCOMMENTSCRSP_OFFSET UNITYSDK_OFFSET(0xBD16D00)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSLIKESCRSP_OFFSET UNITYSDK_OFFSET(0xBD16FE0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSPOSTSCRSP_OFFSET UNITYSDK_OFFSET(0xBD16AF0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSREADSCRSP_OFFSET UNITYSDK_OFFSET(0xBD16DC0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBD16A60)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBD17310)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUPGRADELEVELSCRSP_OFFSET UNITYSDK_OFFSET(0xBD17220)
#define RPG_CLIENT_HELIOBUSMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xBD14270)
#define RPG_CLIENT_HELIOBUSMODULE__ONHELIOBUSRAIDCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0xBD14520)
#define RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONCHALLENGEUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xBD0F980)
#define RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONSKILLUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xBD14490)
#define RPG_CLIENT_HELIOBUSMODULE__ONTAKENSUBMISSION_OFFSET UNITYSDK_OFFSET(0xBD143C0)
#define RPG_CLIENT_HELIOBUSMODULE__PREPAREMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xBD161B0)
#define RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xBD0F690)
#define RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGELINEUPDATA_OFFSET UNITYSDK_OFFSET(0xBD0F8C0)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD17750)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBD176D0)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBD17760)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD177C0)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD17820)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusModule_TypeDefinitionIndex = 61398;

	class HeliobusModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::HeliobusRedDotFilter* _HeliobusRedDotFilter_k__BackingField; // 0x10
		::RPG::Client::HeliobusSNSData* _HeliobusSNSData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ChallengeRaidList_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockSkillToastSubMissionIDs; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Proto::HeliobusChallengeLineup*>* _ChallengeLineupDataDict; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>* _HeliobusChallenges_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>* _HeliobusSkills_k__BackingField; // 0x40
		::System::Boolean _IsMissionDataRequired; // 0x48
		::System::Boolean _HasNewUnlockSkillToast; // 0x49
		::System::Boolean _NeedAutoTriggerChallengeEntrance_k__BackingField; // 0x4A
		::System::UInt32 _SelectedHeliobusSkillID_k__BackingField; // 0x4C
		::System::UInt32 _TargetChallengeGroupID_k__BackingField; // 0x50
		::System::UInt32 _FirstSkillID; // 0x54

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

		::System::Void _UpdateHeliobusChallengeData(::Class_1_6BD41257D23618B4_10* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_10*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGEDATA_OFFSET))(this, a1, a2);
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

		::System::Void _GetHeliobusSkillData(::Class_1_45BB92167AED63A0_39* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__GETHELIOBUSSKILLDATA_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
