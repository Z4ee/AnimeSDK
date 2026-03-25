#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_16.h"
#include "unitysdk/RPG/Client/AdventureEnterBattleState.h"
#include "unitysdk/RPG/Client/AdventureEnterBattleType.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/RPG/GameCore/LevelDifficulty.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/RPG/GameCore/StarFightDifficulty.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_4;
class Class_1_07CAE938A083FFA0;
class Class_1_08B5ACC5F83BB932;
class Class_1_2B2C39A45CFC5540;
class Class_1_3255B09AEB5A1EF7;
class Class_1_352A8B3482C80E7D;
class Class_1_352A8B3482C80E7D_12;
class Class_1_352A8B3482C80E7D_14;
class Class_1_352A8B3482C80E7D_19;
class Class_1_352A8B3482C80E7D_31;
class Class_1_352A8B3482C80E7D_56;
class Class_1_352A8B3482C80E7D_57;
class Class_1_352A8B3482C80E7D_60;
class Class_1_7AB88D713F5121B3_34;
class Class_1_7AB88D713F5121B3_35;
class Class_1_7AB88D713F5121B3_36;
class Class_1_82B09E39D0F93215;
class Class_1_8330F797C50754E5;
class Class_1_B66FD2332404CEBB;
class Class_1_CA3918258B4D86BD;
namespace Proto { class StrongChallengeAvatar; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class BattleGamePhaseInitParams; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleAreaRow; }
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class MazeBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_CANCELTRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0x9069940)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_CLEARBATTLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x9069860)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90619F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_ENTERBATTLEBYONLINEREPLAY_OFFSET UNITYSDK_OFFSET(0x9062CE0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0x906E530)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x906E600)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLENPCMONSTER_OFFSET UNITYSDK_OFFSET(0x906E570)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_ENTERBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x906E5F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_ISALREADYTRIGGERBATTLEBYNPCMONSTER_OFFSET UNITYSDK_OFFSET(0x906E5C0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_PENDINGBATTLE_OFFSET UNITYSDK_OFFSET(0x906E5B0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_SMOOTHLOADBATTLE_OFFSET UNITYSDK_OFFSET(0x906E5D0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x906E510)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_TRIGGERBATTLEATTACKER_OFFSET UNITYSDK_OFFSET(0x906E590)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_TRIGGERBATTLEDEFENDER_OFFSET UNITYSDK_OFFSET(0x906E550)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_INIT_OFFSET UNITYSDK_OFFSET(0x9060E20)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_ISBATTLEINITPARAMSREADY_OFFSET UNITYSDK_OFFSET(0x90698F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_PREPARETRIGGERBATTLEAFTERPACKET_OFFSET UNITYSDK_OFFSET(0x9068EC0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_PREPARETRIGGERBATTLEBEFOREPACKET_OFFSET UNITYSDK_OFFSET(0x90623D0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFODEFAULT_OFFSET UNITYSDK_OFFSET(0x9064C20)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFOLEGACY_OFFSET UNITYSDK_OFFSET(0x9062A80)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_1_OFFSET UNITYSDK_OFFSET(0x9063B30)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_2_OFFSET UNITYSDK_OFFSET(0x9062380)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0x9062750)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0x906E540)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_BATTLENPCMONSTER_OFFSET UNITYSDK_OFFSET(0x906E580)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_SMOOTHLOADBATTLE_OFFSET UNITYSDK_OFFSET(0x906E5E0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x906E520)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_TRIGGERBATTLEATTACKER_OFFSET UNITYSDK_OFFSET(0x906E5A0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_TRIGGERBATTLEDEFENDER_OFFSET UNITYSDK_OFFSET(0x906E560)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TERMINALMAZETOBATTLEBATTLETRANSITION_OFFSET UNITYSDK_OFFSET(0x9069700)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TICK_OFFSET UNITYSDK_OFFSET(0x9060EC0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYAETHERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9066560)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYAETHEREVENT_OFFSET UNITYSDK_OFFSET(0x9066350)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYBATTLECOLLEGE_OFFSET UNITYSDK_OFFSET(0x9064EC0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYBOXINGCLUB_OFFSET UNITYSDK_OFFSET(0x90641F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYCOCOON_OFFSET UNITYSDK_OFFSET(0x9063670)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYELATIONACTIVITY_OFFSET UNITYSDK_OFFSET(0x9067E90)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVENTLEGACY_OFFSET UNITYSDK_OFFSET(0x90627C0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVENT_OFFSET UNITYSDK_OFFSET(0x90624B0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVOLVEBUILDSTAGE_OFFSET UNITYSDK_OFFSET(0x9066860)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFANTASTICACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0x9065190)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFATEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9067B50)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFEVERTIMEACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0x9065D80)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0x9064630)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFIGHTFEST_OFFSET UNITYSDK_OFFSET(0x90678B0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYGM_OFFSET UNITYSDK_OFFSET(0x9062B00)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0x9068460)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYHELIOBUS_OFFSET UNITYSDK_OFFSET(0x9066060)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYLOCALLEGENDACTIVITY_OFFSET UNITYSDK_OFFSET(0x9068160)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYNPCMONSTER_OFFSET UNITYSDK_OFFSET(0x9061AC0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYQUICKFARMELEMENT_OFFSET UNITYSDK_OFFSET(0x9063CC0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUEENDLESS_OFFSET UNITYSDK_OFFSET(0x9066E00)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUEEVENT_OFFSET UNITYSDK_OFFSET(0x90643A0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUESHOP_OFFSET UNITYSDK_OFFSET(0x9067040)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSTARFIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0x9066B00)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSTRONGCHALLENGEACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0x90654A0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSUMMONACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0x9065A80)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSWORDTRAININGREPEATENDING_OFFSET UNITYSDK_OFFSET(0x9067190)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSWORDTRAINING_OFFSET UNITYSDK_OFFSET(0x90675F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYTELEVISIONACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0x90657A0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYTREASUREDUNGEON_OFFSET UNITYSDK_OFFSET(0x9064A80)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x906E610)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CHANGEBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x9069A00)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x9060D50)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_CREATEMAPTEMP_OFFSET UNITYSDK_OFFSET(0x9069C60)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_MATCHENTERBATTLETYPETOTRANSITIONMODE_OFFSET UNITYSDK_OFFSET(0x9069AD0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_OFFSET UNITYSDK_OFFSET(0x9068D40)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_PROCESSPREBATTLEPERFORM_OFFSET UNITYSDK_OFFSET(0x9069F90)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP2_LOADING_OFFSET UNITYSDK_OFFSET(0x906A950)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP2_OFFSET UNITYSDK_OFFSET(0x906A1D0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP2_UNLOAD_OFFSET UNITYSDK_OFFSET(0x906A2C0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP3_OFFSET UNITYSDK_OFFSET(0x906BE50)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__FILLBATTLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x906C3A0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INBATTLEAREABLOCKCACHE_OFFSET UNITYSDK_OFFSET(0x906E370)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INBATTLEPRELOADSIMULATION_OFFSET UNITYSDK_OFFSET(0x906E300)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INBATTLEPRELOAD_OFFSET UNITYSDK_OFFSET(0x906DC50)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INITBATTLEAREAMISSIONSTATUS_OFFSET UNITYSDK_OFFSET(0x906DEA0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONCHECKTRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0x9069400)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONLOADBATTLETRANSITIONFULLSCREENDONE_OFFSET UNITYSDK_OFFSET(0x9061200)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONLOADBATTLETRANSITIONSHOWDONE_OFFSET UNITYSDK_OFFSET(0x9061180)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONLOADINGBATTLESCENE_OFFSET UNITYSDK_OFFSET(0x906A9A0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__REPORTLOADINGBATTLESCENETIMEOUT_OFFSET UNITYSDK_OFFSET(0x9061260)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__STARTTRANSITIONSHOWTIMER_OFFSET UNITYSDK_OFFSET(0x9063330)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__TRANSITIONSHOW_OFFSET UNITYSDK_OFFSET(0x906E290)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__TRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0x9063480)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___INBATTLEAREABLOCKCACHE_B__65_0_OFFSET UNITYSDK_OFFSET(0x906E8D0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___INBATTLEPRELOAD_B__64_0_OFFSET UNITYSDK_OFFSET(0x906E880)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___INITBATTLEAREAMISSIONSTATUS_B__67_0_OFFSET UNITYSDK_OFFSET(0x906E910)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_0_OFFSET UNITYSDK_OFFSET(0x906E630)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_2_OFFSET UNITYSDK_OFFSET(0x906E640)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_4_OFFSET UNITYSDK_OFFSET(0x906E720)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_5_OFFSET UNITYSDK_OFFSET(0x906E7A0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_6_OFFSET UNITYSDK_OFFSET(0x906E790)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_7_OFFSET UNITYSDK_OFFSET(0x906E870)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___REPORTLOADINGBATTLESCENETIMEOUT_G___APPENDPROMISEERRORSTATE_3_0_OFFSET UNITYSDK_OFFSET(0x90618E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseEnterBattle_TypeDefinitionIndex = 48718;

	class AdventurePhaseEnterBattle : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_PreLeaveStep2Delay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle_TypeDefinitionIndex)->GetStaticField(0x10260);
		}
		static ::System::Single* StaticGet_InBattlePreloadSimulationTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle_TypeDefinitionIndex)->GetStaticField(0x10264);
		}
		static ::System::Single* StaticGet_PreLeaveStep2Delay_Universe()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle_TypeDefinitionIndex)->GetStaticField(0x10268);
		}
		::Class_1_82B09E39D0F93215* _OverrideGridFightData; // 0x10
		::RPG::GameCore::GameWorld* _GameWorld; // 0x18
		::Class_1_3255B09AEB5A1EF7* _TansitionManagerRef; // 0x20
		::Il2CppArray<::Class_1_07CAE938A083FFA0*>* _MonsterRewardList; // 0x28
		::RPG::Client::BattleGamePhaseInitParams* _BattleInitParams; // 0x30
		::Il2CppArray<::Class_1_7AB88D713F5121B3_35*>* _OverrideRogueGoalData; // 0x38
		::RPG::Client::Promises::Promise* _InBattlePreloadSimulationDonePromise; // 0x40
		::RPG::Client::Promises::Promise* _InBattleCacheBattleAreaBlockPromise; // 0x48
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* _OverrideLightTeam; // 0x50
		::Class_1_8330F797C50754E5* _OverrideFateData; // 0x58
		::RPG::Client::Promises::Promise* _TransitionShowDonePromise; // 0x60
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* _OverrideBuffs; // 0x68
		::RPG::GameCore::GameEntity* _TriggerBattleAttacker_k__BackingField; // 0x70
		::RPG::Client::Stage* _CurrBattleStage; // 0x78
		::RPG::Client::Promises::Promise* _InitBattleAreaMissionStatusPromise; // 0x80
		::Class_1_CA3918258B4D86BD* _replayData; // 0x88
		::RPG::GameCore::BattleAreaReferenceInfo* _BattleAreaInfo; // 0x90
		::Il2CppArray<::Class_1_07A210D994F284D8_4*>* _OverrideAchievementData; // 0x98
		::RPG::GameCore::GameEntity* _BattleNPCMonster_k__BackingField; // 0xA0
		::Class_1_08B5ACC5F83BB932* _OverrideSwordTrainingData; // 0xA8
		::Class_1_B66FD2332404CEBB* _OverrideEvolveBuildData; // 0xB0
		::RPG::GameCore::BattleAreaReferenceInfo* _BattleAreaInfo_k__BackingField; // 0xB8
		::RPG::Client::Promises::Promise* _InBattlePreloadDonePromise; // 0xC0
		::RPG::GameCore::BattleRogueData* _OverrideRogueData; // 0xC8
		::Il2CppArray<::Class_1_7AB88D713F5121B3_34*>* _OverrideScoreData; // 0xD0
		::Il2CppArray<::Class_1_2B2C39A45CFC5540*>* _OverrideMonsters; // 0xD8
		::RPG::GameCore::GameEntity* _TriggerBattleDefender_k__BackingField; // 0xE0
		::Il2CppArray<::Class_1_7AB88D713F5121B3_36*>* _OverrideRaidTargetData; // 0xE8
		::RPG::Client::AdventurePhase* _OwnerADVPhase; // 0xF0
		::Il2CppArray<::Class_1_7AB88D713F5121B3_34*>* _OverrideTargetData; // 0xF8
		::System::Single _TransitionPerformTimeoutTimer; // 0x100
		::System::Single TriggerBattlePerformMinTime; // 0x104
		::RPG::Client::AdventureEnterBattleState _EnterBattleState; // 0x108
		::System::Boolean _SmoothLoadBattle_k__BackingField; // 0x10C
		::System::Boolean _IsAlreadyTriggerBattleByNpcMonster; // 0x10D
		::System::Boolean _Waiting_ServerPacketDoneWaitFullScreen; // 0x10E
		::System::Boolean _PrepareTriggerBattleAfterPacketReentrancyProtect; // 0x10F
		::System::Single _DelayTransitionTime; // 0x110
		::System::UInt32 _ServerSeed; // 0x114
		::System::UInt32 _RoundsLimit; // 0x118
		::System::UInt32 _BattleID; // 0x11C
		::System::UInt32 _StageID_k__BackingField; // 0x120
		::System::Single _DelayTransitionFullScreenTimer; // 0x124
		::System::UInt32 _PendingBattleStageID; // 0x128
		::RPG::Client::AdventureEnterBattleType _CurrentEnterBattleType; // 0x12C
		::System::Single TriggerBattlePerformDelay; // 0x130
		::System::Single _DelayTransitionFullScreenTime; // 0x134
		::System::Single _DelayTransitionTimer; // 0x138
		::System::Boolean _EncryptTime; // 0x13C
		::System::Boolean _UseServerSeed; // 0x13D
		::System::Single _InBattlePreloadSimulationTimer; // 0x140
		::System::Nullable_1<::System::UInt32> _OverrideActionEventId; // 0x144
		::System::UInt32 _MaxWaveOverride; // 0x14C
		::System::UInt32 _WorldLevel; // 0x150
		::RPG::GameCore::RogueMode _OverrideRogueMode; // 0x154
		::System::Boolean _Waiting_FullScreenShowDoneWaitServerPacket; // 0x158
		::System::Boolean _IsTransitionShowDone; // 0x159
		::System::Boolean _IsTriggerBattleByNpcMonster; // 0x15A
		::System::Boolean ForbidAttackTriggerBattle; // 0x15B

		::System::Void _ctor(::RPG::Client::AdventurePhase* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CTOR_OFFSET))(this, owner);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_INIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _ReportLoadingBattleSceneTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__REPORTLOADINGBATTLESCENETIMEOUT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_DISPOSE_OFFSET))(this);
		}

		::System::Void TriggerBattleByNpcMonster(::RPG::GameCore::GameEntity* pAttacker, ::RPG::GameCore::GameEntity* pDefender, ::System::Single fTriggerDelay)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYNPCMONSTER_OFFSET))(this, pAttacker, pDefender, fTriggerDelay);
		}

		::System::Void TriggerBattleByEvent(::System::UInt32 eventID, ::System::UInt32 unifiedID, ::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 dimensionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVENT_OFFSET))(this, eventID, unifiedID, planeID, floorID, dimensionID);
		}

		::System::Void TriggerBattleByEventLegacy(::System::UInt32 eventID, ::System::UInt32 groupID, ::System::UInt32 battleAreaID, ::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 dimensionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVENTLEGACY_OFFSET))(this, eventID, groupID, battleAreaID, planeID, floorID, dimensionID);
		}

		::System::Void TriggerBattleByGM(::System::UInt32 stageID, ::System::UInt32 groupID, ::System::UInt32 battleAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYGM_OFFSET))(this, stageID, groupID, battleAreaID);
		}

		::System::Boolean EnterBattleByOnlineReplay(::Class_1_CA3918258B4D86BD* pReplay)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_CA3918258B4D86BD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_ENTERBATTLEBYONLINEREPLAY_OFFSET))(this, pReplay);
		}

		::System::Void TriggerBattleByCocoon(::System::UInt32 propEntityID, ::System::UInt32 cocoonID, ::System::UInt32 challengeCount, ::System::UInt32 worldLevel, ::System::Int32 battleAreaConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYCOCOON_OFFSET))(this, propEntityID, cocoonID, challengeCount, worldLevel, battleAreaConfigID);
		}

		::System::Void TriggerBattleByQuickFarmElement(::System::UInt32 farmId, ::System::UInt32 worldLevel, ::System::UInt32 challengeCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYQUICKFARMELEMENT_OFFSET))(this, farmId, worldLevel, challengeCount);
		}

		::System::Void TriggerBattleByBoxingClub(::System::UInt32 challengeID, ::System::UInt32 eventID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYBOXINGCLUB_OFFSET))(this, challengeID, eventID);
		}

		::System::Void TriggerBattleByRogueEvent(::System::UInt32 eventID, ::System::UInt32 groupID, ::System::UInt32 battleAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUEEVENT_OFFSET))(this, eventID, groupID, battleAreaID);
		}

		::System::Void TriggerBattleByFightActivity(::System::UInt32 groupID, ::RPG::GameCore::LevelDifficulty diffLevel, ::System::Collections::Generic::List_1<::System::UInt32>* avatarList, ::System::Collections::Generic::List_1<::System::UInt32>* foodList, ::System::UInt32 trialIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelDifficulty, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFIGHTACTIVITY_OFFSET))(this, groupID, diffLevel, avatarList, foodList, trialIndex);
		}

		::System::Void TriggerBattleByTreasureDungeon(::System::UInt32 levelID, ::System::UInt32 gridID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatarDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYTREASUREDUNGEON_OFFSET))(this, levelID, gridID, avatarDatas);
		}

		::System::Void TriggerBattleByBattleCollege(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYBATTLECOLLEGE_OFFSET))(this, id);
		}

		::System::Void TriggerBattleByFantasticActivityStage(::System::UInt32 fantasticStoryId, ::System::UInt32 battleId, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_14*>* avatarList, ::System::Collections::Generic::List_1<::System::UInt32>* buffList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_14*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFANTASTICACTIVITYSTAGE_OFFSET))(this, fantasticStoryId, battleId, avatarList, buffList);
		}

		::System::Void TriggerBattleByStrongChallengeActivityStage(::System::UInt32 challengeStageId, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>* avatarList, ::System::Collections::Generic::List_1<::System::UInt32>* buffList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSTRONGCHALLENGEACTIVITYSTAGE_OFFSET))(this, challengeStageId, avatarList, buffList);
		}

		::System::Void TriggerBattleByTelevisionActivityStage(::System::UInt32 televisionID, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_60*>* avatarList, ::System::Collections::Generic::List_1<::System::UInt32>* buffList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_60*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYTELEVISIONACTIVITYSTAGE_OFFSET))(this, televisionID, avatarList, buffList);
		}

		::System::Void TriggerBattleBySummonActivityStage(::System::UInt32 groupID, ::RPG::GameCore::ActivitySummonDifficulty difficulty, ::Class_1_352A8B3482C80E7D_57* masterAvatar, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_57*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_352A8B3482C80E7D_57*, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_57*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSUMMONACTIVITYSTAGE_OFFSET))(this, groupID, difficulty, masterAvatar, avatarList);
		}

		::System::Void TriggerBattleByFeverTimeActivityStage(::System::UInt32 feverTimeID, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D*>* avatarList, ::System::UInt32 p1BuffID, ::System::UInt32 p2BuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFEVERTIMEACTIVITYSTAGE_OFFSET))(this, feverTimeID, avatarList, p1BuffID, p2BuffID);
		}

		::System::Void TriggerBattleByHeliobus(::System::UInt32 challengeStageID, ::System::UInt32 skillId, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYHELIOBUS_OFFSET))(this, challengeStageID, skillId, avatarIdList);
		}

		::System::Void TriggerBattleByAetherEvent(::System::UInt32 eventID, ::System::UInt32 groupID, ::System::UInt32 battleAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYAETHEREVENT_OFFSET))(this, eventID, groupID, battleAreaID);
		}

		::System::Void TriggerBattleByAetherChallenge(::System::UInt32 stageId, ::System::UInt32 challengeID, ::System::UInt32 lineUpSlot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYAETHERCHALLENGE_OFFSET))(this, stageId, challengeID, lineUpSlot);
		}

		::System::Void TriggerBattleByEvolveBuildStage(::System::UInt32 levelId, ::System::UInt32 stagePeriodId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVOLVEBUILDSTAGE_OFFSET))(this, levelId, stagePeriodId);
		}

		::System::Void TriggerBattleByStarFightActivity(::System::UInt32 groupId, ::RPG::GameCore::StarFightDifficulty diffLevel, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_56*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StarFightDifficulty, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_56*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSTARFIGHTACTIVITY_OFFSET))(this, groupId, diffLevel, avatarList);
		}

		::System::Void TriggerBattleByRogueEndless(::System::UInt32 eventID, ::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 battleAreaID, ::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUEENDLESS_OFFSET))(this, eventID, planeID, floorID, groupID, battleAreaID, areaID);
		}

		::System::Void TriggerBattleByRogueShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUESHOP_OFFSET))(this);
		}

		::System::Void TriggerBattleBySwordTrainingRepeatEnding(::System::UInt32 stageID, ::System::UInt32 battleAreaID, ::System::Boolean isReBattle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSWORDTRAININGREPEATENDING_OFFSET))(this, stageID, battleAreaID, isReBattle);
		}

		::System::Void TriggerBattleBySwordTraining(::System::UInt32 stageID, ::System::UInt32 battleAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSWORDTRAINING_OFFSET))(this, stageID, battleAreaID);
		}

		::System::Void TriggerBattleByFightFest(::RPG::Client::AdventureEnterBattleType enterBattleType, ::System::UInt32 eventID, ::System::UInt32 battleAreaID, ::Enum_3_4608E37A1B3D374A_16 type, ::System::UInt32 raceID, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_19*>* avatars, ::System::Collections::Generic::List_1<::System::UInt32>* skills)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureEnterBattleType, ::System::UInt32, ::System::UInt32, ::Enum_3_4608E37A1B3D374A_16, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_19*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFIGHTFEST_OFFSET))(this, enterBattleType, eventID, battleAreaID, type, raceID, avatars, skills);
		}

		::System::Void TriggerBattleByFateActivity(::System::UInt32 masterID, ::System::UInt32 battleAreaID, ::System::UInt32 specifiedStageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFATEACTIVITY_OFFSET))(this, masterID, battleAreaID, specifiedStageID);
		}

		::System::Void TriggerBattleByElationActivity(::System::UInt32 levelID, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>* fixedAvatarList, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>* playerSelectedAvatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>*, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_12*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYELATIONACTIVITY_OFFSET))(this, levelID, fixedAvatarList, playerSelectedAvatarList);
		}

		::System::Void TriggerBattleByLocalLegendActivity(::System::UInt32 groupId, ::RPG::GameCore::ActivityLocalLegendDifficulty diffLevel, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_31*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityLocalLegendDifficulty, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_31*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYLOCALLEGENDACTIVITY_OFFSET))(this, groupId, diffLevel, avatarList);
		}

		::System::Void TriggerBattleByGridFight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYGRIDFIGHT_OFFSET))(this);
		}

		::System::Void PrepareTriggerBattleBeforePacket(::RPG::Client::AdventureEnterBattleType enterBattleType, ::System::UInt32 stageID, ::System::Single fTriggerDelay, ::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 DimensionID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureEnterBattleType, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_PREPARETRIGGERBATTLEBEFOREPACKET_OFFSET))(this, enterBattleType, stageID, fTriggerDelay, planeID, floorID, DimensionID);
		}

		::System::Void PrepareTriggerBattleAfterPacket(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_PREPARETRIGGERBATTLEAFTERPACKET_OFFSET))(this, param);
		}

		::System::Void TerminalMazeToBattleBattleTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TERMINALMAZETOBATTLEBATTLETRANSITION_OFFSET))(this);
		}

		::System::Void ClearBattleInitParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_CLEARBATTLEINITPARAMS_OFFSET))(this);
		}

		::System::Boolean IsBattleInitParamsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_ISBATTLEINITPARAMSREADY_OFFSET))(this);
		}

		::System::Void SetBattleAreaInfoDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFODEFAULT_OFFSET))(this);
		}

		::System::Void SetBattleAreaInfoLegacy(::System::UInt32 groupID, ::System::UInt32 battleAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFOLEGACY_OFFSET))(this, groupID, battleAreaID);
		}

		::System::Void SetBattleAreaInfo(::System::UInt32 unifiedId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_OFFSET))(this, unifiedId);
		}

		::System::Void SetBattleAreaInfo_1(::RPG::GameCore::BattleAreaRow* battleAreaRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_1_OFFSET))(this, battleAreaRow);
		}

		::System::Void SetBattleAreaInfo_2(::RPG::GameCore::BattleAreaReferenceInfo* battleAreaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAreaReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_2_OFFSET))(this, battleAreaInfo);
		}

		::System::Void CancelTriggerBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_CANCELTRIGGERBATTLE_OFFSET))(this);
		}

		::System::Void _EnterBattleStep1(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 DimensionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_OFFSET))(this, planeID, floorID, DimensionID);
		}

		::System::Void _EnterBattleStep1_MatchEnterBattleTypeToTransitionMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_MATCHENTERBATTLETYPETOTRANSITIONMODE_OFFSET))(this);
		}

		::System::Void _EnterBattleStep1_CreateMapTemp(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 DimensionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_CREATEMAPTEMP_OFFSET))(this, planeID, floorID, DimensionID);
		}

		::System::Void _EnterBattleStep1_ProcessPreBattlePerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_PROCESSPREBATTLEPERFORM_OFFSET))(this);
		}

		::System::Void _EnterBattleStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP2_OFFSET))(this);
		}

		::System::Void _EnterBattleStep2_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP2_UNLOAD_OFFSET))(this);
		}

		::System::Void _EnterBattleStep2_Loading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP2_LOADING_OFFSET))(this);
		}

		::System::Void _EnterBattleStep3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP3_OFFSET))(this);
		}

		::System::Void _ChangeBattleState(::RPG::Client::AdventureEnterBattleState nextState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureEnterBattleState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CHANGEBATTLESTATE_OFFSET))(this, nextState);
		}

		::System::Void _StartTransitionShowTimer(::System::Boolean isUniversePerform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__STARTTRANSITIONSHOWTIMER_OFFSET))(this, isUniversePerform);
		}

		::System::Boolean _FillBattleInitParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__FILLBATTLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _OnCheckTriggerBattle(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONCHECKTRIGGERBATTLE_OFFSET))(this, param);
		}

		::System::Void _TriggerBattle(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__TRIGGERBATTLE_OFFSET))(this, stageID);
		}

		::System::Void _OnLoadBattleTransitionFullScreenDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONLOADBATTLETRANSITIONFULLSCREENDONE_OFFSET))(this);
		}

		::System::Void _OnLoadBattleTransitionShowDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONLOADBATTLETRANSITIONSHOWDONE_OFFSET))(this);
		}

		::System::Void _OnLoadingBattleScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONLOADINGBATTLESCENE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _InBattlePreloadSimulation()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INBATTLEPRELOADSIMULATION_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _InBattlePreload()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INBATTLEPRELOAD_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _InBattleAreaBlockCache()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INBATTLEAREABLOCKCACHE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _TransitionShow()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__TRANSITIONSHOW_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _InitBattleAreaMissionStatus()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INITBATTLEAREAMISSIONSTATUS_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_STAGEID_OFFSET))(this, value);
		}

		::RPG::GameCore::BattleAreaReferenceInfo* get_BattleAreaInfo()
		{
			return ((::RPG::GameCore::BattleAreaReferenceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLEAREAINFO_OFFSET))(this);
		}

		::System::Void set_BattleAreaInfo(::RPG::GameCore::BattleAreaReferenceInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAreaReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_BATTLEAREAINFO_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_TriggerBattleDefender()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_TRIGGERBATTLEDEFENDER_OFFSET))(this);
		}

		::System::Void set_TriggerBattleDefender(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_TRIGGERBATTLEDEFENDER_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_BattleNPCMonster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLENPCMONSTER_OFFSET))(this);
		}

		::System::Void set_BattleNPCMonster(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_BATTLENPCMONSTER_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_TriggerBattleAttacker()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_TRIGGERBATTLEATTACKER_OFFSET))(this);
		}

		::System::Void set_TriggerBattleAttacker(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_TRIGGERBATTLEATTACKER_OFFSET))(this, value);
		}

		::System::Boolean get_PendingBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_PENDINGBATTLE_OFFSET))(this);
		}

		::System::Boolean get_IsAlreadyTriggerBattleByNpcMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_ISALREADYTRIGGERBATTLEBYNPCMONSTER_OFFSET))(this);
		}

		::System::Boolean get_SmoothLoadBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_SMOOTHLOADBATTLE_OFFSET))(this);
		}

		::System::Void set_SmoothLoadBattle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_SMOOTHLOADBATTLE_OFFSET))(this, value);
		}

		::RPG::Client::AdventureEnterBattleState get_EnterBattleState()
		{
			return ((::RPG::Client::AdventureEnterBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_ENTERBATTLESTATE_OFFSET))(this);
		}

		::RPG::Client::BattleGamePhaseInitParams* get_BattleInitParams()
		{
			return ((::RPG::Client::BattleGamePhaseInitParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLEINITPARAMS_OFFSET))(this);
		}

		static ::System::Void __ReportLoadingBattleSceneTimeout_g___AppendPromiseErrorState_3_0(::System::Text::StringBuilder* sb, ::RPG::Client::Promises::Promise* promise, ::System::String* promiseName)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::RPG::Client::Promises::Promise*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___REPORTLOADINGBATTLESCENETIMEOUT_G___APPENDPROMISEERRORSTATE_3_0_OFFSET))(sb, promise, promiseName);
		}

		::System::Void __OnLoadingBattleScene_b__62_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_0_OFFSET))(this);
		}

		::System::Void __OnLoadingBattleScene_b__62_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_2_OFFSET))(this);
		}

		::System::Void __OnLoadingBattleScene_b__62_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_4_OFFSET))(this);
		}

		::System::Void __OnLoadingBattleScene_b__62_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_6_OFFSET))(this);
		}

		::System::Void __OnLoadingBattleScene_b__62_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_5_OFFSET))(this);
		}

		::System::Void __OnLoadingBattleScene_b__62_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_7_OFFSET))(this);
		}

		::System::Void __InBattlePreload_b__64_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___INBATTLEPRELOAD_B__64_0_OFFSET))(this);
		}

		::System::Void __InBattleAreaBlockCache_b__65_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___INBATTLEAREABLOCKCACHE_B__65_0_OFFSET))(this);
		}

		::System::Void __InitBattleAreaMissionStatus_b__67_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___INITBATTLEAREAMISSIONSTATUS_B__67_0_OFFSET))(this);
		}
	};
}
