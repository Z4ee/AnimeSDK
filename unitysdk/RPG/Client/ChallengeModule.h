#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ChallengeSettleResult.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/Struct_2_26800DB1E21B77D0.h"

class Class_1_3AD2528CD53B1639_3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class Item; }
namespace RPG::Client { class ChallengeAutoSettleResult; }
namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChallengeInstance; }
namespace RPG::Client { class ChallengeLineupSaveData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEMODULE_CLEARAUTOSETTLERESULTRECORD_OFFSET UNITYSDK_OFFSET(0x92D0530)
#define RPG_CLIENT_CHALLENGEMODULE_CLEARCHALLENGEBOSSDIFFICULTYSTATE_OFFSET UNITYSDK_OFFSET(0x92CD1A0)
#define RPG_CLIENT_CHALLENGEMODULE_CLEARCONTINUECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x92D82A0)
#define RPG_CLIENT_CHALLENGEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92D1840)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERBOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92CC610)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92D3EE0)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERPARTIALCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92CC8B0)
#define RPG_CLIENT_CHALLENGEMODULE_ENTERSTORYCHALLENGE_OFFSET UNITYSDK_OFFSET(0x92D0B50)
#define RPG_CLIENT_CHALLENGEMODULE_FILLNEWCHALLENGEGROUPIDSTO_OFFSET UNITYSDK_OFFSET(0x92D5580)
#define RPG_CLIENT_CHALLENGEMODULE_GETALREADYGOTSTARSNUM_OFFSET UNITYSDK_OFFSET(0x92D3DC0)
#define RPG_CLIENT_CHALLENGEMODULE_GETAUTOSETTLERESULT_OFFSET UNITYSDK_OFFSET(0x92CEF00)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLEBOSSGROUPDATA_OFFSET UNITYSDK_OFFSET(0x92CC160)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLECHALLENGEGROUPS_OFFSET UNITYSDK_OFFSET(0x92CE380)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESCHEDULECHALLENGEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x92C38F0)
#define RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESTORYGROUPDATA_OFFSET UNITYSDK_OFFSET(0x92C3CD0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x92D22E0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x92B9F00)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x92C35B0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x92D23C0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x92C7700)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEHISTORYMAXLEVELBYTYPE_OFFSET UNITYSDK_OFFSET(0x92C0A50)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGELINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x92D8D60)
#define RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEREQUIREDMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x92D5230)
#define RPG_CLIENT_CHALLENGEMODULE_GETCURCHALLENGESTATE_OFFSET UNITYSDK_OFFSET(0x92C81E0)
#define RPG_CLIENT_CHALLENGEMODULE_GETCURRENTGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x92D2A00)
#define RPG_CLIENT_CHALLENGEMODULE_GETCURSCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x92CDC30)
#define RPG_CLIENT_CHALLENGEMODULE_GETFIRSTENDGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x92D39C0)
#define RPG_CLIENT_CHALLENGEMODULE_GETGROUPLASTENTEREDCHALLENGELINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x92D8F10)
#define RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATASBYTYPE_OFFSET UNITYSDK_OFFSET(0x92D3290)
#define RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x92D2DB0)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x92CC990)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTBOSSCHALLENGEIDFROMPREF_OFFSET UNITYSDK_OFFSET(0x92CCF60)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTMEMORYCHALLENGEGROUPIDFROMCACHE_OFFSET UNITYSDK_OFFSET(0x92CEC70)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTREFRESHCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x92BD6A0)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPIDFROMCACHE_OFFSET UNITYSDK_OFFSET(0x92D0910)
#define RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x92D0DF0)
#define RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATABYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x92D3700)
#define RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x92CDD80)
#define RPG_CLIENT_CHALLENGEMODULE_GETMEMORYAUTOSETTLERESULT_OFFSET UNITYSDK_OFFSET(0x92CEDB0)
#define RPG_CLIENT_CHALLENGEMODULE_GETNEXTCHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x92D2400)
#define RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x92CDFB0)
#define RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x92CDF60)
#define RPG_CLIENT_CHALLENGEMODULE_GETNONESCHEDULECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x92CD8E0)
#define RPG_CLIENT_CHALLENGEMODULE_GETPREMISSIONFINISHEDCHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x92D20D0)
#define RPG_CLIENT_CHALLENGEMODULE_GETTOTALSTARSNUM_OFFSET UNITYSDK_OFFSET(0x92D3C80)
#define RPG_CLIENT_CHALLENGEMODULE_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x92D7CE0)
#define RPG_CLIENT_CHALLENGEMODULE_GET_BOSSGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x92CC510)
#define RPG_CLIENT_CHALLENGEMODULE_GET_CURRENTCHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x92D90A0)
#define RPG_CLIENT_CHALLENGEMODULE_GET_LASTCHALLENGEUNLOCKGROUPID_OFFSET UNITYSDK_OFFSET(0x92CE870)
#define RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x92CDB30)
#define RPG_CLIENT_CHALLENGEMODULE_GET_MEMORYHISTORYMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x92CEF90)
#define RPG_CLIENT_CHALLENGEMODULE_GET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET UNITYSDK_OFFSET(0x92CF090)
#define RPG_CLIENT_CHALLENGEMODULE_GET_STORYGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x92D0A50)
#define RPG_CLIENT_CHALLENGEMODULE_HASBOSSREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x92CCD80)
#define RPG_CLIENT_CHALLENGEMODULE_HASMEMORYREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x92CE570)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWBOSSCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0x92CCBA0)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWRESIDENTGROUPUNLOCK_OFFSET UNITYSDK_OFFSET(0x92CE780)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWSCHEDULEMEMORYGROUPUNLOCK_OFFSET UNITYSDK_OFFSET(0x92CEA60)
#define RPG_CLIENT_CHALLENGEMODULE_HASNEWSTORYCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0x92D1000)
#define RPG_CLIENT_CHALLENGEMODULE_HASSTORYREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x92D11E0)
#define RPG_CLIENT_CHALLENGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x92D13C0)
#define RPG_CLIENT_CHALLENGEMODULE_ISCHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0x92CC040)
#define RPG_CLIENT_CHALLENGEMODULE_ISNEEDSHOWUPDATEHINT_OFFSET UNITYSDK_OFFSET(0x92D5420)
#define RPG_CLIENT_CHALLENGEMODULE_LEAVECHALLENGE_OFFSET UNITYSDK_OFFSET(0x92D3F90)
#define RPG_CLIENT_CHALLENGEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x92D1780)
#define RPG_CLIENT_CHALLENGEMODULE_REFRESHALLCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x92CFBE0)
#define RPG_CLIENT_CHALLENGEMODULE_RESETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x92C8660)
#define RPG_CLIENT_CHALLENGEMODULE_SAVECHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0x92CBF20)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELASTBOSSCHALLENGEIDTOPREF_OFFSET UNITYSDK_OFFSET(0x92CCFC0)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELASTMEMORYCHALLENGEGROUPIDTOCACHE_OFFSET UNITYSDK_OFFSET(0x92CED10)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELASTSTORYCHALLENGEGROUPIDTOCACHE_OFFSET UNITYSDK_OFFSET(0x92D09B0)
#define RPG_CLIENT_CHALLENGEMODULE_SAVELINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x92D8CE0)
#define RPG_CLIENT_CHALLENGEMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0x92D1F50)
#define RPG_CLIENT_CHALLENGEMODULE_SETCONTINUECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x92D8210)
#define RPG_CLIENT_CHALLENGEMODULE_SETDIFFICULTYSTATEBYCHALLENGEBOSSDATA_OFFSET UNITYSDK_OFFSET(0x92CD020)
#define RPG_CLIENT_CHALLENGEMODULE_SET_LASTCHALLENGEUNLOCKGROUPID_OFFSET UNITYSDK_OFFSET(0x92D90B0)
#define RPG_CLIENT_CHALLENGEMODULE_SET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET UNITYSDK_OFFSET(0x92CF290)
#define RPG_CLIENT_CHALLENGEMODULE_TAKECUMULATIVEREWARD_OFFSET UNITYSDK_OFFSET(0x92D40E0)
#define RPG_CLIENT_CHALLENGEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x92D4170)
#define RPG_CLIENT_CHALLENGEMODULE__ADDCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x92D7F80)
#define RPG_CLIENT_CHALLENGEMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET UNITYSDK_OFFSET(0x92D7320)
#define RPG_CLIENT_CHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x92D1D20)
#define RPG_CLIENT_CHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x92D1A60)
#define RPG_CLIENT_CHALLENGEMODULE__CLEARCURCHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x92D19C0)
#define RPG_CLIENT_CHALLENGEMODULE__CONTINUECHALLENGE_OFFSET UNITYSDK_OFFSET(0x92D41C0)
#define RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x92D8100)
#define RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x92D7E40)
#define RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x92D7A00)
#define RPG_CLIENT_CHALLENGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x92D1DD0)
#define RPG_CLIENT_CHALLENGEMODULE__DESERIALIZEFROMHASHSET_OFFSET UNITYSDK_OFFSET(0x92D0220)
#define RPG_CLIENT_CHALLENGEMODULE__FILLNEWCHALLENGEGROUPIDSBYTYPETO_OFFSET UNITYSDK_OFFSET(0x92D5600)
#define RPG_CLIENT_CHALLENGEMODULE__GETAUTOSETTLERESULTPREFHASHSET_OFFSET UNITYSDK_OFFSET(0x92D00A0)
#define RPG_CLIENT_CHALLENGEMODULE__GETCONTINUEMAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x92D87A0)
#define RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUEMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x92D88C0)
#define RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x92D8AC0)
#define RPG_CLIENT_CHALLENGEMODULE__GETSETTLERESULT_OFFSET UNITYSDK_OFFSET(0x92CFE60)
#define RPG_CLIENT_CHALLENGEMODULE__ISSKIPCONTINUE_OFFSET UNITYSDK_OFFSET(0x92D8300)
#define RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEDATACONFIG_OFFSET UNITYSDK_OFFSET(0x92D16A0)
#define RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEGROUPDATACONFIG_OFFSET UNITYSDK_OFFSET(0x92D1460)
#define RPG_CLIENT_CHALLENGEMODULE__NOTIFYCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x92CFCD0)
#define RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGEBOSSPHASESETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0x92CD280)
#define RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGECHANGETEAM_OFFSET UNITYSDK_OFFSET(0x92D7750)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGELINEUPNOTIFY_OFFSET UNITYSDK_OFFSET(0x92D7860)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGESETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0x92CF320)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGEGROUPSTATISTICSSCRSP_OFFSET UNITYSDK_OFFSET(0x92D7C20)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x92D5960)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCURCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x92D5C60)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDLEAVECHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x92D6F30)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x92D6270)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTPARTIALCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x92D6BC0)
#define RPG_CLIENT_CHALLENGEMODULE__ONCMDTAKECHALLENGEREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x92D70D0)
#define RPG_CLIENT_CHALLENGEMODULE__ONENTERCHALLENGENEXTPHASESCRSP_OFFSET UNITYSDK_OFFSET(0x92CD6F0)
#define RPG_CLIENT_CHALLENGEMODULE__ONRESTARTCHALLENGEPHASESCRSP_OFFSET UNITYSDK_OFFSET(0x92CD7F0)
#define RPG_CLIENT_CHALLENGEMODULE__PROCESSAUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x92CF4F0)
#define RPG_CLIENT_CHALLENGEMODULE__RECOVERCURCHALLENGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x92D6140)
#define RPG_CLIENT_CHALLENGEMODULE__RESETTLECHALLENGE_B__38_0_OFFSET UNITYSDK_OFFSET(0x92D9140)
#define RPG_CLIENT_CHALLENGEMODULE__SAVELASTENTEREDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x92D6850)
#define RPG_CLIENT_CHALLENGEMODULE__SERIALIZETOHASHSET_OFFSET UNITYSDK_OFFSET(0x92D05C0)
#define RPG_CLIENT_CHALLENGEMODULE__SETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x92CFA00)
#define RPG_CLIENT_CHALLENGEMODULE__TRYSHOWCHALLENGERESULT_OFFSET UNITYSDK_OFFSET(0x92D4F30)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92D9520)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x92D9430)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x92D94C0)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x92D9590)
#define RPG_CLIENT_CHALLENGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x92D9530)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeModule_TypeDefinitionIndex = 51197;

	class ChallengeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengeData*>* _AllChallengeDatas; // 0x10
		::RPG::Client::ChallengeAutoSettleResult* _AutoSettleCacheData; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengeGroupType, ::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*>* _ChallengeGroupDataDict; // 0x20
		::RPG::Client::Promises::Promise* _RefreshAllChallengePromise; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise*>* _GetCurChallengePromiseList; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengeGroupType, ::System::UInt32>* _ChallengeHistoryMaxLevelDict; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RequiredMainMissionIDs; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* _NoneScheduleChallengeGroupDatas; // 0x48
		::Struct_2_26800DB1E21B77D0 ContinueChallengeData; // 0x50
		::RPG::Client::Promises::Promise* _LeaveChallengePromise; // 0x78
		::RPG::Client::ChallengeInstance* _CurrentChallengeInstance; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void SaveChallengeBossShowedMonsterGuide(::System::UInt32 challengeID, ::System::UInt32 stageIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVECHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET))(this, challengeID, stageIndex);
		}

		::System::Boolean IsChallengeBossShowedMonsterGuide(::System::UInt32 challengeID, ::System::UInt32 stageIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ISCHALLENGEBOSSSHOWEDMONSTERGUIDE_OFFSET))(this, challengeID, stageIndex);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableBossGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLEBOSSGROUPDATA_OFFSET))(this);
		}

		::System::Void EnterBossChallenge(::System::UInt32 challengeID, ::System::UInt32 buff1, ::System::UInt32 buff2, ::System::Collections::Generic::List_1<::System::UInt32>* team1, ::System::Collections::Generic::List_1<::System::UInt32>* team2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERBOSSCHALLENGE_OFFSET))(this, challengeID, buff1, buff2, team1, team2);
		}

		::System::Void EnterPartialChallenge(::System::UInt32 challengeID, ::System::UInt32 stageIndex, ::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERPARTIALCHALLENGE_OFFSET))(this, challengeID, stageIndex, buffID);
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

		::System::Void SaveLastBossChallengeIDToPref(::System::UInt32 challengeGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELASTBOSSCHALLENGEIDTOPREF_OFFSET))(this, challengeGroupID);
		}

		::System::Void SetDifficultyStateByChallengeBossData(::RPG::Client::ChallengeBossData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SETDIFFICULTYSTATEBYCHALLENGEBOSSDATA_OFFSET))(this, data);
		}

		::System::Void ClearChallengeBossDifficultyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_CLEARCHALLENGEBOSSDIFFICULTYSTATE_OFFSET))(this);
		}

		::System::Void _OnChallengeBossPhaseSettleNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGEBOSSPHASESETTLENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnEnterChallengeNextPhaseScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONENTERCHALLENGENEXTPHASESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRestartChallengePhaseScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONRESTARTCHALLENGEPHASESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* get_BossGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_BOSSGROUPDATALIST_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableChallengeGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLECHALLENGEGROUPS_OFFSET))(this);
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

		::System::Void SaveLastMemoryChallengeGroupIDToCache(::System::UInt32 challengeGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELASTMEMORYCHALLENGEGROUPIDTOCACHE_OFFSET))(this, challengeGroupID);
		}

		::RPG::Client::ChallengeAutoSettleResult* GetMemoryAutoSettleResult()
		{
			return ((::RPG::Client::ChallengeAutoSettleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETMEMORYAUTOSETTLERESULT_OFFSET))(this);
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

		::System::Void set_SeenChallengeMemoryScheduleUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SET_SEENCHALLENGEMEMORYSCHEDULEUNLOCK_OFFSET))(this, value);
		}

		::System::Void _OnCmdChallengeSettleNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGESETTLENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SettleChallenge(::System::UInt32 challengeID, ::System::Boolean isWin, ::System::UInt32 targetBitSet, ::System::UInt32 score1, ::System::UInt32 score2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SETTLECHALLENGE_OFFSET))(this, challengeID, isWin, targetBitSet, score1, score2);
		}

		::System::Void ReSettleChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_RESETTLECHALLENGE_OFFSET))(this);
		}

		::System::Void _NotifyChallengeFinish(::RPG::Client::ChallengeSettleResult result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeSettleResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__NOTIFYCHALLENGEFINISH_OFFSET))(this, result);
		}

		::RPG::Client::ChallengeSettleResult _GetSettleResult()
		{
			return ((::RPG::Client::ChallengeSettleResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETSETTLERESULT_OFFSET))(this);
		}

		::RPG::Client::ChallengeAutoSettleResult* GetAutoSettleResult(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeAutoSettleResult*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAUTOSETTLERESULT_OFFSET))(this, type);
		}

		::System::Void ClearAutoSettleResultRecord(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_CLEARAUTOSETTLERESULTRECORD_OFFSET))(this, type);
		}

		::System::Void _ProcessAutoSettle(::RPG::GameCore::ChallengeGroupType type, ::System::UInt32 curChallengeID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* challengeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__PROCESSAUTOSETTLE_OFFSET))(this, type, curChallengeID, challengeIDList);
		}

		::RPG::Client::ChallengeAutoSettleResult* _DeSerializeFromHashset(::RPG::Client::PrefHashSet_1<::System::UInt32>* hashSet)
		{
			return ((::RPG::Client::ChallengeAutoSettleResult*(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__DESERIALIZEFROMHASHSET_OFFSET))(this, hashSet);
		}

		::System::Void _SerializeToHashset(::RPG::Client::PrefHashSet_1<::System::UInt32>*& hashSet, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* challengeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*&, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SERIALIZETOHASHSET_OFFSET))(this, hashSet, challengeIDList);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* _GetAutoSettleResultPrefHashSet(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETAUTOSETTLERESULTPREFHASHSET_OFFSET))(this, type);
		}

		::System::UInt32 GetLastStoryChallengeGroupIDFromCache()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTSTORYCHALLENGEGROUPIDFROMCACHE_OFFSET))(this);
		}

		::System::Void SaveLastStoryChallengeGroupIDToCache(::System::UInt32 challengeGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELASTSTORYCHALLENGEGROUPIDTOCACHE_OFFSET))(this, challengeGroupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetAvailableStoryGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETAVAILABLESTORYGROUPDATA_OFFSET))(this);
		}

		::System::Void EnterStoryChallenge(::System::UInt32 challengeID, ::System::UInt32 buff1, ::System::UInt32 buff2, ::System::Collections::Generic::List_1<::System::UInt32>* team1, ::System::Collections::Generic::List_1<::System::UInt32>* team2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERSTORYCHALLENGE_OFFSET))(this, challengeID, buff1, buff2, team1, team2);
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

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* get_StoryGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_STORYGROUPDATALIST_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>* GetChallengeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATAS_OFFSET))(this);
		}

		::RPG::Client::ChallengeData* GetChallengeData(::System::UInt32 id)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEDATA_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetChallengeGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetChallengeGroupDataByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATABYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetNextScheduleChallengeGroupDataByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNEXTSCHEDULECHALLENGEGROUPDATABYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetNextChallengeGroupData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETNEXTCHALLENGEGROUPDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetCurrentGroupDataByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCURRENTGROUPDATABYTYPE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetInScheduleGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>* GetInScheduleGroupDatasByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeGroupData*>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETINSCHEDULEGROUPDATASBYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetChallengeGroupData(::System::UInt32 challengeGroupID)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEGROUPDATA_OFFSET))(this, challengeGroupID);
		}

		::System::UInt32 GetChallengeHistoryMaxLevelByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGEHISTORYMAXLEVELBYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetLastRefreshChallengeData()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLASTREFRESHCHALLENGEDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* GetLatestScheduleChallengeGroupDataByGroupType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETLATESTSCHEDULECHALLENGEGROUPDATABYGROUPTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ChallengeGroupData* GetFirstEndGroupDataByType(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETFIRSTENDGROUPDATABYTYPE_OFFSET))(this, type);
		}

		::System::Int32 GetTotalStarsNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETTOTALSTARSNUM_OFFSET))(this);
		}

		::System::UInt32 GetAlreadyGotStarsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETALREADYGOTSTARSNUM_OFFSET))(this);
		}

		::System::Void EnterChallenge(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::UInt32>* team1, ::System::Collections::Generic::List_1<::System::UInt32>* team2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_ENTERCHALLENGE_OFFSET))(this, challengeID, team1, team2);
		}

		::RPG::Client::Promises::Promise* LeaveChallenge()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_LEAVECHALLENGE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GetCurChallengeState()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCURCHALLENGESTATE_OFFSET))(this);
		}

		::System::Void TakeCumulativeReward(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_TAKECUMULATIVEREWARD_OFFSET))(this, groupID);
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

		::System::Void FillNewChallengeGroupIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* challengeGroupIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_FILLNEWCHALLENGEGROUPIDSTO_OFFSET))(this, challengeGroupIDs);
		}

		::System::Void _OnCmdGetChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetCurChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCURCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStartChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStartPartialChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDSTARTPARTIALCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SaveLastEnteredChallengeID(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__SAVELASTENTEREDCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Void _OnCmdLeaveChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDLEAVECHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeChallengeRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDTAKECHALLENGEREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddDisplayItemDatasByRewards(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* rewardList, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET))(this, rewardList, list);
		}

		::System::Void _OnChallengeChangeTeam(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCHALLENGECHANGETEAM_OFFSET))(this, arg);
		}

		::System::Void _OnCmdChallengeLineupNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDCHALLENGELINEUPNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _ClearCurChallengeInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CLEARCURCHALLENGEINSTANCE_OFFSET))(this);
		}

		::System::Void _RecoverCurChallengeInstance(::Class_1_3AD2528CD53B1639_3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__RECOVERCURCHALLENGEINSTANCE_OFFSET))(this, data);
		}

		::RPG::Client::ChallengeInstance* _CreateChallengeInstance(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::ChallengeInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEINSTANCE_OFFSET))(this, challengeID);
		}

		::System::Void _OnCmdGetChallengeGroupStatisticsScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ONCMDGETCHALLENGEGROUPSTATISTICSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _FillNewChallengeGroupIDsByTypeTo(::RPG::GameCore::ChallengeGroupType type, ::System::Collections::Generic::ICollection_1<::System::UInt32>* challengeGroupIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__FILLNEWCHALLENGEGROUPIDSBYTYPETO_OFFSET))(this, type, challengeGroupIDs);
		}

		::RPG::Client::IAvatarInfoProvider* GetUpgradeAvailableAvatar(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETUPGRADEAVAILABLEAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void _LoadChallengeGroupDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEGROUPDATACONFIG_OFFSET))(this);
		}

		::System::Void _LoadChallengeDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__LOADCHALLENGEDATACONFIG_OFFSET))(this);
		}

		::RPG::Client::ChallengeData* _CreateChallengeData(::System::UInt32 challengeID, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEDATA_OFFSET))(this, challengeID, groupType);
		}

		::RPG::Client::ChallengeGroupData* _CreateChallengeGroupData(::System::UInt32 groupID, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CREATECHALLENGEGROUPDATA_OFFSET))(this, groupID, groupType);
		}

		::System::Void _AddChallengeData(::RPG::GameCore::ChallengeMazeConfigRow* configRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ADDCHALLENGEDATA_OFFSET))(this, configRow);
		}

		::System::Void SetContinueChallengeData(::System::Boolean showChallengeGroup, ::System::Boolean showChallengeDetail, ::System::Boolean useLastTeamData, ::System::UInt32 challengeGroupID, ::System::UInt32 challengeDataID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SETCONTINUECHALLENGEDATA_OFFSET))(this, showChallengeGroup, showChallengeDetail, useLastTeamData, challengeGroupID, challengeDataID);
		}

		::System::Void ClearContinueChallengeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_CLEARCONTINUECHALLENGEDATA_OFFSET))(this);
		}

		::System::Void _ContinueChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__CONTINUECHALLENGE_OFFSET))(this);
		}

		::System::Boolean _IsSkipContinue(::System::UInt32 challengeGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__ISSKIPCONTINUE_OFFSET))(this, challengeGroupID);
		}

		::System::UInt32 _GetContinueMapEntranceID(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETCONTINUEMAPENTRANCEID_OFFSET))(this, type);
		}

		::Il2CppArray<::System::UInt32>* _GetForbidContinueMainMissionIDs(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUEMAINMISSIONIDS_OFFSET))(this, type);
		}

		::Il2CppArray<::System::UInt32>* _GetForbidContinueSubmissionIDs(::RPG::GameCore::ChallengeGroupType type)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__GETFORBIDCONTINUESUBMISSIONIDS_OFFSET))(this, type);
		}

		::System::Void _TryShowChallengeResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE__TRYSHOWCHALLENGERESULT_OFFSET))(this);
		}

		::System::Void SaveLineupSaveData(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarList1, ::System::Collections::Generic::List_1<::System::UInt32>* avatarList2, ::System::Collections::Generic::List_1<::System::UInt32>* buffList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SAVELINEUPSAVEDATA_OFFSET))(this, challengeID, avatarList1, avatarList2, buffList);
		}

		::RPG::Client::ChallengeLineupSaveData* GetChallengeLineupSaveData(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::ChallengeLineupSaveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETCHALLENGELINEUPSAVEDATA_OFFSET))(this, challengeID);
		}

		::RPG::Client::ChallengeLineupSaveData* GetGroupLastEnteredChallengeLineupSaveData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::ChallengeLineupSaveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GETGROUPLASTENTEREDCHALLENGELINEUPSAVEDATA_OFFSET))(this, groupID);
		}

		::RPG::Client::ChallengeInstance* get_CurrentChallengeInstance()
		{
			return ((::RPG::Client::ChallengeInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_CURRENTCHALLENGEINSTANCE_OFFSET))(this);
		}

		::System::UInt32 get_LastChallengeUnlockGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_GET_LASTCHALLENGEUNLOCKGROUPID_OFFSET))(this);
		}

		::System::Void set_LastChallengeUnlockGroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE_SET_LASTCHALLENGEUNLOCKGROUPID_OFFSET))(this, value);
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
