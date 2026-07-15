#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimBaseEventActionService_1.h"
#include "unitysdk/RPG/GameCore/FiveDimAnimatorCullingMode.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_4127FF4C06B070D3.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"

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
namespace RPG::GameCore { class FiveDimTriggerDashOrbAction; }
namespace RPG::GameCore { class FiveDimTriggerEventNextBeatAction; }
namespace RPG::GameCore { class FiveDimTriggerGameLoadingViewAction; }
namespace RPG::GameCore { class FiveDimTriggerSelfEventAction; }
namespace RPG::GameCore { class FiveDimTryMutePlayerMoveOnSurfaceDestroyAction; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_5029A8E11555D175_GET__TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x17ABBEC0)
#define CLASS_2_5029A8E11555D175_METHOD_2_04281DA188642478_OFFSET UNITYSDK_OFFSET(0x17AB6EA0)
#define CLASS_2_5029A8E11555D175_METHOD_2_65E1B7F45C649427_OFFSET UNITYSDK_OFFSET(0x17AB8D20)
#define CLASS_2_5029A8E11555D175_METHOD_2_6BA80D10EA1C02AE_OFFSET UNITYSDK_OFFSET(0x17AB9F50)
#define CLASS_2_5029A8E11555D175_METHOD_2_8F1FD81837A4ED48_OFFSET UNITYSDK_OFFSET(0x17AB6A00)
#define CLASS_2_5029A8E11555D175_METHOD_2_9B2B3F3F26630418_OFFSET UNITYSDK_OFFSET(0x17ABA090)
#define CLASS_2_5029A8E11555D175_METHOD_2_A280E8352FFBE357_OFFSET UNITYSDK_OFFSET(0x17ABA980)
#define CLASS_2_5029A8E11555D175_METHOD_2_A388076C97CF65D1_OFFSET UNITYSDK_OFFSET(0x15293800)
#define CLASS_2_5029A8E11555D175_METHOD_2_B0717B761432E2AB_OFFSET UNITYSDK_OFFSET(0x17ABA1C0)
#define CLASS_2_5029A8E11555D175_METHOD_2_F73B0E70366CB00B_OFFSET UNITYSDK_OFFSET(0x17ABA270)
#define CLASS_2_5029A8E11555D175_METHOD_2_FC00211D40FF7096_OFFSET UNITYSDK_OFFSET(0x17AB6DD0)
#define CLASS_2_5029A8E11555D175__CHECKCONDITION_1_OFFSET UNITYSDK_OFFSET(0x17ABF930)
#define CLASS_2_5029A8E11555D175__CHECKCONDITION_2_OFFSET UNITYSDK_OFFSET(0x17ABF9F0)
#define CLASS_2_5029A8E11555D175__CHECKCONDITION_3_OFFSET UNITYSDK_OFFSET(0x17ABFAB0)
#define CLASS_2_5029A8E11555D175__CHECKCONDITION_4_OFFSET UNITYSDK_OFFSET(0x17ABFBA0)
#define CLASS_2_5029A8E11555D175__CHECKCONDITION_5_OFFSET UNITYSDK_OFFSET(0x17ABFCA0)
#define CLASS_2_5029A8E11555D175__CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x17ABF870)
#define CLASS_2_5029A8E11555D175__CTOR_OFFSET UNITYSDK_OFFSET(0x1528C3C0)
#define CLASS_2_5029A8E11555D175__DISPOSE_OFFSET UNITYSDK_OFFSET(0x1528C580)
#define CLASS_2_5029A8E11555D175__DOACTION_100_OFFSET UNITYSDK_OFFSET(0x17ABD190)
#define CLASS_2_5029A8E11555D175__DOACTION_101_OFFSET UNITYSDK_OFFSET(0x17ABD210)
#define CLASS_2_5029A8E11555D175__DOACTION_102_OFFSET UNITYSDK_OFFSET(0x17ABD290)
#define CLASS_2_5029A8E11555D175__DOACTION_103_OFFSET UNITYSDK_OFFSET(0x17ABD310)
#define CLASS_2_5029A8E11555D175__DOACTION_104_OFFSET UNITYSDK_OFFSET(0x17ABD630)
#define CLASS_2_5029A8E11555D175__DOACTION_105_OFFSET UNITYSDK_OFFSET(0x17ABE010)
#define CLASS_2_5029A8E11555D175__DOACTION_106_OFFSET UNITYSDK_OFFSET(0x17ABE130)
#define CLASS_2_5029A8E11555D175__DOACTION_107_OFFSET UNITYSDK_OFFSET(0x17ABE250)
#define CLASS_2_5029A8E11555D175__DOACTION_108_OFFSET UNITYSDK_OFFSET(0x17ABE7A0)
#define CLASS_2_5029A8E11555D175__DOACTION_109_OFFSET UNITYSDK_OFFSET(0x17ABEC70)
#define CLASS_2_5029A8E11555D175__DOACTION_10_OFFSET UNITYSDK_OFFSET(0x1528E5C0)
#define CLASS_2_5029A8E11555D175__DOACTION_110_OFFSET UNITYSDK_OFFSET(0x17ABEEF0)
#define CLASS_2_5029A8E11555D175__DOACTION_111_OFFSET UNITYSDK_OFFSET(0x17ABF080)
#define CLASS_2_5029A8E11555D175__DOACTION_112_OFFSET UNITYSDK_OFFSET(0x17ABF100)
#define CLASS_2_5029A8E11555D175__DOACTION_113_OFFSET UNITYSDK_OFFSET(0x17ABF2B0)
#define CLASS_2_5029A8E11555D175__DOACTION_114_OFFSET UNITYSDK_OFFSET(0x17ABF330)
#define CLASS_2_5029A8E11555D175__DOACTION_115_OFFSET UNITYSDK_OFFSET(0x17ABF3B0)
#define CLASS_2_5029A8E11555D175__DOACTION_116_OFFSET UNITYSDK_OFFSET(0x17ABF480)
#define CLASS_2_5029A8E11555D175__DOACTION_117_OFFSET UNITYSDK_OFFSET(0x17ABF500)
#define CLASS_2_5029A8E11555D175__DOACTION_118_OFFSET UNITYSDK_OFFSET(0x17ABF590)
#define CLASS_2_5029A8E11555D175__DOACTION_119_OFFSET UNITYSDK_OFFSET(0x17ABF7B0)
#define CLASS_2_5029A8E11555D175__DOACTION_11_OFFSET UNITYSDK_OFFSET(0x1528E7C0)
#define CLASS_2_5029A8E11555D175__DOACTION_120_OFFSET UNITYSDK_OFFSET(0x17ABFD70)
#define CLASS_2_5029A8E11555D175__DOACTION_121_OFFSET UNITYSDK_OFFSET(0x17ABFE60)
#define CLASS_2_5029A8E11555D175__DOACTION_12_OFFSET UNITYSDK_OFFSET(0x1528E900)
#define CLASS_2_5029A8E11555D175__DOACTION_13_OFFSET UNITYSDK_OFFSET(0x1528EAF0)
#define CLASS_2_5029A8E11555D175__DOACTION_14_OFFSET UNITYSDK_OFFSET(0x1528ED00)
#define CLASS_2_5029A8E11555D175__DOACTION_15_OFFSET UNITYSDK_OFFSET(0x1528EF10)
#define CLASS_2_5029A8E11555D175__DOACTION_16_OFFSET UNITYSDK_OFFSET(0x1528F2D0)
#define CLASS_2_5029A8E11555D175__DOACTION_17_OFFSET UNITYSDK_OFFSET(0x1528F690)
#define CLASS_2_5029A8E11555D175__DOACTION_18_OFFSET UNITYSDK_OFFSET(0x1528F970)
#define CLASS_2_5029A8E11555D175__DOACTION_19_OFFSET UNITYSDK_OFFSET(0x1528FBA0)
#define CLASS_2_5029A8E11555D175__DOACTION_1_OFFSET UNITYSDK_OFFSET(0x1528CE20)
#define CLASS_2_5029A8E11555D175__DOACTION_20_OFFSET UNITYSDK_OFFSET(0x1528FF50)
#define CLASS_2_5029A8E11555D175__DOACTION_21_OFFSET UNITYSDK_OFFSET(0x1528FFC0)
#define CLASS_2_5029A8E11555D175__DOACTION_22_OFFSET UNITYSDK_OFFSET(0x15290040)
#define CLASS_2_5029A8E11555D175__DOACTION_23_OFFSET UNITYSDK_OFFSET(0x15290110)
#define CLASS_2_5029A8E11555D175__DOACTION_24_OFFSET UNITYSDK_OFFSET(0x15290400)
#define CLASS_2_5029A8E11555D175__DOACTION_25_OFFSET UNITYSDK_OFFSET(0x15290500)
#define CLASS_2_5029A8E11555D175__DOACTION_26_OFFSET UNITYSDK_OFFSET(0x15290890)
#define CLASS_2_5029A8E11555D175__DOACTION_27_OFFSET UNITYSDK_OFFSET(0x152908F0)
#define CLASS_2_5029A8E11555D175__DOACTION_28_OFFSET UNITYSDK_OFFSET(0x15290AE0)
#define CLASS_2_5029A8E11555D175__DOACTION_29_OFFSET UNITYSDK_OFFSET(0x15290BF0)
#define CLASS_2_5029A8E11555D175__DOACTION_2_OFFSET UNITYSDK_OFFSET(0x1528D5F0)
#define CLASS_2_5029A8E11555D175__DOACTION_30_OFFSET UNITYSDK_OFFSET(0x15290CF0)
#define CLASS_2_5029A8E11555D175__DOACTION_31_OFFSET UNITYSDK_OFFSET(0x15290D80)
#define CLASS_2_5029A8E11555D175__DOACTION_32_OFFSET UNITYSDK_OFFSET(0x15290ED0)
#define CLASS_2_5029A8E11555D175__DOACTION_33_OFFSET UNITYSDK_OFFSET(0x15290F90)
#define CLASS_2_5029A8E11555D175__DOACTION_34_OFFSET UNITYSDK_OFFSET(0x15291070)
#define CLASS_2_5029A8E11555D175__DOACTION_35_OFFSET UNITYSDK_OFFSET(0x152910D0)
#define CLASS_2_5029A8E11555D175__DOACTION_36_OFFSET UNITYSDK_OFFSET(0x15291130)
#define CLASS_2_5029A8E11555D175__DOACTION_37_OFFSET UNITYSDK_OFFSET(0x152914A0)
#define CLASS_2_5029A8E11555D175__DOACTION_38_OFFSET UNITYSDK_OFFSET(0x15291AC0)
#define CLASS_2_5029A8E11555D175__DOACTION_39_OFFSET UNITYSDK_OFFSET(0x15291C30)
#define CLASS_2_5029A8E11555D175__DOACTION_3_OFFSET UNITYSDK_OFFSET(0x1528D670)
#define CLASS_2_5029A8E11555D175__DOACTION_40_OFFSET UNITYSDK_OFFSET(0x15291D60)
#define CLASS_2_5029A8E11555D175__DOACTION_41_OFFSET UNITYSDK_OFFSET(0x15291E90)
#define CLASS_2_5029A8E11555D175__DOACTION_42_OFFSET UNITYSDK_OFFSET(0x15291FC0)
#define CLASS_2_5029A8E11555D175__DOACTION_43_OFFSET UNITYSDK_OFFSET(0x152920F0)
#define CLASS_2_5029A8E11555D175__DOACTION_44_OFFSET UNITYSDK_OFFSET(0x15292170)
#define CLASS_2_5029A8E11555D175__DOACTION_45_OFFSET UNITYSDK_OFFSET(0x152923A0)
#define CLASS_2_5029A8E11555D175__DOACTION_46_OFFSET UNITYSDK_OFFSET(0x152926E0)
#define CLASS_2_5029A8E11555D175__DOACTION_47_OFFSET UNITYSDK_OFFSET(0x15292AD0)
#define CLASS_2_5029A8E11555D175__DOACTION_48_OFFSET UNITYSDK_OFFSET(0x15292F60)
#define CLASS_2_5029A8E11555D175__DOACTION_49_OFFSET UNITYSDK_OFFSET(0x15293170)
#define CLASS_2_5029A8E11555D175__DOACTION_4_OFFSET UNITYSDK_OFFSET(0x1528D830)
#define CLASS_2_5029A8E11555D175__DOACTION_50_OFFSET UNITYSDK_OFFSET(0x15293490)
#define CLASS_2_5029A8E11555D175__DOACTION_51_OFFSET UNITYSDK_OFFSET(0x15293500)
#define CLASS_2_5029A8E11555D175__DOACTION_52_OFFSET UNITYSDK_OFFSET(0x15293570)
#define CLASS_2_5029A8E11555D175__DOACTION_53_OFFSET UNITYSDK_OFFSET(0x152935E0)
#define CLASS_2_5029A8E11555D175__DOACTION_54_OFFSET UNITYSDK_OFFSET(0x15293850)
#define CLASS_2_5029A8E11555D175__DOACTION_55_OFFSET UNITYSDK_OFFSET(0x17AB7100)
#define CLASS_2_5029A8E11555D175__DOACTION_56_OFFSET UNITYSDK_OFFSET(0x17AB71E0)
#define CLASS_2_5029A8E11555D175__DOACTION_57_OFFSET UNITYSDK_OFFSET(0x17AB72A0)
#define CLASS_2_5029A8E11555D175__DOACTION_58_OFFSET UNITYSDK_OFFSET(0x17AB79F0)
#define CLASS_2_5029A8E11555D175__DOACTION_59_OFFSET UNITYSDK_OFFSET(0x17AB7C80)
#define CLASS_2_5029A8E11555D175__DOACTION_5_OFFSET UNITYSDK_OFFSET(0x1528D8F0)
#define CLASS_2_5029A8E11555D175__DOACTION_60_OFFSET UNITYSDK_OFFSET(0x17AB7D40)
#define CLASS_2_5029A8E11555D175__DOACTION_61_OFFSET UNITYSDK_OFFSET(0x17AB8160)
#define CLASS_2_5029A8E11555D175__DOACTION_62_OFFSET UNITYSDK_OFFSET(0x17AB81E0)
#define CLASS_2_5029A8E11555D175__DOACTION_63_OFFSET UNITYSDK_OFFSET(0x17AB8470)
#define CLASS_2_5029A8E11555D175__DOACTION_64_OFFSET UNITYSDK_OFFSET(0x17AB8540)
#define CLASS_2_5029A8E11555D175__DOACTION_65_OFFSET UNITYSDK_OFFSET(0x17AB8670)
#define CLASS_2_5029A8E11555D175__DOACTION_66_OFFSET UNITYSDK_OFFSET(0x17AB87A0)
#define CLASS_2_5029A8E11555D175__DOACTION_67_OFFSET UNITYSDK_OFFSET(0x17AB88D0)
#define CLASS_2_5029A8E11555D175__DOACTION_68_OFFSET UNITYSDK_OFFSET(0x17AB8CC0)
#define CLASS_2_5029A8E11555D175__DOACTION_69_OFFSET UNITYSDK_OFFSET(0x17AB9EE0)
#define CLASS_2_5029A8E11555D175__DOACTION_6_OFFSET UNITYSDK_OFFSET(0x1528DE70)
#define CLASS_2_5029A8E11555D175__DOACTION_70_OFFSET UNITYSDK_OFFSET(0x17ABABE0)
#define CLASS_2_5029A8E11555D175__DOACTION_71_OFFSET UNITYSDK_OFFSET(0x17ABAD30)
#define CLASS_2_5029A8E11555D175__DOACTION_72_OFFSET UNITYSDK_OFFSET(0x17ABAF90)
#define CLASS_2_5029A8E11555D175__DOACTION_73_OFFSET UNITYSDK_OFFSET(0x17ABB010)
#define CLASS_2_5029A8E11555D175__DOACTION_74_OFFSET UNITYSDK_OFFSET(0x17ABB100)
#define CLASS_2_5029A8E11555D175__DOACTION_75_OFFSET UNITYSDK_OFFSET(0x17ABB200)
#define CLASS_2_5029A8E11555D175__DOACTION_76_OFFSET UNITYSDK_OFFSET(0x17ABB290)
#define CLASS_2_5029A8E11555D175__DOACTION_77_OFFSET UNITYSDK_OFFSET(0x17ABB3A0)
#define CLASS_2_5029A8E11555D175__DOACTION_78_OFFSET UNITYSDK_OFFSET(0x17ABB430)
#define CLASS_2_5029A8E11555D175__DOACTION_79_OFFSET UNITYSDK_OFFSET(0x17ABB4D0)
#define CLASS_2_5029A8E11555D175__DOACTION_7_OFFSET UNITYSDK_OFFSET(0x1528DF70)
#define CLASS_2_5029A8E11555D175__DOACTION_80_OFFSET UNITYSDK_OFFSET(0x17ABB540)
#define CLASS_2_5029A8E11555D175__DOACTION_81_OFFSET UNITYSDK_OFFSET(0x17ABBB60)
#define CLASS_2_5029A8E11555D175__DOACTION_82_OFFSET UNITYSDK_OFFSET(0x17ABBD00)
#define CLASS_2_5029A8E11555D175__DOACTION_83_OFFSET UNITYSDK_OFFSET(0x17ABBFB0)
#define CLASS_2_5029A8E11555D175__DOACTION_84_OFFSET UNITYSDK_OFFSET(0x17ABC0F0)
#define CLASS_2_5029A8E11555D175__DOACTION_85_OFFSET UNITYSDK_OFFSET(0x17ABC1D0)
#define CLASS_2_5029A8E11555D175__DOACTION_86_OFFSET UNITYSDK_OFFSET(0x17ABC380)
#define CLASS_2_5029A8E11555D175__DOACTION_87_OFFSET UNITYSDK_OFFSET(0x17ABC4C0)
#define CLASS_2_5029A8E11555D175__DOACTION_88_OFFSET UNITYSDK_OFFSET(0x17ABC7A0)
#define CLASS_2_5029A8E11555D175__DOACTION_89_OFFSET UNITYSDK_OFFSET(0x17ABC870)
#define CLASS_2_5029A8E11555D175__DOACTION_8_OFFSET UNITYSDK_OFFSET(0x1528E2D0)
#define CLASS_2_5029A8E11555D175__DOACTION_90_OFFSET UNITYSDK_OFFSET(0x17ABC920)
#define CLASS_2_5029A8E11555D175__DOACTION_91_OFFSET UNITYSDK_OFFSET(0x17ABC9C0)
#define CLASS_2_5029A8E11555D175__DOACTION_92_OFFSET UNITYSDK_OFFSET(0x17ABCA40)
#define CLASS_2_5029A8E11555D175__DOACTION_93_OFFSET UNITYSDK_OFFSET(0x17ABCB20)
#define CLASS_2_5029A8E11555D175__DOACTION_94_OFFSET UNITYSDK_OFFSET(0x17ABCBE0)
#define CLASS_2_5029A8E11555D175__DOACTION_95_OFFSET UNITYSDK_OFFSET(0x17ABCC60)
#define CLASS_2_5029A8E11555D175__DOACTION_96_OFFSET UNITYSDK_OFFSET(0x17ABCCE0)
#define CLASS_2_5029A8E11555D175__DOACTION_97_OFFSET UNITYSDK_OFFSET(0x17ABD020)
#define CLASS_2_5029A8E11555D175__DOACTION_98_OFFSET UNITYSDK_OFFSET(0x17ABD090)
#define CLASS_2_5029A8E11555D175__DOACTION_99_OFFSET UNITYSDK_OFFSET(0x17ABD110)
#define CLASS_2_5029A8E11555D175__DOACTION_9_OFFSET UNITYSDK_OFFSET(0x1528E390)
#define CLASS_2_5029A8E11555D175__DOACTION_OFFSET UNITYSDK_OFFSET(0x1528C680)
#define CLASS_2_5029A8E11555D175__LOGERROR_OFFSET UNITYSDK_OFFSET(0x1528C620)

inline static constexpr unsigned int Class_2_5029A8E11555D175_TypeDefinitionIndex = 72932;

class Class_2_5029A8E11555D175 : public ::RPG::Client::LittleGame::FiveDim::FiveDimBaseEventActionService_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_2_0; // 0x68
	::Class_2_F47F7A3F5E97970D* Field_2_1; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*>* Field_2_2; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::System::String*>*>* Field_2_3; // 0x80
	::System::Int32 Field_2_4; // 0x88

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DISPOSE_OFFSET))(this);
	}

	::System::Void _LogError(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__LOGERROR_OFFSET))(this, a1);
	}

	::System::Void _DoAction(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_1_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_2(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMuteUIInputAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMuteUIInputAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_2_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_3(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_3_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_4(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_4_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_5(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_6(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_6_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_7(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_7_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_8(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDebugLogEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDebugLogEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_8_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_9(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartSplineMoveAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_10(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopSplineMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopSplineMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_10_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_11(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetConveyorDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_11_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_12(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_12_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_13(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_13_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_14(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_14_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_15(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_15_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_16(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_16_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_17(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_17_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_18(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_18_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_19(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_19_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_20(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_20_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_21(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_21_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_22(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_22_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_23(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_23_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_24(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_24_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_25(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_25_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_26(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_26_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_27(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_27_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_28(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_28_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_29(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_29_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_30(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_30_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_31(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_31_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_32(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_32_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_33(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_33_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_34(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimForceResetPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_34_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_35(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_35_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_36(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_36_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_37(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_37_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_38(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_38_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_39(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_39_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_40(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_40_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_41(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPauseMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPauseMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_41_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_42(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimResumeMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimResumeMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_42_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_43(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_43_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_44(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_44_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_45(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAddRTPCAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAddRTPCAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_45_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_46(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAudioPostEventAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_46_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_47(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_47_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_48(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAudioSetStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAudioSetStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_48_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_49(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_49_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_50(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartDanmuAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartDanmuAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_50_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_51(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopDanmuAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopDanmuAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_51_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_52(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_52_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_53(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_53_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::AnimatorCullingMode Method_2_A388076C97CF65D1(::RPG::GameCore::FiveDimAnimatorCullingMode a1)
	{
		return ((::UnityEngine::AnimatorCullingMode(*)(::RPG::GameCore::FiveDimAnimatorCullingMode))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_A388076C97CF65D1_OFFSET))(a1);
	}

	::System::Void _DoAction_54(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F1FD81837A4ED48(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_8F1FD81837A4ED48_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_FC00211D40FF7096(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_FC00211D40FF7096_OFFSET))(this, a1);
	}

	::System::Void Method_2_04281DA188642478(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_04281DA188642478_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_55(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_55_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_56(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_56_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_57(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDropEntityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDropEntityAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_57_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_58(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_58_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_59(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_59_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_60(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStartWindowStageAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStartWindowStageAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_60_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_61(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopWindowStageAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopWindowStageAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_61_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_62(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAddMoneyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAddMoneyAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_62_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_63(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_63_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_64(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_64_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_65(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_65_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_66(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_66_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_67(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSpawnArrowAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSpawnArrowAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_67_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_68(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_68_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_69(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDestroyCleanerBotAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6BA80D10EA1C02AE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_6BA80D10EA1C02AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9B2B3F3F26630418(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_9B2B3F3F26630418_OFFSET))(this, a1);
	}

	::System::Void Method_2_B0717B761432E2AB(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_B0717B761432E2AB_OFFSET))(this, a1);
	}

	::System::Void Method_2_65E1B7F45C649427(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_65E1B7F45C649427_OFFSET))(this, a1, a2, a3);
	}

	::RPG::MVector3 Method_2_F73B0E70366CB00B(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_F73B0E70366CB00B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A280E8352FFBE357(::Struct_2_EAC1BB0F093534A5 a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_METHOD_2_A280E8352FFBE357_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_70(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_70_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_71(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerResetModeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_71_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_72(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetCameraActiveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetCameraActiveAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_72_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_73(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimFireEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_73_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_74(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_74_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_75(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_75_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_76(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_76_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_77(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_77_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_78(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_78_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_79(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRIStateEmissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRIStateEmissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_79_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_80(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_80_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_81(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_81_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_82(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMissionTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMissionTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_82_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_83(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetResetPointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetResetPointAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_83_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_84(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_84_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_85(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetDynamicAttachAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetDynamicAttachAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_85_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_86(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_86_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_87(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_87_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_88(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_88_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_89(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_89_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_90(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_90_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_91(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_91_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_92(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_92_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_93(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_93_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_94(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_94_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_95(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_95_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_96(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_96_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_97(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_97_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_98(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_98_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_99(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningChangeStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_99_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_100(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_100_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_101(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimGrenadierAttackAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_101_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_102(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_102_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_103(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_103_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_104(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_104_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_105(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEvilSmileCrazyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_105_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_106(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEvilSmileDieAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEvilSmileDieAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_106_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_107(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_107_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_108(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_108_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_109(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_109_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_110(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerDashOrbAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerDashOrbAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_110_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_111(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_111_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_112(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_112_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_113(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_113_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_114(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_114_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_115(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_115_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_116(::RPG::GameCore::FiveDimCameraShakeAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_116_OFFSET))(this, a1);
	}

	::System::Void _DoAction_117(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_117_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_118(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_118_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_119(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_119_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__CHECKCONDITION_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__CHECKCONDITION_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_2(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__CHECKCONDITION_2_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_3(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__CHECKCONDITION_3_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_4(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__CHECKCONDITION_4_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_5(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__CHECKCONDITION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_120(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMutePlayerInputAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_120_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_121(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMutePlayerSkillAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMutePlayerSkillAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175__DOACTION_121_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::TaskContext* get__TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5029A8E11555D175_GET__TASKCONTEXT_OFFSET))(this);
	}
};
