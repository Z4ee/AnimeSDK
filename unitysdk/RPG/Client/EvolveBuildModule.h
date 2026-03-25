#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_30.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_13.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_611;
class Class_1_14E02E1F6D70E487;
class Class_1_25220F245FE3CC2F;
class Class_1_A16A135FC5A0DDB9;
class Class_1_C9DFE5EE7107C629_4;
class Class_1_D4FD17742A9512CF;
class Class_1_F1F83A16E5B8B459;
class Class_1_FA4F4A67B1C04320_265;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class EvolveBuildLevel; }
namespace RPG::Client { class EvolveBuildLevelFromProto; }
namespace RPG::Client { class EvolveBuildSeasonData; }
namespace RPG::Client { class EvolveBuildSkill; }
namespace RPG::Client { class EvolveBuildStage; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDMODULE_CALCTEAMBONUSBUFFPARAM_OFFSET UNITYSDK_OFFSET(0x963A930)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CHECKOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x963BC50)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CLEARLEVELINFO_OFFSET UNITYSDK_OFFSET(0x9637AF0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CLEARSKILLRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x963B590)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CONTINUELEVELINBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0x963D490)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CONTINUELEVEL_OFFSET UNITYSDK_OFFSET(0x9637F00)
#define RPG_CLIENT_EVOLVEBUILDMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96378F0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_DOOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x963BDD0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_EXISTINGUNTAKENFAMEREWARD_OFFSET UNITYSDK_OFFSET(0x963CE50)
#define RPG_CLIENT_EVOLVEBUILDMODULE_EXISTINGUNTAKENFIRSTCLEARREWARD_OFFSET UNITYSDK_OFFSET(0x963D010)
#define RPG_CLIENT_EVOLVEBUILDMODULE_EXISTINGUNTAKENRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x963D430)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETCARDS_OFFSET UNITYSDK_OFFSET(0x963C350)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETCOINCURRENCYICONPATHBYSEASON_OFFSET UNITYSDK_OFFSET(0x963B270)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETCURLEVELID_OFFSET UNITYSDK_OFFSET(0x9638D00)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETCURLEVELINFO_OFFSET UNITYSDK_OFFSET(0x9638D70)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETGEAR_OFFSET UNITYSDK_OFFSET(0x9639820)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETINPROGRESSLEVELINFOBYSEASON_OFFSET UNITYSDK_OFFSET(0x9638B70)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETMAXPASSEDSTAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0x962F660)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETNEWLYUNLOCKEDGEARIDS_OFFSET UNITYSDK_OFFSET(0x963A520)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETNEXTSTAGEUNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0x9630040)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETNORMALWEAPON_OFFSET UNITYSDK_OFFSET(0x9639370)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONDATAINBATTLE_OFFSET UNITYSDK_OFFSET(0x9638F30)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONDATA_OFFSET UNITYSDK_OFFSET(0x9637390)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTAGESWITHOUTTUTORIAL_OFFSET UNITYSDK_OFFSET(0x9637170)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTRATEGYINBATTLE_OFFSET UNITYSDK_OFFSET(0x9639140)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x9638E90)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSKILLLISTBYSEASON_OFFSET UNITYSDK_OFFSET(0x963B400)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSKILL_OFFSET UNITYSDK_OFFSET(0x9638DD0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSORTEDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x963CA70)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSTAGE_OFFSET UNITYSDK_OFFSET(0x96370B0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETTUTORIALSTAGEIDBYSEASON_OFFSET UNITYSDK_OFFSET(0x963AE20)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETUNLOCKCHIPINDEX_OFFSET UNITYSDK_OFFSET(0x9630A10)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETWEAPONINITIALLEVEL_OFFSET UNITYSDK_OFFSET(0x963A330)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETWEAPON_OFFSET UNITYSDK_OFFSET(0x9639570)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_CARDS_OFFSET UNITYSDK_OFFSET(0x9641E80)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_CURRENTEVOLVEBUILDLEVELID_OFFSET UNITYSDK_OFFSET(0x9641DE0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_HASLASTFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x963BD60)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9641D80)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_ISGIVINGUP_OFFSET UNITYSDK_OFFSET(0x9641EF0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_LEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0x9641E30)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_LOCKEDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x9641E70)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_SHOWDEADLINE_OFFSET UNITYSDK_OFFSET(0x9641F10)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_SKILLS_OFFSET UNITYSDK_OFFSET(0x9641E50)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x9641E40)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_UNLOCKEDGEARIDS_OFFSET UNITYSDK_OFFSET(0x9641E60)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET__MAINPAGEPATH_OFFSET UNITYSDK_OFFSET(0x9639F10)
#define RPG_CLIENT_EVOLVEBUILDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x96373F0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISALLSTAGECHALLENGED_OFFSET UNITYSDK_OFFSET(0x963CDB0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISINEVOLVEBUILDBATTLE_OFFSET UNITYSDK_OFFSET(0x96398A0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISINFIRSTPERIOD_OFFSET UNITYSDK_OFFSET(0x963AF20)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISINTUTORIALSTAGEINBATTLE_OFFSET UNITYSDK_OFFSET(0x963AC30)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISINTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0x963AA80)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISSKILLSHOPAVAILABLE_OFFSET UNITYSDK_OFFSET(0x963B120)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISSTAGEINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9638A40)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISTUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x963AAE0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9637940)
#define RPG_CLIENT_EVOLVEBUILDMODULE_OPENPHASETREASUREUI_OFFSET UNITYSDK_OFFSET(0x963BFF0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0x963C5C0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_PROTOAVATAR2AVATAR_OFFSET UNITYSDK_OFFSET(0x963AF80)
#define RPG_CLIENT_EVOLVEBUILDMODULE_PROTOAVATARS2AVATARS_OFFSET UNITYSDK_OFFSET(0x963B070)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REFRESHSKILLRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x963B6D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELDOWN_OFFSET UNITYSDK_OFFSET(0x963A110)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELRESET_OFFSET UNITYSDK_OFFSET(0x963A1D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELUP_OFFSET UNITYSDK_OFFSET(0x963A050)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSTAGERERANDOM_OFFSET UNITYSDK_OFFSET(0x963A280)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTTUTORIALLEVELSKIP_OFFSET UNITYSDK_OFFSET(0x9639FA0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_RETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x9639B60)
#define RPG_CLIENT_EVOLVEBUILDMODULE_SAVETEAM_OFFSET UNITYSDK_OFFSET(0x9638430)
#define RPG_CLIENT_EVOLVEBUILDMODULE_SET_ISGIVINGUP_OFFSET UNITYSDK_OFFSET(0x9641F00)
#define RPG_CLIENT_EVOLVEBUILDMODULE_STARTLEVELFORDEBUG_OFFSET UNITYSDK_OFFSET(0x9638760)
#define RPG_CLIENT_EVOLVEBUILDMODULE_STARTLEVEL_OFFSET UNITYSDK_OFFSET(0x96382C0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9639E20)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYCLOSELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x963BBF0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYOPENLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x963BA40)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x963BD70)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYQUITLEVEL_OFFSET UNITYSDK_OFFSET(0x9638990)
#define RPG_CLIENT_EVOLVEBUILDMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0x9637500)
#define RPG_CLIENT_EVOLVEBUILDMODULE_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0x9637990)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9637DE0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9637B80)
#define RPG_CLIENT_EVOLVEBUILDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9641F20)
#define RPG_CLIENT_EVOLVEBUILDMODULE__GETLOADPAGEPATHBYSEASON_OFFSET UNITYSDK_OFFSET(0x963BAE0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__GETRESULTPAGEPATHBYSEASON_OFFSET UNITYSDK_OFFSET(0x9641C70)
#define RPG_CLIENT_EVOLVEBUILDMODULE__GETSEASONINBATTLE_OFFSET UNITYSDK_OFFSET(0x9639190)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITCARDS_OFFSET UNITYSDK_OFFSET(0x963E490)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITCOLLECTIONGEARS_OFFSET UNITYSDK_OFFSET(0x963E170)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITSEASONDATAS_OFFSET UNITYSDK_OFFSET(0x963D700)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITSEASONSTAGES_OFFSET UNITYSDK_OFFSET(0x963EA10)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITSKILLS_OFFSET UNITYSDK_OFFSET(0x963DF30)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITSTAGES_OFFSET UNITYSDK_OFFSET(0x963DC80)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ISALLSTAGECHALLENGED_B__63_0_OFFSET UNITYSDK_OFFSET(0x96422D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0x9641500)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONEVOLVEBUILDSKIPTEACHLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x9641350)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDCOINNOTIFY_OFFSET UNITYSDK_OFFSET(0x96411A0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9640CF0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x9640B90)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDQUERYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x963F230)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDRERANDOMSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x96412C0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYDOWNSCRSP_OFFSET UNITYSDK_OFFSET(0x9640FB0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYRESETSCRSP_OFFSET UNITYSDK_OFFSET(0x96410D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYUPSCRSP_OFFSET UNITYSDK_OFFSET(0x9640E90)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONMODULEINIT_OFFSET UNITYSDK_OFFSET(0x963D5F0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONPHASERESULTDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x9641B60)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONPVEBATTLERESULTSCRSP_OFFSET UNITYSDK_OFFSET(0x9641400)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONUIBATTLEEVOLVEBUILDDEADLINESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9641BB0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0x963C690)
#define RPG_CLIENT_EVOLVEBUILDMODULE__SEASONCAST_OFFSET UNITYSDK_OFFSET(0x963C970)
#define RPG_CLIENT_EVOLVEBUILDMODULE__SETAUTOSHOWFLAGS_OFFSET UNITYSDK_OFFSET(0x9639A40)
#define RPG_CLIENT_EVOLVEBUILDMODULE__SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x963C9D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATECOLLECTEDGEARS_OFFSET UNITYSDK_OFFSET(0x9640670)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATEGAMEINFO_OFFSET UNITYSDK_OFFSET(0x963F530)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESKILLS_OFFSET UNITYSDK_OFFSET(0x9640170)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESTAGEPERIODS_OFFSET UNITYSDK_OFFSET(0x9640A30)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESTAGES_OFFSET UNITYSDK_OFFSET(0x963F950)
#define RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96423B0)
#define RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9642320)
#define RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x96423C0)
#define RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9642480)
#define RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9642420)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildModule_TypeDefinitionIndex = 51846;

	class EvolveBuildModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* _GearCollectionDic; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FirstPassQuestIDs; // 0x18
		::System::Collections::Generic::List_1<::Class_1_C9DFE5EE7107C629_4*>* _InProgressLevelInfoList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* _Stages_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildSkill*>* _Skills_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildStage*>* _StageDict; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EvolveBuildSeason, ::RPG::Client::EvolveBuildSeasonData*>* _SeasonDataDict; // 0x40
		::Class_1_A16A135FC5A0DDB9* _LastFinishNotify; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* _CardsDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildSkill*>* _SkillDict; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotIgnoredStageIDs; // 0x60
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedGearIDs_k__BackingField; // 0x68
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LockedStageIDs_k__BackingField; // 0x70
		::RPG::Client::EvolveBuildLevel* _LevelInstance; // 0x78
		::RPG::Client::UIController* _LoadingPage; // 0x80
		::System::Boolean _ShowDeadLine; // 0x88
		::System::Boolean _ShouldAutoShowTutorialPage; // 0x89
		::System::Boolean _IsGivingUp_k__BackingField; // 0x8A
		::System::Boolean _ShouldAutoShowMainPage; // 0x8B
		::System::Nullable_1<::System::UInt32> LastSelectGearID; // 0x8C
		::RPG::GameCore::EvolveBuildSeason _AutoShowSeason; // 0x94
		::System::Nullable_1<::System::UInt32> LastAbandonGearID; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetUnlockChipIndex(::System::UInt32 stageMergedID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETUNLOCKCHIPINDEX_OFFSET))(this, stageMergedID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* GetSeasonStagesWithoutTutorial(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTAGESWITHOUTTUTORIAL_OFFSET))(this, season);
		}

		::System::UInt32 GetNextStageUnlockQuestID(::System::UInt32 stageMergedID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETNEXTSTAGEUNLOCKQUESTID_OFFSET))(this, stageMergedID);
		}

		::System::UInt32 GetMaxPassedStageMergedID(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETMAXPASSEDSTAGEMERGEDID_OFFSET))(this, season);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void UpdateLevelInfo(::Class_1_C9DFE5EE7107C629_4* info, ::Class_1_14E02E1F6D70E487* pSpecifiedBattleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_UPDATELEVELINFO_OFFSET))(this, info, pSpecifiedBattleInfo);
		}

		::System::Void ClearLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_CLEARLEVELINFO_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void ContinueLevel(::System::UInt32 LevelId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_CONTINUELEVEL_OFFSET))(this, LevelId);
		}

		::System::Void StartLevel(::System::UInt32 levelId, ::System::UInt32 gearId, ::System::UInt32 gearLevel, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_STARTLEVEL_OFFSET))(this, levelId, gearId, gearLevel, avatars);
		}

		::System::Void SaveTeam(::System::UInt32 levelId, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_SAVETEAM_OFFSET))(this, levelId, avatars);
		}

		::System::Void StartLevelForDebug(::System::UInt32 levelId, ::System::UInt32 gearId, ::System::UInt32 gearLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_STARTLEVELFORDEBUG_OFFSET))(this, levelId, gearId, gearLevel);
		}

		::System::Void TryQuitLevel(::System::UInt32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_TRYQUITLEVEL_OFFSET))(this, levelID);
		}

		::System::Boolean IsStageInProgress(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISSTAGEINPROGRESS_OFFSET))(this, stageID);
		}

		::Class_1_C9DFE5EE7107C629_4* GetInProgressLevelInfoBySeason(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::Class_1_C9DFE5EE7107C629_4*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETINPROGRESSLEVELINFOBYSEASON_OFFSET))(this, season);
		}

		::System::UInt32 GetCurLevelID(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETCURLEVELID_OFFSET))(this, season);
		}

		::RPG::Client::EvolveBuildLevelFromProto* GetCurLevelInfo(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::RPG::Client::EvolveBuildLevelFromProto*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETCURLEVELINFO_OFFSET))(this, season);
		}

		::RPG::Client::EvolveBuildStage* GetStage(::System::UInt32 stageMergedID)
		{
			return ((::RPG::Client::EvolveBuildStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSTAGE_OFFSET))(this, stageMergedID);
		}

		::RPG::Client::EvolveBuildSkill* GetSkill(::System::UInt32 skillID)
		{
			return ((::RPG::Client::EvolveBuildSkill*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSKILL_OFFSET))(this, skillID);
		}

		::RPG::Client::EvolveBuildSeasonData* GetSeasonData(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::RPG::Client::EvolveBuildSeasonData*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONDATA_OFFSET))(this, season);
		}

		::Class_0_16E4307DCC419505_611* GetSeasonStrategy(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::Class_0_16E4307DCC419505_611*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTRATEGY_OFFSET))(this, season);
		}

		::RPG::Client::EvolveBuildSeasonData* GetSeasonDataInBattle()
		{
			return ((::RPG::Client::EvolveBuildSeasonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONDATAINBATTLE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_611* GetSeasonStrategyInBattle()
		{
			return ((::Class_0_16E4307DCC419505_611*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTRATEGYINBATTLE_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildCollectionGear* GetNormalWeapon(::System::UInt32 gearID)
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETNORMALWEAPON_OFFSET))(this, gearID);
		}

		::RPG::Client::EvolveBuildCollectionGear* GetWeapon(::System::UInt32 gearID)
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETWEAPON_OFFSET))(this, gearID);
		}

		::RPG::Client::EvolveBuildCollectionGear* GetGear(::System::UInt32 gearID)
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETGEAR_OFFSET))(this, gearID);
		}

		static ::System::Boolean IsInEvolveBuildBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISINEVOLVEBUILDBATTLE_OFFSET))();
		}

		::System::Void _SetAutoShowFlags(::System::Boolean isShowTutorialPage, ::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__SETAUTOSHOWFLAGS_OFFSET))(this, isShowTutorialPage, season);
		}

		::System::Void ReturnToMaze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_RETURNTOMAZE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void RequestTutorialLevelSkip(::System::UInt32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTTUTORIALLEVELSKIP_OFFSET))(this, levelID);
		}

		::System::Void RequestSkillLevelUp(::System::UInt32 skillID, ::System::UInt32 targetLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELUP_OFFSET))(this, skillID, targetLevel);
		}

		::System::Void RequestSkillLevelDown(::System::UInt32 skillID, ::System::UInt32 targetLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELDOWN_OFFSET))(this, skillID, targetLevel);
		}

		::System::Void RequestSkillLevelReset(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELRESET_OFFSET))(this, season);
		}

		::System::Void RequestStageReRandom(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSTAGERERANDOM_OFFSET))(this, stageID);
		}

		::System::UInt32 GetWeaponInitialLevel(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETWEAPONINITIALLEVEL_OFFSET))(this, season);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewlyUnlockedGearIDs(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETNEWLYUNLOCKEDGEARIDS_OFFSET))(this, season);
		}

		::RPG::GameCore::FixPoint CalcTeamBonusBuffParam(::RPG::GameCore::MazeBuffRow* mazeBuff, ::System::Int32 teamLevel)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_CALCTEAMBONUSBUFFPARAM_OFFSET))(this, mazeBuff, teamLevel);
		}

		::System::Boolean IsInTutorialStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISINTUTORIALSTAGE_OFFSET))(this);
		}

		::System::Boolean IsTutorialStageID(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISTUTORIALSTAGEID_OFFSET))(this, stageID);
		}

		::System::Boolean IsInTutorialStageInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISINTUTORIALSTAGEINBATTLE_OFFSET))(this);
		}

		::System::UInt32 GetTutorialStageIDBySeason(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETTUTORIALSTAGEIDBYSEASON_OFFSET))(this, season);
		}

		::System::Boolean IsInFirstPeriod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISINFIRSTPERIOD_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* ProtoAvatar2Avatar(::Class_1_D4FD17742A9512CF* proto)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::Class_1_D4FD17742A9512CF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_PROTOAVATAR2AVATAR_OFFSET))(this, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* ProtoAvatars2Avatars(::System::Collections::Generic::IEnumerable_1<::Class_1_D4FD17742A9512CF*>* protoList)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D4FD17742A9512CF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_PROTOAVATARS2AVATARS_OFFSET))(this, protoList);
		}

		::System::Boolean IsSkillShopAvailable(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISSKILLSHOPAVAILABLE_OFFSET))(this, season);
		}

		::System::String* GetCoinCurrencyIconPathBySeason(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETCOINCURRENCYICONPATHBYSEASON_OFFSET))(this, season);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildSkill*>* GetSkillListBySeason(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildSkill*>*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSKILLLISTBYSEASON_OFFSET))(this, season);
		}

		::System::Void ClearSkillRecommendation(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_CLEARSKILLRECOMMENDATION_OFFSET))(this, season);
		}

		::System::Void RefreshSkillRecommendation(::RPG::Client::EvolveBuildStage* stage, ::RPG::Client::EvolveBuildCollectionGear* weapon)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildStage*, ::RPG::Client::EvolveBuildCollectionGear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REFRESHSKILLRECOMMENDATION_OFFSET))(this, stage, weapon);
		}

		::System::Void TryOpenLoadingPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_TRYOPENLOADINGPAGE_OFFSET))(this);
		}

		::System::Void TryCloseLoadingPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_TRYCLOSELOADINGPAGE_OFFSET))(this);
		}

		::System::Boolean CheckOpenPhaseResultDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_CHECKOPENPHASERESULTDIALOG_OFFSET))(this);
		}

		::System::Boolean TryOpenPhaseResultDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_TRYOPENPHASERESULTDIALOG_OFFSET))(this);
		}

		::System::Void DoOpenPhaseResultDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_DOOPENPHASERESULTDIALOG_OFFSET))(this);
		}

		::System::Void OpenPhaseTreasureUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_OPENPHASETREASUREUI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* GetCards(::System::Collections::Generic::List_1<::System::UInt32>* cardIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETCARDS_OFFSET))(this, cardIDs);
		}

		::System::Void OpenResultPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_OPENRESULTPAGE_OFFSET))(this);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* GetSortedGearEquipInfo(::Class_1_C9DFE5EE7107C629_4* levelInfo)
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSORTEDGEAREQUIPINFO_OFFSET))(this, levelInfo);
		}

		::System::Boolean IsAllStageChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISALLSTAGECHALLENGED_OFFSET))(this);
		}

		::System::Boolean ExistingUntakenFameReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_EXISTINGUNTAKENFAMEREWARD_OFFSET))(this);
		}

		::System::Boolean ExistingUntakenFirstClearReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_EXISTINGUNTAKENFIRSTCLEARREWARD_OFFSET))(this);
		}

		::System::Boolean ExistingUntakenResidentReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_EXISTINGUNTAKENRESIDENTREWARD_OFFSET))(this);
		}

		::System::Void ContinueLevelInBattlePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_CONTINUELEVELINBATTLEPHASE_OFFSET))(this);
		}

		::System::Void _OnModuleInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONMODULEINIT_OFFSET))(this);
		}

		::System::Void _InitStages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__INITSTAGES_OFFSET))(this);
		}

		::System::Void _InitSeasonStages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__INITSEASONSTAGES_OFFSET))(this);
		}

		::System::Void _InitSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__INITSKILLS_OFFSET))(this);
		}

		::System::Void _InitSeasonDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__INITSEASONDATAS_OFFSET))(this);
		}

		::System::Void _InitCollectionGears()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__INITCOLLECTIONGEARS_OFFSET))(this);
		}

		::System::Void _InitCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__INITCARDS_OFFSET))(this);
		}

		::System::Void _OnGetEvolveBuildQueryInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDQUERYINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateGameInfo(::Class_1_F1F83A16E5B8B459* gameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATEGAMEINFO_OFFSET))(this, gameInfo);
		}

		::System::Void _UpdateStages(::Class_1_F1F83A16E5B8B459* gameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESTAGES_OFFSET))(this, gameInfo);
		}

		::System::Void _UpdateStagePeriods(::Class_1_25220F245FE3CC2F* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_25220F245FE3CC2F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESTAGEPERIODS_OFFSET))(this, info);
		}

		::System::Void _UpdateCollectedGears(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* collectedGearListInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATECOLLECTEDGEARS_OFFSET))(this, collectedGearListInfo);
		}

		::System::Void _UpdateSkills(::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_265*>* shopAbilityInfoList, ::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_265*>*, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESKILLS_OFFSET))(this, shopAbilityInfoList, season);
		}

		::System::Void _OnGetEvolveBuildGiveupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDGIVEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetEvolveBuildFinishScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDFINISHSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetEvolveBuildShopAbilityUpScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetEvolveBuildShopAbilityDownScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYDOWNSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetEvolveBuildShopAbilityResetScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYRESETSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetEvolveBuildCoinNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDCOINNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetEvolveBuildReRandomStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDRERANDOMSTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnEvolveBuildSkipTeachLevelScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONEVOLVEBUILDSKIPTEACHLEVELSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnPVEBattleResultScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONPVEBATTLERESULTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, obj);
		}

		::System::Void _OnPhaseResultDialogExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONPHASERESULTDIALOGEXIT_OFFSET))(this);
		}

		::System::Void _SetupLoadingStrategy(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__SETUPLOADINGSTRATEGY_OFFSET))(this, season);
		}

		::System::Void _OnUIBattleEvolveBuildDeadLineStateChange(::System::Object* showDeadLine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONUIBATTLEEVOLVEBUILDDEADLINESTATECHANGE_OFFSET))(this, showDeadLine);
		}

		::System::Void _OpenResultPage(::Class_1_C9DFE5EE7107C629_4* levelInfo, ::Enum_3_4608E37A1B3D374A_13 resultType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*, ::Enum_3_4608E37A1B3D374A_13))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__OPENRESULTPAGE_OFFSET))(this, levelInfo, resultType);
		}

		::RPG::GameCore::EvolveBuildSeason _SeasonCast(::Enum_3_0A3761FE34514D6C_30 type)
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_30))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__SEASONCAST_OFFSET))(this, type);
		}

		::System::String* _GetLoadPagePathBySeason(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__GETLOADPAGEPATHBYSEASON_OFFSET))(this, season);
		}

		::System::String* _GetResultPagePathBySeason(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__GETRESULTPAGEPATHBYSEASON_OFFSET))(this, season);
		}

		::RPG::GameCore::EvolveBuildSeason _GetSeasonInBattle()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__GETSEASONINBATTLE_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildModule* get_Instance()
		{
			return ((::RPG::Client::EvolveBuildModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::UInt32 get_CurrentEvolveBuildLevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_CURRENTEVOLVEBUILDLEVELID_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildLevel* get_LevelInstance()
		{
			return ((::RPG::Client::EvolveBuildLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_LEVELINSTANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* get_Stages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_STAGES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildSkill*>* get_Skills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildSkill*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_SKILLS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_UnlockedGearIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_UNLOCKEDGEARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_LockedStageIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_LOCKEDSTAGEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_Cards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_CARDS_OFFSET))(this);
		}

		::System::Boolean get_IsGivingUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_ISGIVINGUP_OFFSET))(this);
		}

		::System::Void set_IsGivingUp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_SET_ISGIVINGUP_OFFSET))(this, value);
		}

		::System::Boolean get_ShowDeadLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_SHOWDEADLINE_OFFSET))(this);
		}

		::System::Boolean get_HasLastFinishNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET_HASLASTFINISHNOTIFY_OFFSET))(this);
		}

		::System::String* get__MainPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GET__MAINPAGEPATH_OFFSET))(this);
		}

		::System::Boolean _IsAllStageChallenged_b__63_0(::RPG::Client::EvolveBuildStage* stage)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ISALLSTAGECHALLENGED_B__63_0_OFFSET))(this, stage);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
