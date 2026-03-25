#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"

class Class_1_FFE5B8A52EC38E9C;
namespace RPG::Client { class AetherDivideChallengeData; }
namespace RPG::Client { class AetherDivideGymData; }
namespace RPG::Client { class AetherDivideTeamData; }
namespace RPG::Client { class AetherDivideTrainerData; }
namespace RPG::Client { class AetherOutfitData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class AetherDivideOverflowChunkRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDEMODULE_CHECKTRAINERLEVELANDSCHEDULE_OFFSET UNITYSDK_OFFSET(0x90710E0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90770F0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETCHALLENGELISTUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x9077E30)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETCURAETHERDIVIDEMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9077AE0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETDISPLAYMONSTERDATASBYSTAGEID_OFFSET UNITYSDK_OFFSET(0x90720B0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETDISPLAYMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9077940)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETMAINAETHERSPIRITTYPEDICTBYNPCMONSTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x90775E0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETMONSTERAVERAGELEVELBYSTAGEID_OFFSET UNITYSDK_OFFSET(0x9077A10)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETOVERFLOWCHUNKROW_OFFSET UNITYSDK_OFFSET(0x90779A0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_AETHERDIVIDETEAMDATA_OFFSET UNITYSDK_OFFSET(0x90786E0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_AETHEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x90786C0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x90786A0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_COMMONSPIRITEXPITEMID_OFFSET UNITYSDK_OFFSET(0x9078700)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_GYMDATA_OFFSET UNITYSDK_OFFSET(0x9078680)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_ISALLMISSIONCLEAR_OFFSET UNITYSDK_OFFSET(0x9073270)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_TRAINERDATA_OFFSET UNITYSDK_OFFSET(0x9078660)
#define RPG_CLIENT_AETHERDIVIDEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9076D10)
#define RPG_CLIENT_AETHERDIVIDEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9077590)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_AETHERDIVIDETEAMDATA_OFFSET UNITYSDK_OFFSET(0x90786F0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_AETHEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x90786D0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x90786B0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_COMMONSPIRITEXPITEMID_OFFSET UNITYSDK_OFFSET(0x9078710)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_GYMDATA_OFFSET UNITYSDK_OFFSET(0x9078690)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_TRAINERDATA_OFFSET UNITYSDK_OFFSET(0x9078670)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9078010)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9078720)
#define RPG_CLIENT_AETHERDIVIDEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9076720)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEFINISHCHALLENGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9079550)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDELINEUPSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x907A7B0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEREFRESHENDLESSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9079750)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEREFRESHENDLESSSCRSP_OFFSET UNITYSDK_OFFSET(0x90796C0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDETAKECHALLENGEREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x90797E0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESKILLITEMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x907A420)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESPIRITEXPUPSCRSP_OFFSET UNITYSDK_OFFSET(0x9079DE0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESPIRITINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9079990)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDETAINERINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x90791D0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDEQUIPSKILLCORESCRSP_OFFSET UNITYSDK_OFFSET(0x907A060)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDGETAETHERDIVIDEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9078AB0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDLEAVEAETHERDIVIDESCENESCRSP_OFFSET UNITYSDK_OFFSET(0x90792E0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDTAKEOFFSKILLCORESCRSP_OFFSET UNITYSDK_OFFSET(0x907A2B0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONGETAETHERDIVIDECHALLENGEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9079370)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONMAINMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x9078380)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONMAPCREATED_OFFSET UNITYSDK_OFFSET(0x9078220)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONMISSIONSYNC_OFFSET UNITYSDK_OFFSET(0x90783E0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0x9078610)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONSETAETHERDIVIDELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x907A530)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONSWITCHAETHERDIVIDELINEUPSLOTSCRSP_OFFSET UNITYSDK_OFFSET(0x907A690)
#define RPG_CLIENT_AETHERDIVIDEMODULE__REFRESHGYMDATA_OFFSET UNITYSDK_OFFSET(0x9078470)
#define RPG_CLIENT_AETHERDIVIDEMODULE__SYNCINVENTORY_OFFSET UNITYSDK_OFFSET(0x9078C60)
#define RPG_CLIENT_AETHERDIVIDEMODULE__TRYGETNEXTAETHERDIVIDEMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9077B40)
#define RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x907A920)
#define RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x907A890)
#define RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x907A930)
#define RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x907A990)
#define RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x907A9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideModule_TypeDefinitionIndex = 50525;

	class AetherDivideModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::AetherDivideChallengeData* _ChallengeData_k__BackingField; // 0x10
		::RPG::Client::AetherDivideTrainerData* _TrainerData_k__BackingField; // 0x18
		::RPG::Client::AetherDivideGymData* _GymData_k__BackingField; // 0x20
		::RPG::Client::AetherDivideTeamData* _AetherDivideTeamData_k__BackingField; // 0x28
		::RPG::Client::MainMissionData* _CurAetherDivideMainMissionData; // 0x30
		::RPG::Client::AetherOutfitData* _AetherOutfitData_k__BackingField; // 0x38
		::System::UInt32 _MISSION_CLEAR_UNLOCK_ID; // 0x40
		::System::UInt32 _CommonSpiritExpItemID_k__BackingField; // 0x44
		::System::Boolean _IsAllMissionClear; // 0x48
		::System::UInt32 _AetherDivideMainMissionChapterID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckTrainerLevelAndSchedule(::System::UInt32 needTrainerLevel, ::System::UInt32 activityModuleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_CHECKTRAINERLEVELANDSCHEDULE_OFFSET))(this, needTrainerLevel, activityModuleID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::UInt32>* GetMainAetherSpiritTypeDictByNpcMonsterRuntimeID(::System::UInt32 rid)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETMAINAETHERSPIRITTYPEDICTBYNPCMONSTERRUNTIMEID_OFFSET))(this, rid);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetDisplayMonsterDatasByStageID(::System::UInt32 stageID, ::System::Boolean distinct)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETDISPLAYMONSTERDATASBYSTAGEID_OFFSET))(this, stageID, distinct);
		}

		::RPG::GameCore::AetherDivideOverflowChunkRow* GetOverflowChunkRow(::System::UInt32 chunkID)
		{
			return ((::RPG::GameCore::AetherDivideOverflowChunkRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETOVERFLOWCHUNKROW_OFFSET))(this, chunkID);
		}

		::System::UInt32 GetDisplayMonsterLevel(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETDISPLAYMONSTERLEVEL_OFFSET))(this, level);
		}

		::System::Single GetMonsterAverageLevelByStageID(::System::UInt32 stageID)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETMONSTERAVERAGELEVELBYSTAGEID_OFFSET))(this, stageID);
		}

		::RPG::Client::MainMissionData* GetCurAetherDivideMainMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETCURAETHERDIVIDEMAINMISSIONDATA_OFFSET))(this);
		}

		::System::String* GetChallengeListUnlockHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETCHALLENGELISTUNLOCKHINT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMapCreated(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONMAPCREATED_OFFSET))(this, param);
		}

		::System::Void _OnMainMissionDataReady(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONMAINMISSIONDATAREADY_OFFSET))(this, param);
		}

		::System::Void _OnMissionSync(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONMISSIONSYNC_OFFSET))(this, param);
		}

		::System::Void _OnQuestUpdated(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONQUESTUPDATED_OFFSET))(this, param);
		}

		::System::Void _RefreshGymData(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__REFRESHGYMDATA_OFFSET))(this, param);
		}

		::RPG::Client::MainMissionData* _TryGetNextAetherDivideMainMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__TRYGETNEXTAETHERDIVIDEMAINMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::AetherDivideTrainerData* get_TrainerData()
		{
			return ((::RPG::Client::AetherDivideTrainerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_TRAINERDATA_OFFSET))(this);
		}

		::System::Void set_TrainerData(::RPG::Client::AetherDivideTrainerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideTrainerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_TRAINERDATA_OFFSET))(this, value);
		}

		::RPG::Client::AetherDivideGymData* get_GymData()
		{
			return ((::RPG::Client::AetherDivideGymData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_GYMDATA_OFFSET))(this);
		}

		::System::Void set_GymData(::RPG::Client::AetherDivideGymData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideGymData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_GYMDATA_OFFSET))(this, value);
		}

		::RPG::Client::AetherDivideChallengeData* get_ChallengeData()
		{
			return ((::RPG::Client::AetherDivideChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Void set_ChallengeData(::RPG::Client::AetherDivideChallengeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_CHALLENGEDATA_OFFSET))(this, value);
		}

		::RPG::Client::AetherOutfitData* get_AetherOutfitData()
		{
			return ((::RPG::Client::AetherOutfitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_AETHEROUTFITDATA_OFFSET))(this);
		}

		::System::Void set_AetherOutfitData(::RPG::Client::AetherOutfitData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherOutfitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_AETHEROUTFITDATA_OFFSET))(this, value);
		}

		::RPG::Client::AetherDivideTeamData* get_AetherDivideTeamData()
		{
			return ((::RPG::Client::AetherDivideTeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_AETHERDIVIDETEAMDATA_OFFSET))(this);
		}

		::System::Void set_AetherDivideTeamData(::RPG::Client::AetherDivideTeamData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_AETHERDIVIDETEAMDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_CommonSpiritExpItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_COMMONSPIRITEXPITEMID_OFFSET))(this);
		}

		::System::Void set_CommonSpiritExpItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_COMMONSPIRITEXPITEMID_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllMissionClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_ISALLMISSIONCLEAR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetAetherDivideInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDGETAETHERDIVIDEINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdAetherDivideTainerInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDETAINERINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLeaveAetherDivideSceneScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDLEAVEAETHERDIVIDESCENESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetAetherDivideChallengeInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONGETAETHERDIVIDECHALLENGEINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAetherDivideFinishChallengeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEFINISHCHALLENGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAetherDivideRefreshEndlessScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEREFRESHENDLESSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAetherDivideRefreshEndlessScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEREFRESHENDLESSSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAetherDivideTakeChallengeRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDETAKECHALLENGEREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdAetherDivideSpiritInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESPIRITINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdAetherDivideSpiritExpUpScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESPIRITEXPUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEquipSkillCoreScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDEQUIPSKILLCORESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeOffSkillCoreScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDTAKEOFFSKILLCORESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdAetherDivideSkillItemScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESKILLITEMSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncInventory(::Class_1_FFE5B8A52EC38E9C* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__SYNCINVENTORY_OFFSET))(this, rsp);
		}

		::System::Void _OnSetAetherDivideLineUpScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONSETAETHERDIVIDELINEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSwitchAetherDivideLineUpSlotScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONSWITCHAETHERDIVIDELINEUPSLOTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAetherDivideLineupScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDELINEUPSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
