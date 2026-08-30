#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_30.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_13.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_827;
class Class_1_35D7E19A6BADFE2D;
class Class_1_3AD2528CD53B1639_4;
class Class_1_A6623677AE360DE9;
class Class_1_A6B0B39A319DDDE2_2;
class Class_1_C9DFE5EE7107C629_10;
class Class_1_D17272E82AE804C2_321;
class Class_1_FFE5B8A52EC38E9C;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class EvolveBuildLevel; }
namespace RPG::Client { class EvolveBuildLevelFromProto; }
namespace RPG::Client { class EvolveBuildSeasonData; }
namespace RPG::Client { class EvolveBuildSkill; }
namespace RPG::Client { class EvolveBuildStage; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDMODULE_CALCTEAMBONUSBUFFPARAM_OFFSET UNITYSDK_OFFSET(0x1994FF50)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CHECKOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x19951520)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CLEARLEVELINFO_OFFSET UNITYSDK_OFFSET(0x1994CCF0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CLEARSKILLRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x19950B60)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CONTINUELEVELINBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0x19952AC0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_CONTINUELEVEL_OFFSET UNITYSDK_OFFSET(0x1994D510)
#define RPG_CLIENT_EVOLVEBUILDMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1994C9E0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_DOOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x19951720)
#define RPG_CLIENT_EVOLVEBUILDMODULE_EXISTINGUNTAKENFAMEREWARD_OFFSET UNITYSDK_OFFSET(0x199524D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_EXISTINGUNTAKENFIRSTCLEARREWARD_OFFSET UNITYSDK_OFFSET(0x19952690)
#define RPG_CLIENT_EVOLVEBUILDMODULE_EXISTINGUNTAKENRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x1993EA70)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETCARDS_OFFSET UNITYSDK_OFFSET(0x19951E10)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETCOINCURRENCYICONPATHBYSEASON_OFFSET UNITYSDK_OFFSET(0x199506E0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETCURLEVELID_OFFSET UNITYSDK_OFFSET(0x1994E560)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETCURLEVELINFO_OFFSET UNITYSDK_OFFSET(0x1994E5D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETGEAR_OFFSET UNITYSDK_OFFSET(0x19945940)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETINPROGRESSLEVELINFOBYSEASON_OFFSET UNITYSDK_OFFSET(0x1994E380)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETMAXPASSEDSTAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0x199429D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETNEWLYUNLOCKEDGEARIDS_OFFSET UNITYSDK_OFFSET(0x1994F860)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETNEXTSTAGEUNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0x199433A0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETNORMALWEAPON_OFFSET UNITYSDK_OFFSET(0x1994EA20)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONDATAINBATTLE_OFFSET UNITYSDK_OFFSET(0x1994E760)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONDATA_OFFSET UNITYSDK_OFFSET(0x1994BF90)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTAGESWITHOUTTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1994BD60)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTRATEGYINBATTLE_OFFSET UNITYSDK_OFFSET(0x1994E9D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1994E6C0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSKILLLISTBYSEASON_OFFSET UNITYSDK_OFFSET(0x199508E0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSKILL_OFFSET UNITYSDK_OFFSET(0x1994E630)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSORTEDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x1994B4E0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETSTAGE_OFFSET UNITYSDK_OFFSET(0x1994BC80)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETTUTORIALSTAGEIDBYSEASON_OFFSET UNITYSDK_OFFSET(0x199503B0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETUNLOCKCHIPINDEX_OFFSET UNITYSDK_OFFSET(0x19943D80)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETWEAPONINITIALLEVEL_OFFSET UNITYSDK_OFFSET(0x19941190)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GETWEAPON_OFFSET UNITYSDK_OFFSET(0x1994AFF0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_CARDS_OFFSET UNITYSDK_OFFSET(0x19958830)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_CURRENTEVOLVEBUILDLEVELID_OFFSET UNITYSDK_OFFSET(0x19958760)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_HASLASTFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x19951670)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19942950)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_ISGIVINGUP_OFFSET UNITYSDK_OFFSET(0x19958920)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_LEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0x199587B0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_LOCKEDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x19958820)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_SHOWDEADLINE_OFFSET UNITYSDK_OFFSET(0x19958940)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_SKILLS_OFFSET UNITYSDK_OFFSET(0x19958800)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x199587F0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET_UNLOCKEDGEARIDS_OFFSET UNITYSDK_OFFSET(0x19958810)
#define RPG_CLIENT_EVOLVEBUILDMODULE_GET__MAINPAGEPATH_OFFSET UNITYSDK_OFFSET(0x1994F290)
#define RPG_CLIENT_EVOLVEBUILDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1994C3A0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISALLSTAGECHALLENGED_OFFSET UNITYSDK_OFFSET(0x1993EB80)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISINEVOLVEBUILDBATTLE_OFFSET UNITYSDK_OFFSET(0x1994EBD0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISINFIRSTPERIOD_OFFSET UNITYSDK_OFFSET(0x199504A0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISINTUTORIALSTAGEINBATTLE_OFFSET UNITYSDK_OFFSET(0x199501B0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISINTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0x1994FFF0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISSKILLSHOPAVAILABLE_OFFSET UNITYSDK_OFFSET(0x19950590)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISSTAGEINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1994E270)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ISTUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x19950050)
#define RPG_CLIENT_EVOLVEBUILDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1994CA30)
#define RPG_CLIENT_EVOLVEBUILDMODULE_OPENPHASETREASUREUI_OFFSET UNITYSDK_OFFSET(0x199519B0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0x19943530)
#define RPG_CLIENT_EVOLVEBUILDMODULE_PROTOAVATAR2AVATAR_OFFSET UNITYSDK_OFFSET(0x19950520)
#define RPG_CLIENT_EVOLVEBUILDMODULE_PROTOAVATARS2AVATARS_OFFSET UNITYSDK_OFFSET(0x1994B7F0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REFRESHSKILLRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x19950CE0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELDOWN_OFFSET UNITYSDK_OFFSET(0x1994F540)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELRESET_OFFSET UNITYSDK_OFFSET(0x1994F660)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELUP_OFFSET UNITYSDK_OFFSET(0x1994F420)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSTAGERERANDOM_OFFSET UNITYSDK_OFFSET(0x1994F710)
#define RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTTUTORIALLEVELSKIP_OFFSET UNITYSDK_OFFSET(0x1994F320)
#define RPG_CLIENT_EVOLVEBUILDMODULE_RETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x1994EEB0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_SAVETEAM_OFFSET UNITYSDK_OFFSET(0x1994DA40)
#define RPG_CLIENT_EVOLVEBUILDMODULE_SET_ISGIVINGUP_OFFSET UNITYSDK_OFFSET(0x19958930)
#define RPG_CLIENT_EVOLVEBUILDMODULE_STARTLEVELFORDEBUG_OFFSET UNITYSDK_OFFSET(0x1994DF40)
#define RPG_CLIENT_EVOLVEBUILDMODULE_STARTLEVEL_OFFSET UNITYSDK_OFFSET(0x1994D8D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1994F1A0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYCLOSELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x199514D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYOPENLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x199512D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x199516C0)
#define RPG_CLIENT_EVOLVEBUILDMODULE_TRYQUITLEVEL_OFFSET UNITYSDK_OFFSET(0x1994E170)
#define RPG_CLIENT_EVOLVEBUILDMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0x1994C480)
#define RPG_CLIENT_EVOLVEBUILDMODULE_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0x1994CB90)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1994D3B0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1994CD80)
#define RPG_CLIENT_EVOLVEBUILDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19958990)
#define RPG_CLIENT_EVOLVEBUILDMODULE__GETLOADPAGEPATHBYSEASON_OFFSET UNITYSDK_OFFSET(0x19951370)
#define RPG_CLIENT_EVOLVEBUILDMODULE__GETRESULTPAGEPATHBYSEASON_OFFSET UNITYSDK_OFFSET(0x19958600)
#define RPG_CLIENT_EVOLVEBUILDMODULE__GETSEASONINBATTLE_OFFSET UNITYSDK_OFFSET(0x1994E7F0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITCARDS_OFFSET UNITYSDK_OFFSET(0x19953F00)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITCOLLECTIONGEARS_OFFSET UNITYSDK_OFFSET(0x199539C0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITSEASONDATAS_OFFSET UNITYSDK_OFFSET(0x19952C90)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITSEASONSTAGES_OFFSET UNITYSDK_OFFSET(0x19954500)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITSKILLS_OFFSET UNITYSDK_OFFSET(0x19953690)
#define RPG_CLIENT_EVOLVEBUILDMODULE__INITSTAGES_OFFSET UNITYSDK_OFFSET(0x199532E0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ISALLSTAGECHALLENGED_B__63_0_OFFSET UNITYSDK_OFFSET(0x19958EB0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0x19957DA0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONEVOLVEBUILDSKIPTEACHLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x19957B70)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDCOINNOTIFY_OFFSET UNITYSDK_OFFSET(0x199579C0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x199573F0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x19957290)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDQUERYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x19954E60)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDRERANDOMSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x19957AE0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYDOWNSCRSP_OFFSET UNITYSDK_OFFSET(0x19957740)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYRESETSCRSP_OFFSET UNITYSDK_OFFSET(0x199578F0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYUPSCRSP_OFFSET UNITYSDK_OFFSET(0x19957590)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONMODULEINIT_OFFSET UNITYSDK_OFFSET(0x1994CA80)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONPHASERESULTDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x199584F0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONPVEBATTLERESULTSCRSP_OFFSET UNITYSDK_OFFSET(0x19957C20)
#define RPG_CLIENT_EVOLVEBUILDMODULE__ONUIBATTLEEVOLVEBUILDDEADLINESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x19958540)
#define RPG_CLIENT_EVOLVEBUILDMODULE__OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0x19952050)
#define RPG_CLIENT_EVOLVEBUILDMODULE__SEASONCAST_OFFSET UNITYSDK_OFFSET(0x1994E500)
#define RPG_CLIENT_EVOLVEBUILDMODULE__SETAUTOSHOWFLAGS_OFFSET UNITYSDK_OFFSET(0x1994ED80)
#define RPG_CLIENT_EVOLVEBUILDMODULE__SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x19952430)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATECOLLECTEDGEARS_OFFSET UNITYSDK_OFFSET(0x19956B30)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATEGAMEINFO_OFFSET UNITYSDK_OFFSET(0x19955310)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESKILLS_OFFSET UNITYSDK_OFFSET(0x19956420)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESTAGEPERIODS_OFFSET UNITYSDK_OFFSET(0x199570D0)
#define RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESTAGES_OFFSET UNITYSDK_OFFSET(0x19955850)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildModule_TypeDefinitionIndex = 63862;

	class EvolveBuildModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* _Stages_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedGearIDs_k__BackingField; // 0x18
		::RPG::Client::UIController* _LoadingPage; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildSkill*>* _SkillDict; // 0x28
		::System::Collections::Generic::List_1<::Class_1_3AD2528CD53B1639_4*>* _InProgressLevelInfoList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* _CardsDict; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>* _GearCollectionDic; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _FirstPassQuestIDs; // 0x48
		::Class_1_C9DFE5EE7107C629_10* _LastFinishNotify; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LockedStageIDs_k__BackingField; // 0x58
		::RPG::Client::EvolveBuildLevel* _LevelInstance; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildSkill*>* _Skills_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EvolveBuildSeason, ::RPG::Client::EvolveBuildSeasonData*>* _SeasonDataDict; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildStage*>* _StageDict; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotIgnoredStageIDs; // 0x80
		::System::Nullable_1<::System::UInt32> LastSelectGearID; // 0x88
		::System::Boolean _ShouldAutoShowMainPage; // 0x90
		::System::Boolean _ShouldAutoShowTutorialPage; // 0x91
		::System::Boolean _ShowDeadLine; // 0x92
		::System::Boolean _IsGivingUp_k__BackingField; // 0x93
		::System::Nullable_1<::System::UInt32> LastAbandonGearID; // 0x94
		::RPG::GameCore::EvolveBuildSeason _AutoShowSeason; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetUnlockChipIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETUNLOCKCHIPINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>* GetSeasonStagesWithoutTutorial(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStage*>*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTAGESWITHOUTTUTORIAL_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextStageUnlockQuestID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETNEXTSTAGEUNLOCKQUESTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxPassedStageMergedID(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETMAXPASSEDSTAGEMERGEDID_OFFSET))(this, a1);
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

		::System::Void UpdateLevelInfo(::Class_1_3AD2528CD53B1639_4* a1, ::Class_1_FFE5B8A52EC38E9C* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*, ::Class_1_FFE5B8A52EC38E9C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_UPDATELEVELINFO_OFFSET))(this, a1, a2);
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

		::System::Void ContinueLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_CONTINUELEVEL_OFFSET))(this, a1);
		}

		::System::Void StartLevel(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_STARTLEVEL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SaveTeam(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_SAVETEAM_OFFSET))(this, a1, a2);
		}

		::System::Void StartLevelForDebug(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_STARTLEVELFORDEBUG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TryQuitLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_TRYQUITLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean IsStageInProgress(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISSTAGEINPROGRESS_OFFSET))(this, a1);
		}

		::Class_1_3AD2528CD53B1639_4* GetInProgressLevelInfoBySeason(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::Class_1_3AD2528CD53B1639_4*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETINPROGRESSLEVELINFOBYSEASON_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurLevelID(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETCURLEVELID_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildLevelFromProto* GetCurLevelInfo(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::RPG::Client::EvolveBuildLevelFromProto*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETCURLEVELINFO_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildStage* GetStage(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSTAGE_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildSkill* GetSkill(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildSkill*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSKILL_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildSeasonData* GetSeasonData(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::RPG::Client::EvolveBuildSeasonData*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONDATA_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_827* GetSeasonStrategy(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::Class_0_16E4307DCC419505_827*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTRATEGY_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildSeasonData* GetSeasonDataInBattle()
		{
			return ((::RPG::Client::EvolveBuildSeasonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONDATAINBATTLE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_827* GetSeasonStrategyInBattle()
		{
			return ((::Class_0_16E4307DCC419505_827*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSEASONSTRATEGYINBATTLE_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildCollectionGear* GetNormalWeapon(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETNORMALWEAPON_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildCollectionGear* GetWeapon(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETWEAPON_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildCollectionGear* GetGear(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETGEAR_OFFSET))(this, a1);
		}

		static ::System::Boolean IsInEvolveBuildBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISINEVOLVEBUILDBATTLE_OFFSET))();
		}

		::System::Void _SetAutoShowFlags(::System::Boolean a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__SETAUTOSHOWFLAGS_OFFSET))(this, a1, a2);
		}

		::System::Void ReturnToMaze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_RETURNTOMAZE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void RequestTutorialLevelSkip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTTUTORIALLEVELSKIP_OFFSET))(this, a1);
		}

		::System::Void RequestSkillLevelUp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELUP_OFFSET))(this, a1, a2);
		}

		::System::Void RequestSkillLevelDown(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELDOWN_OFFSET))(this, a1, a2);
		}

		::System::Void RequestSkillLevelReset(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSKILLLEVELRESET_OFFSET))(this, a1);
		}

		::System::Void RequestStageReRandom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REQUESTSTAGERERANDOM_OFFSET))(this, a1);
		}

		::System::UInt32 GetWeaponInitialLevel(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETWEAPONINITIALLEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewlyUnlockedGearIDs(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETNEWLYUNLOCKEDGEARIDS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CalcTeamBonusBuffParam(::RPG::GameCore::MazeBuffRow* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_CALCTEAMBONUSBUFFPARAM_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInTutorialStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISINTUTORIALSTAGE_OFFSET))(this);
		}

		::System::Boolean IsTutorialStageID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISTUTORIALSTAGEID_OFFSET))(this, a1);
		}

		::System::Boolean IsInTutorialStageInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISINTUTORIALSTAGEINBATTLE_OFFSET))(this);
		}

		::System::UInt32 GetTutorialStageIDBySeason(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETTUTORIALSTAGEIDBYSEASON_OFFSET))(this, a1);
		}

		::System::Boolean IsInFirstPeriod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISINFIRSTPERIOD_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* ProtoAvatar2Avatar(::Class_1_35D7E19A6BADFE2D* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Class_1_35D7E19A6BADFE2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_PROTOAVATAR2AVATAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* ProtoAvatars2Avatars(::System::Collections::Generic::IEnumerable_1<::Class_1_35D7E19A6BADFE2D*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_35D7E19A6BADFE2D*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_PROTOAVATARS2AVATARS_OFFSET))(this, a1);
		}

		::System::Boolean IsSkillShopAvailable(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_ISSKILLSHOPAVAILABLE_OFFSET))(this, a1);
		}

		::System::String* GetCoinCurrencyIconPathBySeason(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETCOINCURRENCYICONPATHBYSEASON_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildSkill*>* GetSkillListBySeason(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildSkill*>*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSKILLLISTBYSEASON_OFFSET))(this, a1);
		}

		::System::Void ClearSkillRecommendation(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_CLEARSKILLRECOMMENDATION_OFFSET))(this, a1);
		}

		::System::Void RefreshSkillRecommendation(::RPG::Client::EvolveBuildStage* a1, ::RPG::Client::EvolveBuildCollectionGear* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildStage*, ::RPG::Client::EvolveBuildCollectionGear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_REFRESHSKILLRECOMMENDATION_OFFSET))(this, a1, a2);
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

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* GetCards(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETCARDS_OFFSET))(this, a1);
		}

		::System::Void OpenResultPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_OPENRESULTPAGE_OFFSET))(this);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* GetSortedGearEquipInfo(::Class_1_3AD2528CD53B1639_4* a1)
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_GETSORTEDGEAREQUIPINFO_OFFSET))(this, a1);
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

		::System::Void _OnGetEvolveBuildQueryInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDQUERYINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateGameInfo(::Class_1_A6B0B39A319DDDE2_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6B0B39A319DDDE2_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATEGAMEINFO_OFFSET))(this, a1);
		}

		::System::Void _UpdateStages(::Class_1_A6B0B39A319DDDE2_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6B0B39A319DDDE2_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESTAGES_OFFSET))(this, a1);
		}

		::System::Void _UpdateStagePeriods(::Class_1_A6623677AE360DE9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6623677AE360DE9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESTAGEPERIODS_OFFSET))(this, a1);
		}

		::System::Void _UpdateCollectedGears(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATECOLLECTEDGEARS_OFFSET))(this, a1);
		}

		::System::Void _UpdateSkills(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_321*>* a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_321*>*, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__UPDATESKILLS_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetEvolveBuildGiveupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDGIVEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetEvolveBuildFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetEvolveBuildShopAbilityUpScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetEvolveBuildShopAbilityDownScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYDOWNSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetEvolveBuildShopAbilityResetScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDSHOPABILITYRESETSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetEvolveBuildCoinNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDCOINNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetEvolveBuildReRandomStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONGETEVOLVEBUILDRERANDOMSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEvolveBuildSkipTeachLevelScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONEVOLVEBUILDSKIPTEACHLEVELSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPVEBattleResultScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONPVEBATTLERESULTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, a1);
		}

		::System::Void _OnPhaseResultDialogExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONPHASERESULTDIALOGEXIT_OFFSET))(this);
		}

		::System::Void _SetupLoadingStrategy(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__SETUPLOADINGSTRATEGY_OFFSET))(this, a1);
		}

		::System::Void _OnUIBattleEvolveBuildDeadLineStateChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ONUIBATTLEEVOLVEBUILDDEADLINESTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OpenResultPage(::Class_1_3AD2528CD53B1639_4* a1, ::Enum_3_4608E37A1B3D374A_13 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*, ::Enum_3_4608E37A1B3D374A_13))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__OPENRESULTPAGE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EvolveBuildSeason _SeasonCast(::Enum_3_0A3761FE34514D6C_30 a1)
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_30))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__SEASONCAST_OFFSET))(this, a1);
		}

		::System::String* _GetLoadPagePathBySeason(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__GETLOADPAGEPATHBYSEASON_OFFSET))(this, a1);
		}

		::System::String* _GetResultPagePathBySeason(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__GETRESULTPAGEPATHBYSEASON_OFFSET))(this, a1);
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

		::System::Void set_IsGivingUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE_SET_ISGIVINGUP_OFFSET))(this, a1);
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

		::System::Boolean _IsAllStageChallenged_b__63_0(::RPG::Client::EvolveBuildStage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE__ISALLSTAGECHALLENGED_B__63_0_OFFSET))(this, a1);
		}
	};
}
