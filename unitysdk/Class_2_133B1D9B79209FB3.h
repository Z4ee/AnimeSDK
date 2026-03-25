#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimBaseEventActionService_1.h"
#include "unitysdk/RPG/GameCore/FiveDimAnimatorCullingMode.h"
#include "unitysdk/Struct_2_4127FF4C06B070D3.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"

class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class FiveDimAddDynamicColliderDetectAction; }
namespace RPG::GameCore { class FiveDimAddGlobalTimeScaleAction; }
namespace RPG::GameCore { class FiveDimAddMoneyAction; }
namespace RPG::GameCore { class FiveDimAddRTPCAction; }
namespace RPG::GameCore { class FiveDimApplyPlayerInteractAction; }
namespace RPG::GameCore { class FiveDimAudioPostEventAction; }
namespace RPG::GameCore { class FiveDimAudioSetStateAction; }
namespace RPG::GameCore { class FiveDimBaseScrollGameEndAction; }
namespace RPG::GameCore { class FiveDimBeatBackPlayerAction; }
namespace RPG::GameCore { class FiveDimBroadcastEventToChildrenMinionAction; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimCameraShakeAction; }
namespace RPG::GameCore { class FiveDimChenLingCaptureFrameAction; }
namespace RPG::GameCore { class FiveDimChenLingEmotionAudioPostEventAction; }
namespace RPG::GameCore { class FiveDimClearPlayerVelocityAction; }
namespace RPG::GameCore { class FiveDimClientFinishMissionAction; }
namespace RPG::GameCore { class FiveDimConditionAllOf; }
namespace RPG::GameCore { class FiveDimConditionAnyOf; }
namespace RPG::GameCore { class FiveDimConditionNoneOf; }
namespace RPG::GameCore { class FiveDimCreateMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimCreatePhantomPlayerAction; }
namespace RPG::GameCore { class FiveDimCrystalChangeHPAction; }
namespace RPG::GameCore { class FiveDimDebugLogEventAction; }
namespace RPG::GameCore { class FiveDimDestroyMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimDestroyPhantomPlayerAction; }
namespace RPG::GameCore { class FiveDimDropEntityAction; }
namespace RPG::GameCore { class FiveDimEnableIntervalSpawnAction; }
namespace RPG::GameCore { class FiveDimEnergyBlockChargeAction; }
namespace RPG::GameCore { class FiveDimEnterDashPrepareStateAction; }
namespace RPG::GameCore { class FiveDimEnterHiddenAreaAction; }
namespace RPG::GameCore { class FiveDimFinishChenLingGameBoyAction; }
namespace RPG::GameCore { class FiveDimFireAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimFireEffectAction; }
namespace RPG::GameCore { class FiveDimForceResetMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimForceResetPlayerAction; }
namespace RPG::GameCore { class FiveDimGarbageBinFinishMoveAction; }
namespace RPG::GameCore { class FiveDimGrenadierAttackAction; }
namespace RPG::GameCore { class FiveDimJumpToSplinePointAction; }
namespace RPG::GameCore { class FiveDimKillAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimLightningChangeStateAction; }
namespace RPG::GameCore { class FiveDimMiniGameCoinCollectedAction; }
namespace RPG::GameCore { class FiveDimMinionDestroyByPresetNameAction; }
namespace RPG::GameCore { class FiveDimMinionDestroySelfAction; }
namespace RPG::GameCore { class FiveDimMissionTalkAction; }
namespace RPG::GameCore { class FiveDimMoveToMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimMoveToNextSplinePointAction; }
namespace RPG::GameCore { class FiveDimMutePlayerInputAction; }
namespace RPG::GameCore { class FiveDimMuteUIInputAction; }
namespace RPG::GameCore { class FiveDimOverrideSimpleGameLevelTipAction; }
namespace RPG::GameCore { class FiveDimPauseMusicAction; }
namespace RPG::GameCore { class FiveDimPlayShootArrowAnimAction; }
namespace RPG::GameCore { class FiveDimPlaySummonBotAnimAction; }
namespace RPG::GameCore { class FiveDimPlayUsePropAnimAction; }
namespace RPG::GameCore { class FiveDimPlayerSkillArrowCondition; }
namespace RPG::GameCore { class FiveDimPlayerSkillCleanerBotCondition; }
namespace RPG::GameCore { class FiveDimPlayerSkillDashCondition; }
namespace RPG::GameCore { class FiveDimRIStateEmissionAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimRefillPlayerJumpEnergyAction; }
namespace RPG::GameCore { class FiveDimRemoveGlobalTimeScaleAction; }
namespace RPG::GameCore { class FiveDimResetBillboardAction; }
namespace RPG::GameCore { class FiveDimResumeMusicAction; }
namespace RPG::GameCore { class FiveDimReverseGeckoMoveAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByDoorKeyCountAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByRawLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimatorCullingModeAction; }
namespace RPG::GameCore { class FiveDimSetArrowCollectCoinAction; }
namespace RPG::GameCore { class FiveDimSetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetCameraActiveAction; }
namespace RPG::GameCore { class FiveDimSetColliderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetDanmuTrackAction; }
namespace RPG::GameCore { class FiveDimSetDynamicAttachAction; }
namespace RPG::GameCore { class FiveDimSetEntityVisibleAction; }
namespace RPG::GameCore { class FiveDimSetJumpEnergyVisibleAction; }
namespace RPG::GameCore { class FiveDimSetLevelVarShortAction; }
namespace RPG::GameCore { class FiveDimSetLocalAvatarJumpEnergyAction; }
namespace RPG::GameCore { class FiveDimSetPlayerInteractEnableAction; }
namespace RPG::GameCore { class FiveDimSetPlayerInvincibleAction; }
namespace RPG::GameCore { class FiveDimSetPlayerResetModeAction; }
namespace RPG::GameCore { class FiveDimSetPlayerSkillMoveAction; }
namespace RPG::GameCore { class FiveDimSetPlayerSkillUpgradeAction; }
namespace RPG::GameCore { class FiveDimSetPlayerToMusicFallAction; }
namespace RPG::GameCore { class FiveDimSetPropSpawnerEnableAction; }
namespace RPG::GameCore { class FiveDimSetRenderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetRenderingItemStateAction; }
namespace RPG::GameCore { class FiveDimSetResetPointAction; }
namespace RPG::GameCore { class FiveDimSetSplineMoveDirectionAction; }
namespace RPG::GameCore { class FiveDimSetSplineTraceEffectVisibleAction; }
namespace RPG::GameCore { class FiveDimSetSuiyangDeadAction; }
namespace RPG::GameCore { class FiveDimSetTriggerEnableAction; }
namespace RPG::GameCore { class FiveDimSpawnArrowAction; }
namespace RPG::GameCore { class FiveDimSpawnCleanerBotAction; }
namespace RPG::GameCore { class FiveDimSpawnPropAction; }
namespace RPG::GameCore { class FiveDimStartChenLingGameBoyCountDownAction; }
namespace RPG::GameCore { class FiveDimStartDanmuAction; }
namespace RPG::GameCore { class FiveDimStartLimaoDropMoveAction; }
namespace RPG::GameCore { class FiveDimStartMusicAction; }
namespace RPG::GameCore { class FiveDimStartSplineMoveAction; }
namespace RPG::GameCore { class FiveDimStartSplineMoveWithParamAction; }
namespace RPG::GameCore { class FiveDimStartSuiyangBeatAction; }
namespace RPG::GameCore { class FiveDimStartWindowStageAction; }
namespace RPG::GameCore { class FiveDimStatisticGetTrainEnergyAction; }
namespace RPG::GameCore { class FiveDimStopBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimStopDanmuAction; }
namespace RPG::GameCore { class FiveDimStopMusicAction; }
namespace RPG::GameCore { class FiveDimStopSplineMoveAction; }
namespace RPG::GameCore { class FiveDimStopWindowStageAction; }
namespace RPG::GameCore { class FiveDimSwitchSplineMoveDirectionAction; }
namespace RPG::GameCore { class FiveDimTeleportAction; }
namespace RPG::GameCore { class FiveDimTriggerEventNextBeatAction; }
namespace RPG::GameCore { class FiveDimTriggerGameLoadingViewAction; }
namespace RPG::GameCore { class FiveDimTriggerSelfEventAction; }
namespace RPG::GameCore { class FiveDimTryMutePlayerMoveOnSurfaceDestroyAction; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_133B1D9B79209FB3_GET__TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1113D180)
#define CLASS_2_133B1D9B79209FB3_METHOD_2_5D7E6FACDF5FD51C_OFFSET UNITYSDK_OFFSET(0x11139840)
#define CLASS_2_133B1D9B79209FB3_METHOD_2_A388076C97CF65D1_OFFSET UNITYSDK_OFFSET(0x11139710)
#define CLASS_2_133B1D9B79209FB3__CHECKCONDITION_1_OFFSET UNITYSDK_OFFSET(0x1113F510)
#define CLASS_2_133B1D9B79209FB3__CHECKCONDITION_2_OFFSET UNITYSDK_OFFSET(0x1113F5E0)
#define CLASS_2_133B1D9B79209FB3__CHECKCONDITION_3_OFFSET UNITYSDK_OFFSET(0x1113F6A0)
#define CLASS_2_133B1D9B79209FB3__CHECKCONDITION_4_OFFSET UNITYSDK_OFFSET(0x1113F800)
#define CLASS_2_133B1D9B79209FB3__CHECKCONDITION_5_OFFSET UNITYSDK_OFFSET(0x1113F960)
#define CLASS_2_133B1D9B79209FB3__CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1113F450)
#define CLASS_2_133B1D9B79209FB3__CTOR_OFFSET UNITYSDK_OFFSET(0x11132460)
#define CLASS_2_133B1D9B79209FB3__DISPOSE_OFFSET UNITYSDK_OFFSET(0x11132530)
#define CLASS_2_133B1D9B79209FB3__DOACTION_100_OFFSET UNITYSDK_OFFSET(0x1113EEA0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_101_OFFSET UNITYSDK_OFFSET(0x1113EF20)
#define CLASS_2_133B1D9B79209FB3__DOACTION_102_OFFSET UNITYSDK_OFFSET(0x1113EFA0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_103_OFFSET UNITYSDK_OFFSET(0x1113F070)
#define CLASS_2_133B1D9B79209FB3__DOACTION_104_OFFSET UNITYSDK_OFFSET(0x1113F0F0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_105_OFFSET UNITYSDK_OFFSET(0x1113F180)
#define CLASS_2_133B1D9B79209FB3__DOACTION_106_OFFSET UNITYSDK_OFFSET(0x1113F3A0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_107_OFFSET UNITYSDK_OFFSET(0x1113FA90)
#define CLASS_2_133B1D9B79209FB3__DOACTION_10_OFFSET UNITYSDK_OFFSET(0x111341B0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_11_OFFSET UNITYSDK_OFFSET(0x111344F0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_12_OFFSET UNITYSDK_OFFSET(0x11134830)
#define CLASS_2_133B1D9B79209FB3__DOACTION_13_OFFSET UNITYSDK_OFFSET(0x11134B90)
#define CLASS_2_133B1D9B79209FB3__DOACTION_14_OFFSET UNITYSDK_OFFSET(0x11134EE0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_15_OFFSET UNITYSDK_OFFSET(0x11135450)
#define CLASS_2_133B1D9B79209FB3__DOACTION_16_OFFSET UNITYSDK_OFFSET(0x11135900)
#define CLASS_2_133B1D9B79209FB3__DOACTION_17_OFFSET UNITYSDK_OFFSET(0x11135A70)
#define CLASS_2_133B1D9B79209FB3__DOACTION_18_OFFSET UNITYSDK_OFFSET(0x11135D20)
#define CLASS_2_133B1D9B79209FB3__DOACTION_19_OFFSET UNITYSDK_OFFSET(0x11135D90)
#define CLASS_2_133B1D9B79209FB3__DOACTION_1_OFFSET UNITYSDK_OFFSET(0x11132B00)
#define CLASS_2_133B1D9B79209FB3__DOACTION_20_OFFSET UNITYSDK_OFFSET(0x11135E10)
#define CLASS_2_133B1D9B79209FB3__DOACTION_21_OFFSET UNITYSDK_OFFSET(0x11135F70)
#define CLASS_2_133B1D9B79209FB3__DOACTION_22_OFFSET UNITYSDK_OFFSET(0x11136200)
#define CLASS_2_133B1D9B79209FB3__DOACTION_23_OFFSET UNITYSDK_OFFSET(0x11136380)
#define CLASS_2_133B1D9B79209FB3__DOACTION_24_OFFSET UNITYSDK_OFFSET(0x11136670)
#define CLASS_2_133B1D9B79209FB3__DOACTION_25_OFFSET UNITYSDK_OFFSET(0x111366D0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_26_OFFSET UNITYSDK_OFFSET(0x111368C0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_27_OFFSET UNITYSDK_OFFSET(0x111369C0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_28_OFFSET UNITYSDK_OFFSET(0x11136A50)
#define CLASS_2_133B1D9B79209FB3__DOACTION_29_OFFSET UNITYSDK_OFFSET(0x11136C10)
#define CLASS_2_133B1D9B79209FB3__DOACTION_2_OFFSET UNITYSDK_OFFSET(0x11133060)
#define CLASS_2_133B1D9B79209FB3__DOACTION_30_OFFSET UNITYSDK_OFFSET(0x11136C90)
#define CLASS_2_133B1D9B79209FB3__DOACTION_31_OFFSET UNITYSDK_OFFSET(0x11136DE0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_32_OFFSET UNITYSDK_OFFSET(0x11136E40)
#define CLASS_2_133B1D9B79209FB3__DOACTION_33_OFFSET UNITYSDK_OFFSET(0x11136EA0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_34_OFFSET UNITYSDK_OFFSET(0x11137300)
#define CLASS_2_133B1D9B79209FB3__DOACTION_35_OFFSET UNITYSDK_OFFSET(0x11137A10)
#define CLASS_2_133B1D9B79209FB3__DOACTION_36_OFFSET UNITYSDK_OFFSET(0x11137BD0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_37_OFFSET UNITYSDK_OFFSET(0x11137D40)
#define CLASS_2_133B1D9B79209FB3__DOACTION_38_OFFSET UNITYSDK_OFFSET(0x11137EB0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_39_OFFSET UNITYSDK_OFFSET(0x11138020)
#define CLASS_2_133B1D9B79209FB3__DOACTION_3_OFFSET UNITYSDK_OFFSET(0x111330E0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_40_OFFSET UNITYSDK_OFFSET(0x11138190)
#define CLASS_2_133B1D9B79209FB3__DOACTION_41_OFFSET UNITYSDK_OFFSET(0x11138210)
#define CLASS_2_133B1D9B79209FB3__DOACTION_42_OFFSET UNITYSDK_OFFSET(0x11138510)
#define CLASS_2_133B1D9B79209FB3__DOACTION_43_OFFSET UNITYSDK_OFFSET(0x11138870)
#define CLASS_2_133B1D9B79209FB3__DOACTION_44_OFFSET UNITYSDK_OFFSET(0x11138C60)
#define CLASS_2_133B1D9B79209FB3__DOACTION_45_OFFSET UNITYSDK_OFFSET(0x11139120)
#define CLASS_2_133B1D9B79209FB3__DOACTION_46_OFFSET UNITYSDK_OFFSET(0x11139320)
#define CLASS_2_133B1D9B79209FB3__DOACTION_47_OFFSET UNITYSDK_OFFSET(0x11139390)
#define CLASS_2_133B1D9B79209FB3__DOACTION_48_OFFSET UNITYSDK_OFFSET(0x11139400)
#define CLASS_2_133B1D9B79209FB3__DOACTION_49_OFFSET UNITYSDK_OFFSET(0x11139470)
#define CLASS_2_133B1D9B79209FB3__DOACTION_4_OFFSET UNITYSDK_OFFSET(0x11133330)
#define CLASS_2_133B1D9B79209FB3__DOACTION_50_OFFSET UNITYSDK_OFFSET(0x11139760)
#define CLASS_2_133B1D9B79209FB3__DOACTION_51_OFFSET UNITYSDK_OFFSET(0x11139C10)
#define CLASS_2_133B1D9B79209FB3__DOACTION_52_OFFSET UNITYSDK_OFFSET(0x11139D80)
#define CLASS_2_133B1D9B79209FB3__DOACTION_53_OFFSET UNITYSDK_OFFSET(0x11139E30)
#define CLASS_2_133B1D9B79209FB3__DOACTION_54_OFFSET UNITYSDK_OFFSET(0x1113A630)
#define CLASS_2_133B1D9B79209FB3__DOACTION_55_OFFSET UNITYSDK_OFFSET(0x1113A9B0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_56_OFFSET UNITYSDK_OFFSET(0x1113AA60)
#define CLASS_2_133B1D9B79209FB3__DOACTION_57_OFFSET UNITYSDK_OFFSET(0x1113ADC0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_58_OFFSET UNITYSDK_OFFSET(0x1113AE40)
#define CLASS_2_133B1D9B79209FB3__DOACTION_59_OFFSET UNITYSDK_OFFSET(0x1113AFF0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_5_OFFSET UNITYSDK_OFFSET(0x11133410)
#define CLASS_2_133B1D9B79209FB3__DOACTION_60_OFFSET UNITYSDK_OFFSET(0x1113B170)
#define CLASS_2_133B1D9B79209FB3__DOACTION_61_OFFSET UNITYSDK_OFFSET(0x1113B330)
#define CLASS_2_133B1D9B79209FB3__DOACTION_62_OFFSET UNITYSDK_OFFSET(0x1113B4F0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_63_OFFSET UNITYSDK_OFFSET(0x1113B6B0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_64_OFFSET UNITYSDK_OFFSET(0x1113BAC0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_65_OFFSET UNITYSDK_OFFSET(0x1113BE90)
#define CLASS_2_133B1D9B79209FB3__DOACTION_66_OFFSET UNITYSDK_OFFSET(0x1113C050)
#define CLASS_2_133B1D9B79209FB3__DOACTION_67_OFFSET UNITYSDK_OFFSET(0x1113C130)
#define CLASS_2_133B1D9B79209FB3__DOACTION_68_OFFSET UNITYSDK_OFFSET(0x1113C1B0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_69_OFFSET UNITYSDK_OFFSET(0x1113C2A0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_6_OFFSET UNITYSDK_OFFSET(0x11133970)
#define CLASS_2_133B1D9B79209FB3__DOACTION_70_OFFSET UNITYSDK_OFFSET(0x1113C3A0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_71_OFFSET UNITYSDK_OFFSET(0x1113C430)
#define CLASS_2_133B1D9B79209FB3__DOACTION_72_OFFSET UNITYSDK_OFFSET(0x1113C5C0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_73_OFFSET UNITYSDK_OFFSET(0x1113C650)
#define CLASS_2_133B1D9B79209FB3__DOACTION_74_OFFSET UNITYSDK_OFFSET(0x1113C6F0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_75_OFFSET UNITYSDK_OFFSET(0x1113C760)
#define CLASS_2_133B1D9B79209FB3__DOACTION_76_OFFSET UNITYSDK_OFFSET(0x1113CDF0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_77_OFFSET UNITYSDK_OFFSET(0x1113CF90)
#define CLASS_2_133B1D9B79209FB3__DOACTION_78_OFFSET UNITYSDK_OFFSET(0x1113D210)
#define CLASS_2_133B1D9B79209FB3__DOACTION_79_OFFSET UNITYSDK_OFFSET(0x1113D3A0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_7_OFFSET UNITYSDK_OFFSET(0x11133A70)
#define CLASS_2_133B1D9B79209FB3__DOACTION_80_OFFSET UNITYSDK_OFFSET(0x1113D500)
#define CLASS_2_133B1D9B79209FB3__DOACTION_81_OFFSET UNITYSDK_OFFSET(0x1113D690)
#define CLASS_2_133B1D9B79209FB3__DOACTION_82_OFFSET UNITYSDK_OFFSET(0x1113D720)
#define CLASS_2_133B1D9B79209FB3__DOACTION_83_OFFSET UNITYSDK_OFFSET(0x1113DA90)
#define CLASS_2_133B1D9B79209FB3__DOACTION_84_OFFSET UNITYSDK_OFFSET(0x1113DB30)
#define CLASS_2_133B1D9B79209FB3__DOACTION_85_OFFSET UNITYSDK_OFFSET(0x1113DC60)
#define CLASS_2_133B1D9B79209FB3__DOACTION_86_OFFSET UNITYSDK_OFFSET(0x1113DD70)
#define CLASS_2_133B1D9B79209FB3__DOACTION_87_OFFSET UNITYSDK_OFFSET(0x1113DDF0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_88_OFFSET UNITYSDK_OFFSET(0x1113DEC0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_89_OFFSET UNITYSDK_OFFSET(0x1113DF80)
#define CLASS_2_133B1D9B79209FB3__DOACTION_8_OFFSET UNITYSDK_OFFSET(0x11133D80)
#define CLASS_2_133B1D9B79209FB3__DOACTION_90_OFFSET UNITYSDK_OFFSET(0x1113E000)
#define CLASS_2_133B1D9B79209FB3__DOACTION_91_OFFSET UNITYSDK_OFFSET(0x1113E080)
#define CLASS_2_133B1D9B79209FB3__DOACTION_92_OFFSET UNITYSDK_OFFSET(0x1113E380)
#define CLASS_2_133B1D9B79209FB3__DOACTION_93_OFFSET UNITYSDK_OFFSET(0x1113E3F0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_94_OFFSET UNITYSDK_OFFSET(0x1113E470)
#define CLASS_2_133B1D9B79209FB3__DOACTION_95_OFFSET UNITYSDK_OFFSET(0x1113E4F0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_96_OFFSET UNITYSDK_OFFSET(0x1113E570)
#define CLASS_2_133B1D9B79209FB3__DOACTION_97_OFFSET UNITYSDK_OFFSET(0x1113E8C0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_98_OFFSET UNITYSDK_OFFSET(0x1113EBD0)
#define CLASS_2_133B1D9B79209FB3__DOACTION_99_OFFSET UNITYSDK_OFFSET(0x1113ED70)
#define CLASS_2_133B1D9B79209FB3__DOACTION_9_OFFSET UNITYSDK_OFFSET(0x11133E40)
#define CLASS_2_133B1D9B79209FB3__DOACTION_OFFSET UNITYSDK_OFFSET(0x111325E0)
#define CLASS_2_133B1D9B79209FB3__LOGERROR_OFFSET UNITYSDK_OFFSET(0x11132580)
#define CLASS_2_133B1D9B79209FB3___IFIXBASEPROXY_GET__TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1113FC60)
#define CLASS_2_133B1D9B79209FB3___IFIXBASEPROXY__DOACTION_OFFSET UNITYSDK_OFFSET(0x1113FBE0)
#define CLASS_2_133B1D9B79209FB3___IFIXBASEPROXY__LOGERROR_OFFSET UNITYSDK_OFFSET(0x1113FB80)

inline static constexpr unsigned int Class_2_133B1D9B79209FB3_TypeDefinitionIndex = 62576;

class Class_2_133B1D9B79209FB3 : public ::RPG::Client::LittleGame::FiveDim::FiveDimBaseEventActionService_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x50
	::Class_2_F47F7A3F5E97970D* Field_2_0; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::System::String*>*>* Field_2_2; // 0x60
	::System::Int32 Field_2_3; // 0x68

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DISPOSE_OFFSET))(this);
	}

	::System::Void _LogError(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__LOGERROR_OFFSET))(this, a1);
	}

	::System::Void _DoAction(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_1(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_1_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_2(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMuteUIInputAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMuteUIInputAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_2_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_3(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_3_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_4(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_4_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_5(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_6(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_6_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_7(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_7_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_8(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimDebugLogEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimDebugLogEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_8_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_9(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartSplineMoveAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_10(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStopSplineMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStopSplineMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_10_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_11(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_11_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_12(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_12_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_13(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_13_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_14(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_14_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_15(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_15_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_16(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_16_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_17(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_17_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_18(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_18_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_19(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_19_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_20(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_20_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_21(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_21_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_22(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_22_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_23(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_23_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_24(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_24_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_25(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_25_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_26(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_26_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_27(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_27_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_28(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_28_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_29(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_29_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_30(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_30_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_31(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimForceResetPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_31_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_32(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_32_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_33(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_33_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_34(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_34_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_35(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_35_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_36(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_36_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_37(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStopMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStopMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_37_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_38(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPauseMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPauseMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_38_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_39(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimResumeMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimResumeMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_39_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_40(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_40_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_41(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_41_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_42(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAddRTPCAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAddRTPCAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_42_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_43(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAudioPostEventAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_44(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_44_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_45(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAudioSetStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAudioSetStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_45_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_46(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartDanmuAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartDanmuAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_46_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_47(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStopDanmuAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStopDanmuAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_47_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_48(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_48_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_49(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_49_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::AnimatorCullingMode Method_2_A388076C97CF65D1(::RPG::GameCore::FiveDimAnimatorCullingMode a1)
	{
		return ((::UnityEngine::AnimatorCullingMode(*)(::RPG::GameCore::FiveDimAnimatorCullingMode))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3_METHOD_2_A388076C97CF65D1_OFFSET))(a1);
	}

	::System::Void _DoAction_50(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_50_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5D7E6FACDF5FD51C(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3_METHOD_2_5D7E6FACDF5FD51C_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_51(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_51_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_52(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_52_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_53(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimDropEntityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimDropEntityAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_53_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_54(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_54_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_55(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_55_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_56(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartWindowStageAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartWindowStageAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_56_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_57(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStopWindowStageAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStopWindowStageAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_57_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_58(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAddMoneyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAddMoneyAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_58_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_59(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_59_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_60(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_60_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_61(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_61_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_62(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_62_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_63(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSpawnArrowAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSpawnArrowAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_63_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_64(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_64_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_65(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_65_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_66(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerResetModeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_66_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_67(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetCameraActiveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetCameraActiveAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_67_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_68(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimFireEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_68_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_69(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_69_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_70(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_70_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_71(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_71_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_72(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_72_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_73(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_73_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_74(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimRIStateEmissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimRIStateEmissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_74_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_75(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_75_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_76(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_76_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_77(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMissionTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMissionTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_77_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_78(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetResetPointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetResetPointAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_78_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_79(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_79_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_80(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetDynamicAttachAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetDynamicAttachAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_80_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_81(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_81_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_82(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_82_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_83(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_83_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_84(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_84_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_85(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_85_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_86(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_86_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_87(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_87_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_88(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_88_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_89(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_89_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_90(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_90_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_91(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_91_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_92(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_92_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_93(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_93_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_94(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimLightningChangeStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_94_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_95(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimGrenadierAttackAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_95_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_96(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_96_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_97(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_97_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_98(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_98_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_99(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_99_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_100(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_100_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_101(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_101_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_102(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_102_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_103(::RPG::GameCore::FiveDimCameraShakeAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_103_OFFSET))(this, a1);
	}

	::System::Void _DoAction_104(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_104_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_105(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_105_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_106(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_106_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__CHECKCONDITION_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_1(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__CHECKCONDITION_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_2(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__CHECKCONDITION_2_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_3(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__CHECKCONDITION_3_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_4(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__CHECKCONDITION_4_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_5(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__CHECKCONDITION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_107(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMutePlayerInputAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3__DOACTION_107_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::TaskContext* get__TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3_GET__TASKCONTEXT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__LogError(::System::String* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3___IFIXBASEPROXY__LOGERROR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__DoAction(::RPG::GameCore::FiveDimCameraShakeAction* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3___IFIXBASEPROXY__DOACTION_OFFSET))(this, P0);
	}

	::RPG::GameCore::TaskContext* __iFixBaseProxy_get__TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_133B1D9B79209FB3___IFIXBASEPROXY_GET__TASKCONTEXT_OFFSET))(this);
	}
};
