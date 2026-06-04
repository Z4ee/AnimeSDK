#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_14.h"
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
class Class_1_08B5ACC5F83BB932;
class Class_1_1CBA230307F9C289_15;
class Class_1_1CBA230307F9C289_17;
class Class_1_1CBA230307F9C289_22;
class Class_1_1CBA230307F9C289_2;
class Class_1_1CBA230307F9C289_36;
class Class_1_1CBA230307F9C289_61;
class Class_1_1CBA230307F9C289_62;
class Class_1_1CBA230307F9C289_65;
class Class_1_2178DA8BBAE007EC;
class Class_1_3F916053B9BB8D97;
class Class_1_60D44DC008A2AE94;
class Class_1_7AB88D713F5121B3_43;
class Class_1_7AB88D713F5121B3_44;
class Class_1_7AB88D713F5121B3_45;
class Class_1_82B09E39D0F93215;
class Class_1_B66FD2332404CEBB;
class Class_1_CA3918258B4D86BD;
class Class_1_E5506B2509E2F0C8;
namespace Proto { class StrongChallengeAvatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class BattleGamePhaseInitParams; }
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

#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_CANCELTRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0xB26B080)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_CLEARBATTLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB24B1F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB24C150)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_ENTERBATTLEBYONLINEREPLAY_OFFSET UNITYSDK_OFFSET(0xB264D20)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0xB26FF80)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB270050)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLENPCMONSTER_OFFSET UNITYSDK_OFFSET(0xB26FFC0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_ENTERBATTLESTATE_OFFSET UNITYSDK_OFFSET(0xB270040)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_ISALREADYTRIGGERBATTLEBYNPCMONSTER_OFFSET UNITYSDK_OFFSET(0xB270010)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_PENDINGBATTLE_OFFSET UNITYSDK_OFFSET(0xB270000)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_SMOOTHLOADBATTLE_OFFSET UNITYSDK_OFFSET(0xB270020)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB26FF60)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_TRIGGERBATTLEATTACKER_OFFSET UNITYSDK_OFFSET(0xB26FFE0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_TRIGGERBATTLEDEFENDER_OFFSET UNITYSDK_OFFSET(0xB26FFA0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_INIT_OFFSET UNITYSDK_OFFSET(0xB2515D0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_ISBATTLEINITPARAMSREADY_OFFSET UNITYSDK_OFFSET(0xB258E60)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_PREPARETRIGGERBATTLEAFTERPACKET_OFFSET UNITYSDK_OFFSET(0xB258EB0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_PREPARETRIGGERBATTLEBEFOREPACKET_OFFSET UNITYSDK_OFFSET(0xB264410)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFODEFAULT_OFFSET UNITYSDK_OFFSET(0xB251720)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFOLEGACY_OFFSET UNITYSDK_OFFSET(0xB264AC0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_1_OFFSET UNITYSDK_OFFSET(0xB265B10)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_2_OFFSET UNITYSDK_OFFSET(0xB2643C0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0xB264790)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0xB26FF90)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_BATTLENPCMONSTER_OFFSET UNITYSDK_OFFSET(0xB26FFD0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_SMOOTHLOADBATTLE_OFFSET UNITYSDK_OFFSET(0xB270030)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB26FF70)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_TRIGGERBATTLEATTACKER_OFFSET UNITYSDK_OFFSET(0xB26FFF0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_TRIGGERBATTLEDEFENDER_OFFSET UNITYSDK_OFFSET(0xB26FFB0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TERMINALMAZETOBATTLEBATTLETRANSITION_OFFSET UNITYSDK_OFFSET(0xB24B0A0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TICK_OFFSET UNITYSDK_OFFSET(0xB257A00)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYAETHERCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB268340)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYAETHEREVENT_OFFSET UNITYSDK_OFFSET(0xB268130)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYBATTLECOLLEGE_OFFSET UNITYSDK_OFFSET(0xB266C90)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYBOXINGCLUB_OFFSET UNITYSDK_OFFSET(0xB2661D0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYCOCOON_OFFSET UNITYSDK_OFFSET(0xB265650)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYELATIONACTIVITY_OFFSET UNITYSDK_OFFSET(0xB269CB0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVENTLEGACY_OFFSET UNITYSDK_OFFSET(0xB264800)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVENT_OFFSET UNITYSDK_OFFSET(0xB2644F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVOLVEBUILDSTAGE_OFFSET UNITYSDK_OFFSET(0xB268650)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFANTASTICACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0xB266F60)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFATEACTIVITY_OFFSET UNITYSDK_OFFSET(0xB269970)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFEVERTIMEACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0xB267B50)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0xB266610)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFIGHTFEST_OFFSET UNITYSDK_OFFSET(0xB2696D0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYGM_OFFSET UNITYSDK_OFFSET(0xB264B40)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xB26A290)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYHELIOBUS_OFFSET UNITYSDK_OFFSET(0xB267E40)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYLOCALLEGENDACTIVITY_OFFSET UNITYSDK_OFFSET(0xB269F80)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYNPCMONSTER_OFFSET UNITYSDK_OFFSET(0xB263AE0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYQUICKFARMELEMENT_OFFSET UNITYSDK_OFFSET(0xB265CA0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUEENDLESS_OFFSET UNITYSDK_OFFSET(0xB268C10)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUEEVENT_OFFSET UNITYSDK_OFFSET(0xB266380)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUESHOP_OFFSET UNITYSDK_OFFSET(0xB268E50)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSTARFIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0xB268900)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSTRONGCHALLENGEACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0xB267270)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSUMMONACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0xB267850)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSWORDTRAININGREPEATENDING_OFFSET UNITYSDK_OFFSET(0xB268FB0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSWORDTRAINING_OFFSET UNITYSDK_OFFSET(0xB269410)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYTELEVISIONACTIVITYSTAGE_OFFSET UNITYSDK_OFFSET(0xB267570)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYTREASUREDUNGEON_OFFSET UNITYSDK_OFFSET(0xB266AE0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB270060)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CHANGEBATTLESTATE_OFFSET UNITYSDK_OFFSET(0xB26B140)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0xB251500)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_CREATEMAPTEMP_OFFSET UNITYSDK_OFFSET(0xB26B390)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_MATCHENTERBATTLETYPETOTRANSITIONMODE_OFFSET UNITYSDK_OFFSET(0xB26B200)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_OFFSET UNITYSDK_OFFSET(0xB26ABA0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_PROCESSPREBATTLEPERFORM_OFFSET UNITYSDK_OFFSET(0xB26B6E0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP2_LOADING_OFFSET UNITYSDK_OFFSET(0xB26C190)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP2_OFFSET UNITYSDK_OFFSET(0xB26B9C0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP2_UNLOAD_OFFSET UNITYSDK_OFFSET(0xB26BAB0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP3_OFFSET UNITYSDK_OFFSET(0xB26D880)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__FILLBATTLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB26DDC0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INBATTLEAREABLOCKCACHE_OFFSET UNITYSDK_OFFSET(0xB26FD60)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INBATTLEPRELOADSIMULATION_OFFSET UNITYSDK_OFFSET(0xB26FCF0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INBATTLEPRELOAD_OFFSET UNITYSDK_OFFSET(0xB26F650)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__INITBATTLEAREAMISSIONSTATUS_OFFSET UNITYSDK_OFFSET(0xB26F8B0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONCHECKTRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0xB26AD30)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONLOADBATTLETRANSITIONFULLSCREENDONE_OFFSET UNITYSDK_OFFSET(0xB2632F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONLOADBATTLETRANSITIONSHOWDONE_OFFSET UNITYSDK_OFFSET(0xB263270)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONLOADINGBATTLESCENE_OFFSET UNITYSDK_OFFSET(0xB26C1E0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__REPORTLOADINGBATTLESCENETIMEOUT_OFFSET UNITYSDK_OFFSET(0xB263350)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__STARTTRANSITIONSHOWTIMER_OFFSET UNITYSDK_OFFSET(0xB265300)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__TRANSITIONSHOW_OFFSET UNITYSDK_OFFSET(0xB26FC80)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__TRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0xB265450)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___INBATTLEAREABLOCKCACHE_B__65_0_OFFSET UNITYSDK_OFFSET(0xB270350)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___INBATTLEPRELOAD_B__64_0_OFFSET UNITYSDK_OFFSET(0xB270300)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___INITBATTLEAREAMISSIONSTATUS_B__67_0_OFFSET UNITYSDK_OFFSET(0xB270390)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_0_OFFSET UNITYSDK_OFFSET(0xB270080)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_2_OFFSET UNITYSDK_OFFSET(0xB270090)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_4_OFFSET UNITYSDK_OFFSET(0xB270170)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_5_OFFSET UNITYSDK_OFFSET(0xB270200)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_6_OFFSET UNITYSDK_OFFSET(0xB2701F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___ONLOADINGBATTLESCENE_B__62_7_OFFSET UNITYSDK_OFFSET(0xB2702F0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___REPORTLOADINGBATTLESCENETIMEOUT_G___APPENDPROMISEERRORSTATE_3_0_OFFSET UNITYSDK_OFFSET(0xB2639D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseEnterBattle_TypeDefinitionIndex = 56218;

	class AdventurePhaseEnterBattle : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_PreLeaveStep2Delay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle_TypeDefinitionIndex)->GetStaticField(0x12390);
		}
		static ::System::Single* StaticGet_PreLeaveStep2Delay_Universe()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle_TypeDefinitionIndex)->GetStaticField(0x12394);
		}
		static ::System::Single* StaticGet_InBattlePreloadSimulationTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseEnterBattle_TypeDefinitionIndex)->GetStaticField(0x12398);
		}
		::Il2CppArray<::Class_1_3F916053B9BB8D97*>* _OverrideMonsters; // 0x10
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* _OverrideLightTeam; // 0x18
		::Class_1_2178DA8BBAE007EC* _TansitionManagerRef; // 0x20
		::RPG::GameCore::BattleAreaReferenceInfo* _BattleAreaInfo; // 0x28
		::RPG::Client::BattleGamePhaseInitParams* _BattleInitParams; // 0x30
		::Il2CppArray<::Class_1_07A210D994F284D8_4*>* _OverrideAchievementData; // 0x38
		::RPG::Client::AdventurePhase* _OwnerADVPhase; // 0x40
		::RPG::GameCore::GameEntity* _BattleNPCMonster_k__BackingField; // 0x48
		::RPG::Client::Promises::Promise* _InBattlePreloadSimulationDonePromise; // 0x50
		::Il2CppArray<::Class_1_7AB88D713F5121B3_45*>* _OverrideRaidTargetData; // 0x58
		::RPG::Client::Promises::Promise* _InBattlePreloadDonePromise; // 0x60
		::RPG::Client::Promises::Promise* _InBattleCacheBattleAreaBlockPromise; // 0x68
		::Class_1_E5506B2509E2F0C8* _OverrideFateData; // 0x70
		::RPG::GameCore::BattleRogueData* _OverrideRogueData; // 0x78
		::RPG::Client::Promises::Promise* _TransitionShowDonePromise; // 0x80
		::Class_1_CA3918258B4D86BD* _replayData; // 0x88
		::Class_1_B66FD2332404CEBB* _OverrideEvolveBuildData; // 0x90
		::Il2CppArray<::Class_1_7AB88D713F5121B3_44*>* _OverrideRogueGoalData; // 0x98
		::Il2CppArray<::Class_1_60D44DC008A2AE94*>* _MonsterRewardList; // 0xA0
		::RPG::GameCore::BattleAreaReferenceInfo* _BattleAreaInfo_k__BackingField; // 0xA8
		::Il2CppArray<::Class_1_7AB88D713F5121B3_43*>* _OverrideScoreData; // 0xB0
		::RPG::GameCore::GameEntity* _TriggerBattleDefender_k__BackingField; // 0xB8
		::RPG::Client::Stage* _CurrBattleStage; // 0xC0
		::Class_1_08B5ACC5F83BB932* _OverrideSwordTrainingData; // 0xC8
		::RPG::Client::Promises::Promise* _InitBattleAreaMissionStatusPromise; // 0xD0
		::RPG::GameCore::GameEntity* _TriggerBattleAttacker_k__BackingField; // 0xD8
		::Class_1_82B09E39D0F93215* _OverrideGridFightData; // 0xE0
		::Il2CppArray<::Class_1_7AB88D713F5121B3_43*>* _OverrideTargetData; // 0xE8
		::RPG::GameCore::GameWorld* _GameWorld; // 0xF0
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* _OverrideBuffs; // 0xF8
		::System::UInt32 _WorldLevel; // 0x100
		::System::Single _DelayTransitionTimer; // 0x104
		::System::UInt32 _RoundsLimit; // 0x108
		::System::Single _DelayTransitionFullScreenTimer; // 0x10C
		::RPG::Client::AdventureEnterBattleState _EnterBattleState; // 0x110
		::System::UInt32 _ServerSeed; // 0x114
		::System::Nullable_1<::System::UInt32> _OverrideActionEventId; // 0x118
		::System::Boolean _PrepareTriggerBattleAfterPacketReentrancyProtect; // 0x120
		::System::Boolean _IsTransitionShowDone; // 0x121
		::System::Boolean _EncryptTime; // 0x122
		::System::Boolean _SmoothLoadBattle_k__BackingField; // 0x123
		::System::Single _DelayTransitionTime; // 0x124
		::RPG::GameCore::RogueMode _OverrideRogueMode; // 0x128
		::System::Boolean _Waiting_FullScreenShowDoneWaitServerPacket; // 0x12C
		::System::Boolean _IsAlreadyTriggerBattleByNpcMonster; // 0x12D
		::System::Boolean _UseServerSeed; // 0x12E
		::System::Boolean _Waiting_ServerPacketDoneWaitFullScreen; // 0x12F
		::System::UInt32 _StageID_k__BackingField; // 0x130
		::System::UInt32 _MaxWaveOverride; // 0x134
		::System::Single _TransitionPerformTimeoutTimer; // 0x138
		::System::Single _InBattlePreloadSimulationTimer; // 0x13C
		::System::Single TriggerBattlePerformDelay; // 0x140
		::System::Single TriggerBattlePerformMinTime; // 0x144
		::RPG::Client::AdventureEnterBattleType _CurrentEnterBattleType; // 0x148
		::System::UInt32 _PendingBattleStageID; // 0x14C
		::System::UInt32 _BattleID; // 0x150
		::System::Single _DelayTransitionFullScreenTime; // 0x154
		::System::Boolean _IsTriggerBattleByNpcMonster; // 0x158
		::System::Boolean ForbidAttackTriggerBattle; // 0x159

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_INIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TICK_OFFSET))(this, a1);
		}

		::System::Void _ReportLoadingBattleSceneTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__REPORTLOADINGBATTLESCENETIMEOUT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_DISPOSE_OFFSET))(this);
		}

		::System::Void TriggerBattleByNpcMonster(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYNPCMONSTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByEvent(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVENT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void TriggerBattleByEventLegacy(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVENTLEGACY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void TriggerBattleByGM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EnterBattleByOnlineReplay(::Class_1_CA3918258B4D86BD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_CA3918258B4D86BD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_ENTERBATTLEBYONLINEREPLAY_OFFSET))(this, a1);
		}

		::System::Void TriggerBattleByCocoon(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYCOCOON_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void TriggerBattleByQuickFarmElement(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYQUICKFARMELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByBoxingClub(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYBOXINGCLUB_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerBattleByRogueEvent(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUEEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByFightActivity(::System::UInt32 a1, ::RPG::GameCore::LevelDifficulty a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelDifficulty, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFIGHTACTIVITY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void TriggerBattleByTreasureDungeon(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYTREASUREDUNGEON_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByBattleCollege(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYBATTLECOLLEGE_OFFSET))(this, a1);
		}

		::System::Void TriggerBattleByFantasticActivityStage(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_17*>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_17*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFANTASTICACTIVITYSTAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TriggerBattleByStrongChallengeActivityStage(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSTRONGCHALLENGEACTIVITYSTAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByTelevisionActivityStage(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_65*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_65*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYTELEVISIONACTIVITYSTAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleBySummonActivityStage(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2, ::Class_1_1CBA230307F9C289_62* a3, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_62*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_1CBA230307F9C289_62*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_62*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSUMMONACTIVITYSTAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TriggerBattleByFeverTimeActivityStage(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_2*>* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_2*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFEVERTIMEACTIVITYSTAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TriggerBattleByHeliobus(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYHELIOBUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByAetherEvent(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYAETHEREVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByAetherChallenge(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYAETHERCHALLENGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByEvolveBuildStage(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYEVOLVEBUILDSTAGE_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerBattleByStarFightActivity(::System::UInt32 a1, ::RPG::GameCore::StarFightDifficulty a2, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StarFightDifficulty, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_61*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSTARFIGHTACTIVITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByRogueEndless(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUEENDLESS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void TriggerBattleByRogueShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYROGUESHOP_OFFSET))(this);
		}

		::System::Void TriggerBattleBySwordTrainingRepeatEnding(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSWORDTRAININGREPEATENDING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleBySwordTraining(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYSWORDTRAINING_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerBattleByFightFest(::RPG::Client::AdventureEnterBattleType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Enum_3_4608E37A1B3D374A_14 a4, ::System::UInt32 a5, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_22*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureEnterBattleType, ::System::UInt32, ::System::UInt32, ::Enum_3_4608E37A1B3D374A_14, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_22*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFIGHTFEST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void TriggerBattleByFateActivity(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYFATEACTIVITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByElationActivity(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>* a2, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_15*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYELATIONACTIVITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByLocalLegendActivity(::System::UInt32 a1, ::RPG::GameCore::ActivityLocalLegendDifficulty a2, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_36*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityLocalLegendDifficulty, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_36*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYLOCALLEGENDACTIVITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerBattleByGridFight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_TRIGGERBATTLEBYGRIDFIGHT_OFFSET))(this);
		}

		::System::Void PrepareTriggerBattleBeforePacket(::RPG::Client::AdventureEnterBattleType a1, ::System::UInt32 a2, ::System::Single a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureEnterBattleType, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_PREPARETRIGGERBATTLEBEFOREPACKET_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PrepareTriggerBattleAfterPacket(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_PREPARETRIGGERBATTLEAFTERPACKET_OFFSET))(this, a1);
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

		::System::Void SetBattleAreaInfoLegacy(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFOLEGACY_OFFSET))(this, a1, a2);
		}

		::System::Void SetBattleAreaInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_OFFSET))(this, a1);
		}

		::System::Void SetBattleAreaInfo_1(::RPG::GameCore::BattleAreaRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_1_OFFSET))(this, a1);
		}

		::System::Void SetBattleAreaInfo_2(::RPG::GameCore::BattleAreaReferenceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAreaReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SETBATTLEAREAINFO_2_OFFSET))(this, a1);
		}

		::System::Void CancelTriggerBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_CANCELTRIGGERBATTLE_OFFSET))(this);
		}

		::System::Void _EnterBattleStep1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _EnterBattleStep1_MatchEnterBattleTypeToTransitionMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_MATCHENTERBATTLETYPETOTRANSITIONMODE_OFFSET))(this);
		}

		::System::Void _EnterBattleStep1_CreateMapTemp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ENTERBATTLESTEP1_CREATEMAPTEMP_OFFSET))(this, a1, a2, a3);
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

		::System::Void _ChangeBattleState(::RPG::Client::AdventureEnterBattleState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureEnterBattleState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__CHANGEBATTLESTATE_OFFSET))(this, a1);
		}

		::System::Void _StartTransitionShowTimer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__STARTTRANSITIONSHOWTIMER_OFFSET))(this, a1);
		}

		::System::Boolean _FillBattleInitParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__FILLBATTLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _OnCheckTriggerBattle(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__ONCHECKTRIGGERBATTLE_OFFSET))(this, a1);
		}

		::System::Void _TriggerBattle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE__TRIGGERBATTLE_OFFSET))(this, a1);
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

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_STAGEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleAreaReferenceInfo* get_BattleAreaInfo()
		{
			return ((::RPG::GameCore::BattleAreaReferenceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLEAREAINFO_OFFSET))(this);
		}

		::System::Void set_BattleAreaInfo(::RPG::GameCore::BattleAreaReferenceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAreaReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_BATTLEAREAINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_TriggerBattleDefender()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_TRIGGERBATTLEDEFENDER_OFFSET))(this);
		}

		::System::Void set_TriggerBattleDefender(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_TRIGGERBATTLEDEFENDER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_BattleNPCMonster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLENPCMONSTER_OFFSET))(this);
		}

		::System::Void set_BattleNPCMonster(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_BATTLENPCMONSTER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_TriggerBattleAttacker()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_TRIGGERBATTLEATTACKER_OFFSET))(this);
		}

		::System::Void set_TriggerBattleAttacker(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_TRIGGERBATTLEATTACKER_OFFSET))(this, a1);
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

		::System::Void set_SmoothLoadBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_SET_SMOOTHLOADBATTLE_OFFSET))(this, a1);
		}

		::RPG::Client::AdventureEnterBattleState get_EnterBattleState()
		{
			return ((::RPG::Client::AdventureEnterBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_ENTERBATTLESTATE_OFFSET))(this);
		}

		::RPG::Client::BattleGamePhaseInitParams* get_BattleInitParams()
		{
			return ((::RPG::Client::BattleGamePhaseInitParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE_GET_BATTLEINITPARAMS_OFFSET))(this);
		}

		static ::System::Void __ReportLoadingBattleSceneTimeout_g___AppendPromiseErrorState_3_0(::System::Text::StringBuilder* a1, ::RPG::Client::Promises::Promise* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::RPG::Client::Promises::Promise*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___REPORTLOADINGBATTLESCENETIMEOUT_G___APPENDPROMISEERRORSTATE_3_0_OFFSET))(a1, a2, a3);
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
