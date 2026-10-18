#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimBaseEventActionService_1.h"
#include "unitysdk/RPG/GameCore/FiveDimAnimatorCullingMode.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"

class Class_1_46AC29DEBE45F8A8_1;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
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
namespace RPG::GameCore { class FiveDimDestroyCleanerBotAction; }
namespace RPG::GameCore { class FiveDimDestroyMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimDestroyPhantomPlayerAction; }
namespace RPG::GameCore { class FiveDimDropEntityAction; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FiveDimEnableGrenadierAttackAction; }
namespace RPG::GameCore { class FiveDimEnableIntervalSpawnAction; }
namespace RPG::GameCore { class FiveDimEnableSimpleHitBoxAction; }
namespace RPG::GameCore { class FiveDimEnergyBlockChargeAction; }
namespace RPG::GameCore { class FiveDimEnterDashPrepareStateAction; }
namespace RPG::GameCore { class FiveDimEnterHiddenAreaAction; }
namespace RPG::GameCore { class FiveDimEvilSmileCrazyAction; }
namespace RPG::GameCore { class FiveDimEvilSmileDieAction; }
namespace RPG::GameCore { class FiveDimEvilSmileSetTraceTargetAction; }
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
namespace RPG::GameCore { class FiveDimMoveToSpecificSplinePointAction; }
namespace RPG::GameCore { class FiveDimMutePlayerInputAction; }
namespace RPG::GameCore { class FiveDimMutePlayerSkillAction; }
namespace RPG::GameCore { class FiveDimMuteUIInputAction; }
namespace RPG::GameCore { class FiveDimOverrideGrenadierTargetAction; }
namespace RPG::GameCore { class FiveDimOverrideSimpleGameLevelTipAction; }
namespace RPG::GameCore { class FiveDimPauseMusicAction; }
namespace RPG::GameCore { class FiveDimPlayShootArrowAnimAction; }
namespace RPG::GameCore { class FiveDimPlaySummonBotAnimAction; }
namespace RPG::GameCore { class FiveDimPlayUsePropAnimAction; }
namespace RPG::GameCore { class FiveDimPlayerSkillArrowCondition; }
namespace RPG::GameCore { class FiveDimPlayerSkillCleanerBotCondition; }
namespace RPG::GameCore { class FiveDimPlayerSkillDashCondition; }
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimRIStateEmissionAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimRefillPlayerDashEnergyAction; }
namespace RPG::GameCore { class FiveDimRefillPlayerJumpEnergyAction; }
namespace RPG::GameCore { class FiveDimRemoveGlobalTimeScaleAction; }
namespace RPG::GameCore { class FiveDimResetBillboardAction; }
namespace RPG::GameCore { class FiveDimResumeMusicAction; }
namespace RPG::GameCore { class FiveDimReverseGeckoMoveAction; }
namespace RPG::GameCore { class FiveDimSetAdvAchievementAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByDoorKeyCountAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByRawLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimatorCullingModeAction; }
namespace RPG::GameCore { class FiveDimSetArrowCollectCoinAction; }
namespace RPG::GameCore { class FiveDimSetAudioListenerFollowTargetAction; }
namespace RPG::GameCore { class FiveDimSetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetCameraActiveAction; }
namespace RPG::GameCore { class FiveDimSetColliderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetConveyorDirectionAction; }
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
namespace RPG::GameCore { class FiveDimSetRenderVisibleNeverDitherAction; }
namespace RPG::GameCore { class FiveDimSetRenderingItemStateAction; }
namespace RPG::GameCore { class FiveDimSetResetPointAction; }
namespace RPG::GameCore { class FiveDimSetSharedMatStateAction; }
namespace RPG::GameCore { class FiveDimSetSplineMoveDirectionAction; }
namespace RPG::GameCore { class FiveDimSetSplineMoveSpeedMultiplierAction; }
namespace RPG::GameCore { class FiveDimSetSplineTraceEffectVisibleAction; }
namespace RPG::GameCore { class FiveDimSetSuiyangDeadAction; }
namespace RPG::GameCore { class FiveDimSetTriggerEnableAction; }
namespace RPG::GameCore { class FiveDimShowMusicComboAction; }
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
namespace RPG::GameCore { class FiveDimTriggerDashOrbAction; }
namespace RPG::GameCore { class FiveDimTriggerEventNextBeatAction; }
namespace RPG::GameCore { class FiveDimTriggerGameLoadingViewAction; }
namespace RPG::GameCore { class FiveDimTriggerSelfEventAction; }
namespace RPG::GameCore { class FiveDimTryMutePlayerMoveOnSurfaceDestroyAction; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B3FD3B1362B6B56C_GET__TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xB675AE0)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_04281DA188642478_OFFSET UNITYSDK_OFFSET(0xB670AD0)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_1E5D842A629207ED_OFFSET UNITYSDK_OFFSET(0xB670560)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_6BA80D10EA1C02AE_OFFSET UNITYSDK_OFFSET(0xB6737A0)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_9B2B3F3F26630418_OFFSET UNITYSDK_OFFSET(0xB6738E0)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_A280E8352FFBE357_OFFSET UNITYSDK_OFFSET(0xB6741E0)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_A388076C97CF65D1_OFFSET UNITYSDK_OFFSET(0xB6703B0)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_A7BAB9D1AB082D1F_OFFSET UNITYSDK_OFFSET(0xB670660)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_AA700DF6DCAA54F2_OFFSET UNITYSDK_OFFSET(0xB672540)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_B0717B761432E2AB_OFFSET UNITYSDK_OFFSET(0xB673A10)
#define CLASS_2_B3FD3B1362B6B56C_METHOD_2_F73B0E70366CB00B_OFFSET UNITYSDK_OFFSET(0xB673AC0)
#define CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_1_OFFSET UNITYSDK_OFFSET(0xB679720)
#define CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_2_OFFSET UNITYSDK_OFFSET(0xB679810)
#define CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_3_OFFSET UNITYSDK_OFFSET(0xB679900)
#define CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_4_OFFSET UNITYSDK_OFFSET(0xB679A20)
#define CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_5_OFFSET UNITYSDK_OFFSET(0xB679B40)
#define CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xB679630)
#define CLASS_2_B3FD3B1362B6B56C__CTOR_OFFSET UNITYSDK_OFFSET(0xB6688B0)
#define CLASS_2_B3FD3B1362B6B56C__DISPOSE_OFFSET UNITYSDK_OFFSET(0xB668A70)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_100_OFFSET UNITYSDK_OFFSET(0xB676C80)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_101_OFFSET UNITYSDK_OFFSET(0xB676D00)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_102_OFFSET UNITYSDK_OFFSET(0xB676D90)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_103_OFFSET UNITYSDK_OFFSET(0xB676E10)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_104_OFFSET UNITYSDK_OFFSET(0xB676E90)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_105_OFFSET UNITYSDK_OFFSET(0xB676F10)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_106_OFFSET UNITYSDK_OFFSET(0xB676F90)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_107_OFFSET UNITYSDK_OFFSET(0xB6772B0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_108_OFFSET UNITYSDK_OFFSET(0xB677340)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_109_OFFSET UNITYSDK_OFFSET(0xB677D30)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_10_OFFSET UNITYSDK_OFFSET(0xB66AB00)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_110_OFFSET UNITYSDK_OFFSET(0xB677E80)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_111_OFFSET UNITYSDK_OFFSET(0xB677FD0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_112_OFFSET UNITYSDK_OFFSET(0xB678530)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_113_OFFSET UNITYSDK_OFFSET(0xB678A20)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_114_OFFSET UNITYSDK_OFFSET(0xB678CC0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_115_OFFSET UNITYSDK_OFFSET(0xB678E20)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_116_OFFSET UNITYSDK_OFFSET(0xB678EA0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_117_OFFSET UNITYSDK_OFFSET(0xB679060)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_118_OFFSET UNITYSDK_OFFSET(0xB6790E0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_119_OFFSET UNITYSDK_OFFSET(0xB679160)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_11_OFFSET UNITYSDK_OFFSET(0xB66AD00)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_120_OFFSET UNITYSDK_OFFSET(0xB679240)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_121_OFFSET UNITYSDK_OFFSET(0xB6792C0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_122_OFFSET UNITYSDK_OFFSET(0xB679350)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_123_OFFSET UNITYSDK_OFFSET(0xB679570)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_124_OFFSET UNITYSDK_OFFSET(0xB679C30)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_125_OFFSET UNITYSDK_OFFSET(0xB679D30)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_12_OFFSET UNITYSDK_OFFSET(0xB66AE50)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_13_OFFSET UNITYSDK_OFFSET(0xB66B050)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_14_OFFSET UNITYSDK_OFFSET(0xB66B270)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_15_OFFSET UNITYSDK_OFFSET(0xB66B480)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_16_OFFSET UNITYSDK_OFFSET(0xB66B690)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_17_OFFSET UNITYSDK_OFFSET(0xB66BA80)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_18_OFFSET UNITYSDK_OFFSET(0xB66BE50)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_19_OFFSET UNITYSDK_OFFSET(0xB66C140)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_1_OFFSET UNITYSDK_OFFSET(0xB669320)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_20_OFFSET UNITYSDK_OFFSET(0xB66C360)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_21_OFFSET UNITYSDK_OFFSET(0xB66C720)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_22_OFFSET UNITYSDK_OFFSET(0xB66C790)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_23_OFFSET UNITYSDK_OFFSET(0xB66C810)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_24_OFFSET UNITYSDK_OFFSET(0xB66C8E0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_25_OFFSET UNITYSDK_OFFSET(0xB66CBE0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_26_OFFSET UNITYSDK_OFFSET(0xB66CCE0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_27_OFFSET UNITYSDK_OFFSET(0xB66D070)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_28_OFFSET UNITYSDK_OFFSET(0xB66D0E0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_29_OFFSET UNITYSDK_OFFSET(0xB66D3B0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_2_OFFSET UNITYSDK_OFFSET(0xB669AF0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_30_OFFSET UNITYSDK_OFFSET(0xB66D540)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_31_OFFSET UNITYSDK_OFFSET(0xB66D6C0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_32_OFFSET UNITYSDK_OFFSET(0xB66D790)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_33_OFFSET UNITYSDK_OFFSET(0xB66D930)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_34_OFFSET UNITYSDK_OFFSET(0xB66D9F0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_35_OFFSET UNITYSDK_OFFSET(0xB66DAD0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_36_OFFSET UNITYSDK_OFFSET(0xB66DB40)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_37_OFFSET UNITYSDK_OFFSET(0xB66DBB0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_38_OFFSET UNITYSDK_OFFSET(0xB66DF30)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_39_OFFSET UNITYSDK_OFFSET(0xB66E550)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_3_OFFSET UNITYSDK_OFFSET(0xB669B70)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_40_OFFSET UNITYSDK_OFFSET(0xB66E6C0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_41_OFFSET UNITYSDK_OFFSET(0xB66E830)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_42_OFFSET UNITYSDK_OFFSET(0xB66E9A0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_43_OFFSET UNITYSDK_OFFSET(0xB66EB10)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_44_OFFSET UNITYSDK_OFFSET(0xB66EC80)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_45_OFFSET UNITYSDK_OFFSET(0xB66ED00)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_46_OFFSET UNITYSDK_OFFSET(0xB66EF40)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_47_OFFSET UNITYSDK_OFFSET(0xB66F280)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_48_OFFSET UNITYSDK_OFFSET(0xB66F670)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_49_OFFSET UNITYSDK_OFFSET(0xB66FB10)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_4_OFFSET UNITYSDK_OFFSET(0xB669D30)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_50_OFFSET UNITYSDK_OFFSET(0xB66FD20)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_51_OFFSET UNITYSDK_OFFSET(0xB670040)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_52_OFFSET UNITYSDK_OFFSET(0xB6700B0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_53_OFFSET UNITYSDK_OFFSET(0xB670120)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_54_OFFSET UNITYSDK_OFFSET(0xB670190)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_55_OFFSET UNITYSDK_OFFSET(0xB670400)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_56_OFFSET UNITYSDK_OFFSET(0xB670D30)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_57_OFFSET UNITYSDK_OFFSET(0xB670E10)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_58_OFFSET UNITYSDK_OFFSET(0xB670ED0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_59_OFFSET UNITYSDK_OFFSET(0xB670F70)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_5_OFFSET UNITYSDK_OFFSET(0xB669DF0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_60_OFFSET UNITYSDK_OFFSET(0xB671230)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_61_OFFSET UNITYSDK_OFFSET(0xB6712F0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_62_OFFSET UNITYSDK_OFFSET(0xB671500)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_63_OFFSET UNITYSDK_OFFSET(0xB671950)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_64_OFFSET UNITYSDK_OFFSET(0xB6719D0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_65_OFFSET UNITYSDK_OFFSET(0xB671C70)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_66_OFFSET UNITYSDK_OFFSET(0xB671D50)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_67_OFFSET UNITYSDK_OFFSET(0xB671E80)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_68_OFFSET UNITYSDK_OFFSET(0xB671FB0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_69_OFFSET UNITYSDK_OFFSET(0xB6720E0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_6_OFFSET UNITYSDK_OFFSET(0xB66A380)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_70_OFFSET UNITYSDK_OFFSET(0xB6724E0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_71_OFFSET UNITYSDK_OFFSET(0xB673730)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_72_OFFSET UNITYSDK_OFFSET(0xB674450)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_73_OFFSET UNITYSDK_OFFSET(0xB6745A0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_74_OFFSET UNITYSDK_OFFSET(0xB674810)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_75_OFFSET UNITYSDK_OFFSET(0xB674890)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_76_OFFSET UNITYSDK_OFFSET(0xB6749E0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_77_OFFSET UNITYSDK_OFFSET(0xB674AD0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_78_OFFSET UNITYSDK_OFFSET(0xB674B60)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_79_OFFSET UNITYSDK_OFFSET(0xB674C70)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_7_OFFSET UNITYSDK_OFFSET(0xB66A480)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_80_OFFSET UNITYSDK_OFFSET(0xB674D00)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_81_OFFSET UNITYSDK_OFFSET(0xB674DB0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_82_OFFSET UNITYSDK_OFFSET(0xB6750E0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_83_OFFSET UNITYSDK_OFFSET(0xB675150)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_84_OFFSET UNITYSDK_OFFSET(0xB675770)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_85_OFFSET UNITYSDK_OFFSET(0xB675910)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_86_OFFSET UNITYSDK_OFFSET(0xB675BE0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_87_OFFSET UNITYSDK_OFFSET(0xB675D30)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_88_OFFSET UNITYSDK_OFFSET(0xB675E10)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_89_OFFSET UNITYSDK_OFFSET(0xB675FD0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_8_OFFSET UNITYSDK_OFFSET(0xB66A7F0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_90_OFFSET UNITYSDK_OFFSET(0xB676110)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_91_OFFSET UNITYSDK_OFFSET(0xB6763F0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_92_OFFSET UNITYSDK_OFFSET(0xB6764C0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_93_OFFSET UNITYSDK_OFFSET(0xB676570)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_94_OFFSET UNITYSDK_OFFSET(0xB676610)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_95_OFFSET UNITYSDK_OFFSET(0xB676690)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_96_OFFSET UNITYSDK_OFFSET(0xB676770)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_97_OFFSET UNITYSDK_OFFSET(0xB676830)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_98_OFFSET UNITYSDK_OFFSET(0xB6768B0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_99_OFFSET UNITYSDK_OFFSET(0xB676930)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_9_OFFSET UNITYSDK_OFFSET(0xB66A8B0)
#define CLASS_2_B3FD3B1362B6B56C__DOACTION_OFFSET UNITYSDK_OFFSET(0xB668B70)
#define CLASS_2_B3FD3B1362B6B56C__LOGERROR_OFFSET UNITYSDK_OFFSET(0xB668B10)

inline static constexpr unsigned int Class_2_B3FD3B1362B6B56C_TypeDefinitionIndex = 76882;

class Class_2_B3FD3B1362B6B56C : public ::RPG::Client::LittleGame::FiveDim::FiveDimBaseEventActionService_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*>* OJDKBKDDIEE; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::System::String*>*>* NMJBHJFGANF; // 0x70
	::Class_2_F47F7A3F5E97970D* EEFMDEHLLFI; // 0x78
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x80
	::System::Int32 CBOPGPAGFHG; // 0x88

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DISPOSE_OFFSET))(this);
	}

	::System::Void _LogError(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__LOGERROR_OFFSET))(this, a1);
	}

	::System::Void _DoAction(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_1_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_2(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMuteUIInputAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMuteUIInputAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_2_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_3(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_3_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_4(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_4_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_5(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_6(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_6_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_7(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_7_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_8(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDebugLogEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDebugLogEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_8_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_9(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction* a2, ::Class_1_46AC29DEBE45F8A8_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartSplineMoveAction*, ::Class_1_46AC29DEBE45F8A8_1*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_10(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopSplineMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopSplineMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_10_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_11(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetConveyorDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_11_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_12(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_12_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_13(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_13_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_14(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_14_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_15(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_15_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_16(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_16_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_17(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_17_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_18(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_18_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_19(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_19_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_20(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_20_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_21(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_21_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_22(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_22_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_23(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_23_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_24(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_24_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_25(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_25_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_26(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_26_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_27(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_27_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_28(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_28_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_29(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_29_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_30(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_30_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_31(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_31_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_32(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_32_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_33(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_33_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_34(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_34_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_35(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimForceResetPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_35_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_36(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_36_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_37(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_37_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_38(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_38_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_39(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_39_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_40(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_40_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_41(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_41_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_42(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPauseMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPauseMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_42_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_43(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimResumeMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimResumeMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_43_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_44(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_44_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_45(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_45_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_46(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAddRTPCAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAddRTPCAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_46_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_47(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2, ::Class_1_46AC29DEBE45F8A8_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAudioPostEventAction*, ::Class_1_46AC29DEBE45F8A8_1*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_47_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_48(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_48_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_49(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAudioSetStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAudioSetStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_49_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_50(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_50_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_51(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartDanmuAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartDanmuAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_51_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_52(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopDanmuAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopDanmuAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_52_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_53(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_53_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_54(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_54_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::AnimatorCullingMode Method_2_A388076C97CF65D1(::RPG::GameCore::FiveDimAnimatorCullingMode a1)
	{
		return ((::UnityEngine::AnimatorCullingMode(*)(::RPG::GameCore::FiveDimAnimatorCullingMode))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_A388076C97CF65D1_OFFSET))(a1);
	}

	::System::Void _DoAction_55(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7BAB9D1AB082D1F(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_A7BAB9D1AB082D1F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1E5D842A629207ED(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_1E5D842A629207ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_04281DA188642478(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_04281DA188642478_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_56(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_56_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_57(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_57_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_58(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDropEntityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDropEntityAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_58_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_59(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_59_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_60(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_60_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_61(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimShowMusicComboAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimShowMusicComboAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_61_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_62(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartWindowStageAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartWindowStageAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_62_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_63(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopWindowStageAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopWindowStageAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_63_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_64(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAddMoneyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAddMoneyAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_64_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_65(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_65_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_66(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_66_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_67(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_67_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_68(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_68_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_69(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSpawnArrowAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSpawnArrowAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_69_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_70(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_70_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_71(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDestroyCleanerBotAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_71_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6BA80D10EA1C02AE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_6BA80D10EA1C02AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9B2B3F3F26630418(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_9B2B3F3F26630418_OFFSET))(this, a1);
	}

	::System::Void Method_2_B0717B761432E2AB(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_B0717B761432E2AB_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA700DF6DCAA54F2(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_AA700DF6DCAA54F2_OFFSET))(this, a1, a2, a3);
	}

	::RPG::MVector3 Method_2_F73B0E70366CB00B(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_F73B0E70366CB00B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A280E8352FFBE357(::Struct_2_EAC1BB0F093534A5 a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_METHOD_2_A280E8352FFBE357_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_72(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_72_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_73(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerResetModeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_73_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_74(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetCameraActiveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetCameraActiveAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_74_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_75(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2, ::Class_1_46AC29DEBE45F8A8_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimFireEffectAction*, ::Class_1_46AC29DEBE45F8A8_1*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_75_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_76(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2, ::Class_1_46AC29DEBE45F8A8_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*, ::Class_1_46AC29DEBE45F8A8_1*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_76_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_77(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_77_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_78(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_78_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_79(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_79_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_80(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_80_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_81(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetSharedMatStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetSharedMatStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_81_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_82(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRIStateEmissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRIStateEmissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_82_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_83(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_83_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_84(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_84_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_85(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMissionTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMissionTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_85_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_86(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetResetPointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetResetPointAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_86_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_87(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_87_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_88(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetDynamicAttachAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetDynamicAttachAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_88_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_89(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_89_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_90(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_90_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_91(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_91_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_92(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_92_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_93(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_93_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_94(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_94_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_95(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_95_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_96(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_96_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_97(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_97_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_98(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_98_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_99(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_99_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_100(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_100_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_101(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_101_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_102(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningChangeStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_102_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_103(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_103_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_104(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimGrenadierAttackAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_104_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_105(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_105_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_106(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_106_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_107(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAdvAchievementAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAdvAchievementAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_107_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_108(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_108_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_109(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEvilSmileCrazyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_109_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_110(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEvilSmileDieAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEvilSmileDieAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_110_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_111(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_111_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_112(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_112_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_113(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_113_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_114(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerDashOrbAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerDashOrbAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_114_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_115(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_115_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_116(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_116_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_117(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_117_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_118(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_118_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_119(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_119_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_120(::RPG::GameCore::FiveDimCameraShakeAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_120_OFFSET))(this, a1);
	}

	::System::Void _DoAction_121(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_121_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_122(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_122_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_123(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_123_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_2(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_2_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_3(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_3_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_4(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_4_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_5(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__CHECKCONDITION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_124(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2, ::Class_1_46AC29DEBE45F8A8_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMutePlayerInputAction*, ::Class_1_46AC29DEBE45F8A8_1*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_124_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_125(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMutePlayerSkillAction* a2, ::Class_1_46AC29DEBE45F8A8_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMutePlayerSkillAction*, ::Class_1_46AC29DEBE45F8A8_1*))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C__DOACTION_125_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::TaskContext* get__TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3FD3B1362B6B56C_GET__TASKCONTEXT_OFFSET))(this);
	}
};
