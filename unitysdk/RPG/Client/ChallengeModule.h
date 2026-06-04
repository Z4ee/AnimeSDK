#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ChallengeSettleResult.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/Struct_2_BF6B29D18B16113B.h"

class Class_1_3AD2528CD53B1639_2;
class Class_1_668FE281FA72D3E8_4;
class Class_1_F1E9B9712CF54AB3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class Item; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeAutoSettleResult; }
namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChallengeInstance; }
namespace RPG::Client { class ChallengeLineupTeamSaveData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEMODULE_CLEARAUTOSETTLERESULTRECORD_OFFSET UNITYSDK_OFFSET(0xB5521C0)
#define RPG_CLIENT_CHALLENGEMODULE_CLEARCHALLENGEBOSSDIFFICULTYSTATE_OFFSET UNITYSDK_OFFSET(0xB54EB90)
#define RPG_CLIENT_CHALLENGEMODULE_CLEARCONTINUECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB557CC0)
#define RPG_CLIENT_CHALLENGEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB553930)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERBOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB54DD90)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB556200)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERPARTIALCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB54E2A0)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERSTORYCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB552A10)
#define RPG_CLIENT_CHALLENGEMODULE_FILLNEWCHALLENGEGROUPIDSTO_OFFSET UNITYSDK_OFFSET(0xB557420)
#define RPG_CLIENT_CHALLENGEMODULE_GETAUTOSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xB550FC0)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLEBOSSGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB54D9D0)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESCHEDULECHALLENGEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xB54FDD0)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESTORYGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB5527D0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB547F20)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0xB54D6E0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB545CD0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEHISTORYMAXLEVELBYTYPE_OFFSET UNITYSDK_OFFSET(0xB54F510)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGELINEUPTEAMSAVEDATA_OFFSET UNITYSDK_OFFSET(0xB557910)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEREQUIREDMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xB5570C0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCURCHALLENGESTATE_OFFSET UNITYSDK_OFFSET(0xB54A0A0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCURRENTGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0xB554C80)
#define RPG_CLIENT_CHALLENGEMODULE_GETCURSCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB54FB10)
#define RPG_CLIENT_CHALLENGEMODULE_GETGROUPLASTENTEREDCHALLENGELINEUPTEAMSAVEDATA_OFFSET UNITYSDK_OFFSET(0xB557A90)
#define RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATASBYTYPE_OFFSET UNITYSDK_OFFSET(0xB555520)
#define RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATAS_OFFSET UNITYSDK_OFFSET(0xB554FB0)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0xB54E380)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEIDFROMPREF_OFFSET UNITYSDK_OFFSET(0xB54E950)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTMEMORYCHALLENGEGROUPIDFROMCACHE_OFFSET UNITYSDK_OFFSET(0xB550E30)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTREFRESHCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB555990)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPIDFROMCACHE_OFFSET UNITYSDK_OFFSET(0xB552690)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0xB552C30)
#define RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATABYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0xB555F40)
#define RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB54FC10)
#define RPG_CLIENT_CHALLENGEMODULE_GETMEMORYAUTOSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xB550F70)
#define RPG_CLIENT_CHALLENGEMODULE_GETNEXTCHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB5547E0)
#define RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0xB550030)
#define RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB54FFE0)
#define RPG_CLIENT_CHALLENGEMODULE_GETNONESCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB54F840)
#define RPG_CLIENT_CHALLENGEMODULE_GETPREMISSIONFINISHEDCHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0xB5545D0)
#define RPG_CLIENT_CHALLENGEMODULE_GETSORTEDAVAILABLEMEMORYCHALLENGEGROUPS_OFFSET UNITYSDK_OFFSET(0xB5503B0)
#define RPG_CLIENT_CHALLENGEMODULE_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0xB5577F0)
#define RPG_CLIENT_CHALLENGEMODULE_GET_BOSSGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xB54D5F0)
#define RPG_CLIENT_CHALLENGEMODULE_GET_CHALLENGEHISTORY_OFFSET UNITYSDK_OFFSET(0xB553210)
#define RPG_CLIENT_CHALLENGEMODULE_GET_CURRENTCHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB553200)
#define RPG_CLIENT_CHALLENGEMODULE_GET_LASTCHALLENGEUNLOCKGROUPID_OFFSET UNITYSDK_OFFSET(0xB550A00)
#define RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xB54F350)
#define RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYHISTORYMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB54F440)
#define RPG_CLIENT_CHALLENGEMODULE_GET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET UNITYSDK_OFFSET(0xB54F5B0)
#define RPG_CLIENT_CHALLENGEMODULE_GET_STORYGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xB5525A0)
#define RPG_CLIENT_CHALLENGEMODULE_HASBOSSREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0xB54E790)
#define RPG_CLIENT_CHALLENGEMODULE_HASMEMORYREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0xB550740)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWBOSSCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0xB54E5A0)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWRESIDENTGROUPUNLOCK_OFFSET UNITYSDK_OFFSET(0xB550900)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWSCHEDULEMEMORYGROUPUNLOCK_OFFSET UNITYSDK_OFFSET(0xB550BF0)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWSTORYCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0xB552E50)
#define RPG_CLIENT_CHALLENGEMODULE_HASSTORYREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0xB553040)
#define RPG_CLIENT_CHALLENGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB5533C0)
#define RPG_CLIENT_CHALLENGEMODULE_ISCHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0xB54D8B0)
#define RPG_CLIENT_CHALLENGEMODULE_ISNEEDSHOWUPDATEHINT_OFFSET UNITYSDK_OFFSET(0xB5572C0)
#define RPG_CLIENT_CHALLENGEMODULE_LEAVECHALLENGE_OFFSET UNITYSDK_OFFSET(0xB556370)
#define RPG_CLIENT_CHALLENGEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB5538B0)
#define RPG_CLIENT_CHALLENGEMODULE_REFRESHALLCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB5518D0)
#define RPG_CLIENT_CHALLENGEMODULE_RESETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xB54A5B0)
#define RPG_CLIENT_CHALLENGEMODULE_SAVECHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0xB54D790)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELASTBOSSCHALLENGEIDTOPREF_OFFSET UNITYSDK_OFFSET(0xB54E9B0)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELASTMEMORYCHALLENGEGROUPIDTOCACHE_OFFSET UNITYSDK_OFFSET(0xB550ED0)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELASTSTORYCHALLENGEGROUPIDTOCACHE_OFFSET UNITYSDK_OFFSET(0xB552730)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0xB557890)
#define RPG_CLIENT_CHALLENGEMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0xB554350)
#define RPG_CLIENT_CHALLENGEMODULE_SETCONTINUECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB557C00)
#define RPG_CLIENT_CHALLENGEMODULE_SETDIFFICULTYSTATEBYCHALLENGEBOSSDATA_OFFSET UNITYSDK_OFFSET(0xB54EA10)
#define RPG_CLIENT_CHALLENGEMODULE_SET_LASTCHALLENGEUNLOCKGROUPID_OFFSET UNITYSDK_OFFSET(0xB553220)
#define RPG_CLIENT_CHALLENGEMODULE_SET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET UNITYSDK_OFFSET(0xB54F7B0)
#define RPG_CLIENT_CHALLENGEMODULE_TAKECUMULATIVEREWARD_OFFSET UNITYSDK_OFFSET(0xB5564C0)
#define RPG_CLIENT_CHALLENGEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB556550)
#define RPG_CLIENT_CHALLENGEMODULE__ADDCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB55A480)
#define RPG_CLIENT_CHALLENGEMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET UNITYSDK_OFFSET(0xB5598E0)
#define RPG_CLIENT_CHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB554280)
#define RPG_CLIENT_CHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB553B20)
#define RPG_CLIENT_CHALLENGEMODULE__CLEARCURCHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB553A90)
#define RPG_CLIENT_CHALLENGEMODULE__CONTINUECHALLENGE_OFFSET UNITYSDK_OFFSET(0xB5565A0)
#define RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xB55A5A0)
#define RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB55A3C0)
#define RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB559FB0)
#define RPG_CLIENT_CHALLENGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5532B0)
#define RPG_CLIENT_CHALLENGEMODULE__DESERIALIZEFROMHASHSET_OFFSET UNITYSDK_OFFSET(0xB551F10)
#define RPG_CLIENT_CHALLENGEMODULE__FILLNEWCHALLENGEGROUPIDSBYTYPETO_OFFSET UNITYSDK_OFFSET(0xB5574A0)
#define RPG_CLIENT_CHALLENGEMODULE__GETAUTOSETTLERESULTPREFHASHSET_OFFSET UNITYSDK_OFFSET(0xB551D90)
#define RPG_CLIENT_CHALLENGEMODULE__GETCONTINUEMAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0xB55B0E0)
#define RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUEMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xB55B200)
#define RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xB55B3E0)
#define RPG_CLIENT_CHALLENGEMODULE__GETSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xB551B60)
#define RPG_CLIENT_CHALLENGEMODULE__ISSKIPCONTINUE_OFFSET UNITYSDK_OFFSET(0xB55A7D0)
#define RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEDATACONFIG_OFFSET UNITYSDK_OFFSET(0xB553770)
#define RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEGROUPDATACONFIG_OFFSET UNITYSDK_OFFSET(0xB553460)
#define RPG_CLIENT_CHALLENGEMODULE__NOTIFYCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0xB5519C0)
#define RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGEBOSSPHASESETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0xB54EC70)
#define RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGECHANGETEAM_OFFSET UNITYSDK_OFFSET(0xB559E60)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGELINEUPNOTIFY_OFFSET UNITYSDK_OFFSET(0xB559C90)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGESETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0xB551050)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGEGROUPSTATISTICSSCRSP_OFFSET UNITYSDK_OFFSET(0xB55A300)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xB557D20)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCURCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xB5581C0)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDLEAVECHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xB559420)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xB5587A0)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTPARTIALCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xB5590B0)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDTAKECHALLENGEREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB5595C0)
#define RPG_CLIENT_CHALLENGEMODULE__ONENTERCHALLENGENEXTPHASESCRSP_OFFSET UNITYSDK_OFFSET(0xB54F150)
#define RPG_CLIENT_CHALLENGEMODULE__ONRESTARTCHALLENGEPHASESCRSP_OFFSET UNITYSDK_OFFSET(0xB54F250)
#define RPG_CLIENT_CHALLENGEMODULE__PROCESSAUTOSETTLE_OFFSET UNITYSDK_OFFSET(0xB5511E0)
#define RPG_CLIENT_CHALLENGEMODULE__RECOVERCURCHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB558690)
#define RPG_CLIENT_CHALLENGEMODULE__RESETTLECHALLENGE_B__38_0_OFFSET UNITYSDK_OFFSET(0xB55B5E0)
#define RPG_CLIENT_CHALLENGEMODULE__SAVELASTENTEREDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB558D70)
#define RPG_CLIENT_CHALLENGEMODULE__SERIALIZETOHASHSET_OFFSET UNITYSDK_OFFSET(0xB552250)
#define RPG_CLIENT_CHALLENGEMODULE__SETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xB5516F0)
#define RPG_CLIENT_CHALLENGEMODULE__SETUPLINEUPAVATARLIST_OFFSET UNITYSDK_OFFSET(0xB54DFB0)
#define RPG_CLIENT_CHALLENGEMODULE__SHOWDETAILPAGE_OFFSET UNITYSDK_OFFSET(0xB55AC10)
#define RPG_CLIENT_CHALLENGEMODULE__TRYSHOWCHALLENGERESULT_OFFSET UNITYSDK_OFFSET(0xB556DC0)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB55B9D0)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB55B8F0)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB55B970)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB55BA40)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB55B9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeModule_TypeDefinitionIndex = 59043;

	class ChallengeModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ChallengeAutoSettleResult* _AutoSettleCacheData; // 0x10
		::Class_1_F1E9B9712CF54AB3* _ChallengeHistory_k__BackingField; // 0x18
		::RPG::Client::Promises::Promise* _LeaveChallengePromise; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengeGroupType, ::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*>* _ChallengeGroupDataDict; // 0x28
		::RPG::Client::Promises::Promise* _RefreshAllChallengePromise; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* _NoneScheduleChallengeGroupDatas; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengeData*>* _AllChallengeDatas; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise*>* _GetCurChallengePromiseList; // 0x48
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RequiredMainMissionIDs; // 0x50
		::RPG::Client::ChallengeInstance* _CurrentChallengeInstance; // 0x58
		::Struct_2_BF6B29D18B16113B ContinueChallengeData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* get_BossGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_BOSSGROUPDATALIST_OFFSET))(this);
		}

		::System::Void SaveChallengeBossShowedMonsterGuide(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVECHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsChallengeBossShowedMonsterGuide(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ISCHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableBossGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLEBOSSGROUPDATA_OFFSET))(this);
		}

		::System::Void EnterBossChallenge(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a4, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERBOSSCHALLENGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EnterPartialChallenge(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERPARTIALCHALLENGE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetLastBossChallengeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEGROUPID_OFFSET))(this);
		}

		::System::Boolean HasNewBossChallengeGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASNEWBOSSCHALLENGEGROUP_OFFSET))(this);
		}

		::System::Boolean HasBossRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASBOSSREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::UInt32 GetLastBossChallengeIDFromPref()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEIDFROMPREF_OFFSET))(this);
		}

		::System::Void SaveLastBossChallengeIDToPref(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELASTBOSSCHALLENGEIDTOPREF_OFFSET))(this, a1);
		}

		::System::Void SetDifficultyStateByChallengeBossData(::RPG::Client::ChallengeBossData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SETDIFFICULTYSTATEBYCHALLENGEBOSSDATA_OFFSET))(this, a1);
		}

		::System::Void ClearChallengeBossDifficultyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_CLEARCHALLENGEBOSSDIFFICULTYSTATE_OFFSET))(this);
		}

		::System::Void _OnChallengeBossPhaseSettleNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGEBOSSPHASESETTLENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterChallengeNextPhaseScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONENTERCHALLENGENEXTPHASESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRestartChallengePhaseScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONRESTARTCHALLENGEPHASESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* get_MemoryGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYGROUPDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_MemoryHistoryMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYHISTORYMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_SeenChallengeMemoryScheduleUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET))(this);
		}

		::System::Void set_SeenChallengeMemoryScheduleUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetNoneScheduleChallengeGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNONESCHEDULECHALLENGEGROUPDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetCurScheduleChallengeGroupData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCURSCHEDULECHALLENGEGROUPDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetLatestScheduleChallengeGroupData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableScheduleChallengeGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESCHEDULECHALLENGEGROUPDATALIST_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetNextScheduleChallengeGroupData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetSortedAvailableMemoryChallengeGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETSORTEDAVAILABLEMEMORYCHALLENGEGROUPS_OFFSET))(this);
		}

		::System::Boolean HasMemoryRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASMEMORYREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean HasNewResidentGroupUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASNEWRESIDENTGROUPUNLOCK_OFFSET))(this);
		}

		::System::Boolean HasNewScheduleMemoryGroupUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASNEWSCHEDULEMEMORYGROUPUNLOCK_OFFSET))(this);
		}

		::System::UInt32 GetLastMemoryChallengeGroupIDFromCache()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTMEMORYCHALLENGEGROUPIDFROMCACHE_OFFSET))(this);
		}

		::System::Void SaveLastMemoryChallengeGroupIDToCache(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELASTMEMORYCHALLENGEGROUPIDTOCACHE_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeAutoSettleResult* GetMemoryAutoSettleResult()
		{
			return ((::RPG::Client::ChallengeAutoSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETMEMORYAUTOSETTLERESULT_OFFSET))(this);
		}

		::System::Void _OnCmdChallengeSettleNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGESETTLENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SettleChallenge(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SETTLECHALLENGE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ReSettleChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_RESETTLECHALLENGE_OFFSET))(this);
		}

		::System::Void _NotifyChallengeFinish(::RPG::Client::ChallengeSettleResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeSettleResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__NOTIFYCHALLENGEFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeSettleResult _GetSettleResult()
		{
			return ((::RPG::Client::ChallengeSettleResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETSETTLERESULT_OFFSET))(this);
		}

		::RPG::Client::ChallengeAutoSettleResult* GetAutoSettleResult(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::ChallengeAutoSettleResult*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAUTOSETTLERESULT_OFFSET))(this, a1);
		}

		::System::Void ClearAutoSettleResultRecord(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_CLEARAUTOSETTLERESULTRECORD_OFFSET))(this, a1);
		}

		::System::Void _ProcessAutoSettle(::RPG::GameCore::ChallengeGroupType a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__PROCESSAUTOSETTLE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ChallengeAutoSettleResult* _DeSerializeFromHashset(::RPG::Client::PrefHashSet_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::ChallengeAutoSettleResult*(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__DESERIALIZEFROMHASHSET_OFFSET))(this, a1);
		}

		::System::Void _SerializeToHashset(::RPG::Client::PrefHashSet_1<::System::UInt32>*& a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*&, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SERIALIZETOHASHSET_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* _GetAutoSettleResultPrefHashSet(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETAUTOSETTLERESULTPREFHASHSET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* get_StoryGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_STORYGROUPDATALIST_OFFSET))(this);
		}

		::System::UInt32 GetLastStoryChallengeGroupIDFromCache()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPIDFROMCACHE_OFFSET))(this);
		}

		::System::Void SaveLastStoryChallengeGroupIDToCache(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELASTSTORYCHALLENGEGROUPIDTOCACHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableStoryGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESTORYGROUPDATA_OFFSET))(this);
		}

		::System::Void EnterStoryChallenge(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a4, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERSTORYCHALLENGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 GetLastStoryChallengeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPID_OFFSET))(this);
		}

		::System::Boolean HasNewStoryChallengeGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASNEWSTORYCHALLENGEGROUP_OFFSET))(this);
		}

		::System::Boolean HasStoryRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_HASSTORYREWARDNOTTAKEN_OFFSET))(this);
		}

		::RPG::Client::ChallengeInstance* get_CurrentChallengeInstance()
		{
			return ((::RPG::Client::ChallengeInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_CURRENTCHALLENGEINSTANCE_OFFSET))(this);
		}

		::Class_1_F1E9B9712CF54AB3* get_ChallengeHistory()
		{
			return ((::Class_1_F1E9B9712CF54AB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_CHALLENGEHISTORY_OFFSET))(this);
		}

		::System::UInt32 get_LastChallengeUnlockGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_LASTCHALLENGEUNLOCKGROUPID_OFFSET))(this);
		}

		::System::Void set_LastChallengeUnlockGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SET_LASTCHALLENGEUNLOCKGROUPID_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>* GetPreMissionFinishedChallengeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETPREMISSIONFINISHEDCHALLENGEDATAS_OFFSET))(this);
		}

		::RPG::Client::ChallengeData* GetChallengeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetChallengeGroupDataByType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATABYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeGroupData* GetNextScheduleChallengeGroupDataByType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATABYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeGroupData* GetNextChallengeGroupData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNEXTCHALLENGEGROUPDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetCurrentGroupDataByType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCURRENTGROUPDATABYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetInScheduleGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetInScheduleGroupDatasByType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATASBYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeGroupData* GetChallengeGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetChallengeHistoryMaxLevelByType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEHISTORYMAXLEVELBYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeGroupData* GetLastRefreshChallengeData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTREFRESHCHALLENGEDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetLatestScheduleChallengeGroupDataByGroupType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATABYGROUPTYPE_OFFSET))(this, a1);
		}

		::System::Void EnterChallenge(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERCHALLENGE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::Promise* LeaveChallenge()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_LEAVECHALLENGE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GetCurChallengeState()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCURCHALLENGESTATE_OFFSET))(this);
		}

		::System::Void TakeCumulativeReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_TAKECUMULATIVEREWARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* RefreshAllChallengeData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_REFRESHALLCHALLENGEDATA_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetChallengeRequiredMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEREQUIREDMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Boolean IsNeedShowUpdateHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ISNEEDSHOWUPDATEHINT_OFFSET))(this);
		}

		::System::Void FillNewChallengeGroupIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_FILLNEWCHALLENGEGROUPIDSTO_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GetUpgradeAvailableAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETUPGRADEAVAILABLEAVATAR_OFFSET))(this, a1);
		}

		::System::Void SaveLineupSaveData(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELINEUPSAVEDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::ChallengeLineupTeamSaveData* GetChallengeLineupTeamSaveData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeLineupTeamSaveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGELINEUPTEAMSAVEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeLineupTeamSaveData* GetGroupLastEnteredChallengeLineupTeamSaveData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeLineupTeamSaveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETGROUPLASTENTEREDCHALLENGELINEUPTEAMSAVEDATA_OFFSET))(this, a1);
		}

		::System::Void SetContinueChallengeData(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SETCONTINUECHALLENGEDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ClearContinueChallengeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_CLEARCONTINUECHALLENGEDATA_OFFSET))(this);
		}

		::System::Void _OnCmdGetChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetCurChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCURCHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdStartChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTCHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdStartPartialChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTPARTIALCHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLeaveChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDLEAVECHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeChallengeRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDTAKECHALLENGEREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChallengeLineupNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGELINEUPNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SaveLastEnteredChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SAVELASTENTEREDCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Void _AddDisplayItemDatasByRewards(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChallengeChangeTeam(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGECHANGETEAM_OFFSET))(this, a1);
		}

		::System::Void _ClearCurChallengeInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CLEARCURCHALLENGEINSTANCE_OFFSET))(this);
		}

		::System::Void _RecoverCurChallengeInstance(::Class_1_3AD2528CD53B1639_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__RECOVERCURCHALLENGEINSTANCE_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeInstance* _CreateChallengeInstance(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _OnCmdGetChallengeGroupStatisticsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGEGROUPSTATISTICSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _FillNewChallengeGroupIDsByTypeTo(::RPG::GameCore::ChallengeGroupType a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__FILLNEWCHALLENGEGROUPIDSBYTYPETO_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadChallengeGroupDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEGROUPDATACONFIG_OFFSET))(this);
		}

		::System::Void _LoadChallengeDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEDATACONFIG_OFFSET))(this);
		}

		::RPG::Client::ChallengeData* _CreateChallengeData(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeGroupData* _CreateChallengeGroupData(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEGROUPDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _AddChallengeData(::RPG::GameCore::ChallengeMazeConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDCHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::Void _ContinueChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CONTINUECHALLENGE_OFFSET))(this);
		}

		::System::Void _ShowDetailPage(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SHOWDETAILPAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsSkipContinue(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ISSKIPCONTINUE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetContinueMapEntranceID(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETCONTINUEMAPENTRANCEID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetForbidContinueMainMissionIDs(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUEMAINMISSIONIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetForbidContinueSubmissionIDs(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUESUBMISSIONIDS_OFFSET))(this, a1);
		}

		::System::Void _TryShowChallengeResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__TRYSHOWCHALLENGERESULT_OFFSET))(this);
		}

		::System::Void _SetupLineupAvatarList(::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_4*>* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_4*>*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SETUPLINEUPAVATARLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _ReSettleChallenge_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__RESETTLECHALLENGE_B__38_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
