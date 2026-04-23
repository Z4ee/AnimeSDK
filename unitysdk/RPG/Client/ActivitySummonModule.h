#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1CBA230307F9C289_61;
class Class_1_D17272E82AE804C2_923;
class Class_1_E69ACE438A1D0786;
namespace RPG::Client { class ActivitySummonBattleResult; }
namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSUMMONMODULE_ALLHARDSTAGECHALLENGED_OFFSET UNITYSDK_OFFSET(0x9C634C0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKACTIVITYSUMMONLEVELHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9C60BE0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x9C63400)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYID_OFFSET UNITYSDK_OFFSET(0x9C606E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9C62420)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETALLSORTEDSTAGES_OFFSET UNITYSDK_OFFSET(0x9C62500)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETCURRENTSTARS_OFFSET UNITYSDK_OFFSET(0x9C61120)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GETLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9C62DA0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x9C61BC0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9C61B60)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x9C61B10)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0x9C61BE0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x9C61C00)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_HASANYNEWSTAGE_OFFSET UNITYSDK_OFFSET(0x9C631E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9C61C20)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_MARKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x9C63460)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_RESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x9C62D00)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9C62EC0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9C620E0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SETAUTOSHOWSTAGEID_OFFSET UNITYSDK_OFFSET(0x9C63180)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x9C61BD0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0x9C61BF0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x9C61C10)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_STARTSUMMONACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0x9C626D0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9C63040)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYCONSUMEUNLOCKFLAG_OFFSET UNITYSDK_OFFSET(0x9C619D0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x9C62590)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C62000)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__CLEARBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x9C63D40)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C63FC0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONACTIVITYAVATAR_OFFSET UNITYSDK_OFFSET(0x9C627F0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x9C62960)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__INITCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x9C61E60)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__INITSTAGES_OFFSET UNITYSDK_OFFSET(0x9C61CC0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9C63C70)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONENTERSUMMONACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x9C63960)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONGETSUMMONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9C63610)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__ONSUMMONACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9C63A30)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__PREPARERELATEDMISSIONS_OFFSET UNITYSDK_OFFSET(0x9C621B0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__SAVEBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x9C62B00)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__STARTSUMMONBATTLE_OFFSET UNITYSDK_OFFSET(0x9C62BB0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE__UPDATESRVDATA_OFFSET UNITYSDK_OFFSET(0x9C63AC0)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9C64100)
#define RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C64190)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonModule_TypeDefinitionIndex = 57116;

	class ActivitySummonModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonStage*>* _Stages; // 0x10
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty>>* _UnlockFlags; // 0x18
		::System::String* _DifficultyLevelTutorialUnlockKey_k__BackingField; // 0x20
		::RPG::Client::ActivitySummonBattleResult* _BattleResult; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _StarsCache; // 0x30
		::Class_1_E69ACE438A1D0786* _BattleInfo; // 0x38
		::System::UInt32 _ActivityRewardID_k__BackingField; // 0x40
		::System::Nullable_1<::System::UInt32> _AutoShowStageID; // 0x44
		::System::UInt32 _GuideMissionID_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTSTAGEID_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySummonDifficulty get_CurrentDifficulty()
		{
			return ((::RPG::GameCore::ActivitySummonDifficulty(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_CURRENTDIFFICULTY_OFFSET))(this);
		}

		::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_ACTIVITYREWARDID_OFFSET))(this);
		}

		::System::Void set_ActivityRewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_ACTIVITYREWARDID_OFFSET))(this, value);
		}

		::System::String* get_DifficultyLevelTutorialUnlockKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET))(this);
		}

		::System::Void set_DifficultyLevelTutorialUnlockKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_DIFFICULTYLEVELTUTORIALUNLOCKKEY_OFFSET))(this, value);
		}

		::System::UInt32 get_GuideMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GET_GUIDEMISSIONID_OFFSET))(this);
		}

		::System::Void set_GuideMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SET_GUIDEMISSIONID_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::ActivitySummonStage* GetActivitySummonStageByID(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivitySummonStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYID_OFFSET))(this, id);
		}

		::RPG::Client::ActivitySummonStage* GetActivitySummonStageByMappingInfoID(::System::UInt32 mappingInfoID)
		{
			return ((::RPG::Client::ActivitySummonStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETACTIVITYSUMMONSTAGEBYMAPPINGINFOID_OFFSET))(this, mappingInfoID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonStage*>* GetAllSortedStages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETALLSORTEDSTAGES_OFFSET))(this);
		}

		::System::UInt32 GetCurrentStars(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETCURRENTSTARS_OFFSET))(this, stageID, difficulty);
		}

		::System::Boolean TryShowLevelResultDialog(::RPG::Client::LuaUIController*& controller)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LuaUIController*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYSHOWLEVELRESULTDIALOG_OFFSET))(this, controller);
		}

		::System::Boolean CheckActivitySummonLevelHasUnlocked(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKACTIVITYSUMMONLEVELHASUNLOCKED_OFFSET))(this, stageID, difficulty);
		}

		::System::Boolean TryConsumeUnlockFlag(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYCONSUMEUNLOCKFLAG_OFFSET))(this, stageID, difficulty);
		}

		::System::Void StartSummonActivityStage(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty, ::System::UInt32 masterAvatarID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_STARTSUMMONACTIVITYSTAGE_OFFSET))(this, stageID, difficulty, masterAvatarID, avatarIDList);
		}

		::System::Void RestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_RESTARTBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupData(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_GETLINEUPDATA_OFFSET))(this, stageID, difficulty);
		}

		::System::Void SaveLineupData(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SAVELINEUPDATA_OFFSET))(this, stageID, difficulty, avatarIDList);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowStageID(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_SETAUTOSHOWSTAGEID_OFFSET))(this, stageID);
		}

		::System::Boolean HasAnyNewStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_HASANYNEWSTAGE_OFFSET))(this);
		}

		::System::Boolean CheckRewardHasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_CHECKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Void MarkRewardHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_MARKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Boolean AllHardStageChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE_ALLHARDSTAGECHALLENGED_OFFSET))(this);
		}

		::System::Void _OnGetSummonActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONGETSUMMONACTIVITYDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnEnterSummonActivityStageScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONENTERSUMMONACTIVITYSTAGESCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnSummonActivityBattleEndScNotify(::System::UInt16 cmd, ::System::Object* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONSUMMONACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, cmd, ntf);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _UpdateSrvData(::Class_1_D17272E82AE804C2_923* scNtf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_923*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__UPDATESRVDATA_OFFSET))(this, scNtf);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>* _GetSummonAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONAVATARLISTFROMIDLIST_OFFSET))(this, avatarIDList);
		}

		::Class_1_1CBA230307F9C289_61* _GetSummonActivityAvatar(::System::UInt32 avatarID)
		{
			return ((::Class_1_1CBA230307F9C289_61*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__GETSUMMONACTIVITYAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void _StartSummonBattle(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty, ::Class_1_1CBA230307F9C289_61* masterAvatar, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_1CBA230307F9C289_61*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__STARTSUMMONBATTLE_OFFSET))(this, stageID, difficulty, masterAvatar, avatarList);
		}

		::System::Void _SaveBattleInfo(::System::UInt32 stageID, ::RPG::GameCore::ActivitySummonDifficulty difficulty, ::Class_1_1CBA230307F9C289_61* masterAvatar, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_1CBA230307F9C289_61*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__SAVEBATTLEINFO_OFFSET))(this, stageID, difficulty, masterAvatar, avatarList);
		}

		::System::Void _ClearBattleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__CLEARBATTLEINFO_OFFSET))(this);
		}

		::System::Void _InitStages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__INITSTAGES_OFFSET))(this);
		}

		::System::Void _PrepareRelatedMissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__PREPARERELATEDMISSIONS_OFFSET))(this);
		}

		::System::Void _InitConstValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE__INITCONSTVALUES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
