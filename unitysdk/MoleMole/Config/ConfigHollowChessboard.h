#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C6E8F7731271F88A.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ChessboardPathLink.h"
#include "unitysdk/MoleMole/Config/ChessboardTimeLineConfig.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BubbleReasonType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ConfigHollowChessPieceEdge.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_PieceChangeStructType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TvSwitchType.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole::Config { class ChessboardCoinSoundConfig; }
namespace MoleMole::Config { class ChessboardEffectConfig; }
namespace MoleMole::Config { class ChessboardFrontViewConfig; }
namespace MoleMole::Config { class ChessboardJoystickConfig; }
namespace MoleMole::Config { class ChessboardPathConfig; }
namespace MoleMole::Config { class ChessboardScreenEffectConfigV2; }
namespace MoleMole::Config { class ChessboardSwitchEffect; }
namespace MoleMole::Config { class ConfigBlockedChessPiece; }
namespace MoleMole::Config { class ConfigChessSkin; }
namespace MoleMole::Config { class ConfigChessboardFilter; }
namespace MoleMole::Config { class ConfigFinishedChessPiece; }
namespace MoleMole::Config { class ConfigFrontVideoChessPiece; }
namespace MoleMole::Config { class ConfigHollowAssetPath; }
namespace MoleMole::Config { class ConfigHollowChangeChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboardIndicatorLight; }
namespace MoleMole::Config { class ConfigHollowChessboardLOD; }
namespace MoleMole::Config { class ConfigHollowChessboardObservation; }
namespace MoleMole::Config { class ConfigHollowChessboardPerformID; }
namespace MoleMole::Config { class ConfigHollowChessboardScreenUI; }
namespace MoleMole::Config { class ConfigHollowChessboardSystem; }
namespace MoleMole::Config { class ConfigHollowChessboard_BubbleConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectConfigData; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfigGroup; }
namespace MoleMole::Config { class ConfigHollowChessboard_RangeCurveItem; }
namespace MoleMole::Config { class ConfigHollowChessboard_TvMoveConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_TvSwitchConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_WeightedPerformingConfig; }
namespace MoleMole::Config { class ConfigHollowHackerGame; }
namespace MoleMole::Config { class ConfigHollowMoveEvent; }
namespace MoleMole::Config { class ConfigHollowNpcPushBack; }
namespace MoleMole::Config { class ConfigHollowOpenDialogAnimPreset; }
namespace MoleMole::Config { class ConfigHollowOutChessboard; }
namespace MoleMole::Config { class ConfigHollowPathIconTextureID; }
namespace MoleMole::Config { class ConfigHollowPopInteract; }
namespace MoleMole::Config { class ConfigHollowWaterFlowQTE; }
namespace MoleMole::Config { class HollowBigWorldConfig; }
namespace MoleMole::Config { class HollowEffectConfig; }
namespace MoleMole::HollowChessboard { class CellDiffusionTableConfig; }
namespace MoleMole::HollowChessboard { class EffectRoleTableConfig; }
namespace MoleMole::HollowChessboard { class HollowTipConfig; }
namespace MoleMole::HollowChessboard { class PieceMaterialChangeConfig; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETANIMLISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x162AE260)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETCHESSBOARDPATHZDELTA_OFFSET UNITYSDK_OFFSET(0x162AE350)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETCHESSBOARDPATHZ_OFFSET UNITYSDK_OFFSET(0x162AE2E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETCONVEYERBELTCAMERAMOVECURVE_OFFSET UNITYSDK_OFFSET(0x162AE060)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETPUSHDISTANCECAMERAMOVECURVE_OFFSET UNITYSDK_OFFSET(0x162ADF90)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETSPRINGCAMERAMOVECURVE_OFFSET UNITYSDK_OFFSET(0x162AE130)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GET_CORETVOVERLAYEFFS_OFFSET UNITYSDK_OFFSET(0x162ADC50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GET_DEFAULTPATHLINKRES_OFFSET UNITYSDK_OFFSET(0x162AE200)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GET_NORMALTVOVERLAYEFFS_OFFSET UNITYSDK_OFFSET(0x162AD940)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GET_TVSCC_OFFSET UNITYSDK_OFFSET(0x162ADF60)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TESTFILTER_OFFSET UNITYSDK_OFFSET(0x162AE520)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x162AE770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_TypeDefinitionIndex = 64373;

	class ConfigHollowChessboard : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean EnableNewEntity; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardTimeLineConfig>* PerformanceConfigGroup; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup*>* PieceChangeStructConfigGroupDic; // 0x68
		::System::Single riseDuration; // 0x70
		::UnityEngine::AnimationCurve* riseCurve; // 0x78
		::System::Single refreshViewDelayTime; // 0x80
		::System::Single lightDuration; // 0x84
		::System::Single lightDelay; // 0x88
		::UnityEngine::AnimationCurve* lightCurve; // 0x90
		::System::Single sinkDelayTime; // 0x98
		::System::Single sinkDuration; // 0x9C
		::UnityEngine::AnimationCurve* sinkCurve; // 0xA0
		::System::Boolean isRefreshViewBeforeSink; // 0xA8
		::System::Single sinkLightDuration; // 0xAC
		::System::Single sinkLightDelay; // 0xB0
		::UnityEngine::AnimationCurve* sinkLightCurve; // 0xB8
		::System::Single emptyTvBaseZ; // 0xC0
		::System::Single emptyTvOffsetZ; // 0xC4
		::System::Single emptyBrightnessMax; // 0xC8
		::System::Single emptyBrightnessMin; // 0xCC
		::System::Int32 emptyBrightnessRange; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _normalTvOverlayEffs; // 0xD8
		::System::Collections::Generic::List_1<::System::String*>* normalTvOverlayEffPathes; // 0xE0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _coreTvOverlayEffs; // 0xE8
		::System::Collections::Generic::List_1<::System::String*>* coreTvOverlayEffPathes; // 0xF0
		::System::Boolean tvPoolDebugToggleGeometry; // 0xF8
		::System::Boolean tvPoolDebugToggleGizoms; // 0xF9
		::System::Boolean tvPoolDebugToggle2D; // 0xFA
		::System::Boolean tvPoolDebugToggle3D; // 0xFB
		::System::Boolean chessboardViewerDebugToggle; // 0xFC
		::System::Boolean chessboardViewerEnableQuadTree; // 0xFD
		::System::Int32 chessboardQuadTreeMaxLevel; // 0x100
		::System::Int32 chessboardQuadTreeRegionNum; // 0x104
		::System::Boolean chessboardQuadTreeDebugToggle; // 0x108
		::System::Boolean chessboardBorderDebugToggle; // 0x109
		::System::Single chessboardVisibleOffsetZ; // 0x10C
		::UnityEngine::Vector2 tvShellModelPoolSize; // 0x110
		::UnityEngine::Vector2 tvBigShellModelPoolSize; // 0x118
		::System::Single tvGiSelfIntensity; // 0x120
		::System::Single tvGiNeighborIntensity; // 0x124
		::System::Single tvGiCornerIntensity; // 0x128
		::UnityEngine::Vector3 tvScc; // 0x12C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_TVModelData>*>* TvModelPreset; // 0x138
		::System::String* modelScreenPath1x1; // 0x140
		::System::String* modelScreenPath2x2; // 0x148
		::System::Boolean isTextureSheetSync; // 0x150
		::System::Int32 placeHolderChesspieceW; // 0x154
		::System::Int32 placeHolderChesspieceH; // 0x158
		::MoleMole::Config::ConfigBlockedChessPiece* blockedChesspiece; // 0x160
		::MoleMole::Config::ConfigFinishedChessPiece* finishedChesspiece; // 0x168
		::MoleMole::Config::ConfigFrontVideoChessPiece* frontVideoChessPiece; // 0x170
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessSkin*>* playerOnSkinAnimDict; // 0x178
		::System::String* tmpJumpMovePlayOnTextureAnimKey; // 0x180
		::MoleMole::Config::ChessboardFrontViewConfig* bigTvBlockedConfig; // 0x188
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*>* HollowChessboardSwitchEffects; // 0x190
		::System::Single PushBackNoEventFreeDelay; // 0x198
		::System::Single PushBackDelayTimeR2L; // 0x19C
		::System::Single PushBackDelayTimeL2R; // 0x1A0
		::System::Single PushBackDelayTimeB2U; // 0x1A4
		::System::Single PushBackDelayTimeU2B; // 0x1A8
		::System::Int32 PushBackAudioID; // 0x1AC
		::System::Int32 ConveyerBeltBeginAudioID; // 0x1B0
		::System::Int32 ConveyerBeltEndAudioID; // 0x1B4
		::System::Single ConveyerBeltDelayTime; // 0x1B8
		::System::Single ConveyerBeltFinalShakeDelay; // 0x1BC
		::System::String* ConveyerBeltFinalShakeR2L; // 0x1C0
		::System::String* ConveyerBeltFinalShakeL2R; // 0x1C8
		::System::String* ConveyerBeltFinalShakeB2U; // 0x1D0
		::System::String* ConveyerBeltFinalShakeU2B; // 0x1D8
		::System::Single ConveyerBeltCameraMoveInitDelayTime; // 0x1E0
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_RangeCurveItem*>* ConveyerBeltCameraMoveCurveGroup; // 0x1E8
		::System::Single PushDistanceDelayTime; // 0x1F0
		::System::Single PushDistanceStartDelayTime; // 0x1F4
		::System::Int32 PushDistanceAudioID; // 0x1F8
		::System::Single PushDistanceStartTime; // 0x1FC
		::System::Single PushDistanceStartFocusTime; // 0x200
		::System::Single PushDistanceCameraMoveAddtionalTime; // 0x204
		::System::Single PushDistanceChargeDistanceRatioX; // 0x208
		::System::Single PushDistanceChargeDistanceRatioY; // 0x20C
		::System::Single PushDistanceFinalOverDistanceRatioX; // 0x210
		::System::Single PushDistanceFinalOverDistanceRatioY; // 0x214
		::UnityEngine::AnimationCurve* PushDistanceChargeDistanceCurve; // 0x218
		::System::String* PushDistanceFinalShakeR2L; // 0x220
		::System::String* PushDistanceFinalShakeL2R; // 0x228
		::System::String* PushDistanceFinalShakeB2U; // 0x230
		::System::String* PushDistanceFinalShakeU2B; // 0x238
		::System::Single PushDistanceFinalShakeDelay; // 0x240
		::UnityEngine::AnimationCurve* PushDistanceFinalOverDistanceCurve; // 0x248
		::System::Single PushDistanceFinalOverTime; // 0x250
		::System::Single PushDistancePathDelayTime; // 0x254
		::System::Single PushDistancePathStartTime; // 0x258
		::System::Single PushDistanceNoEventFreeDelay; // 0x25C
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_RangeCurveItem*>* PushDistanceCameraMoveCurveGroup; // 0x260
		::System::Int32 SpringAudioID; // 0x268
		::System::Single SpringStartTime; // 0x26C
		::System::Single SpringStartFocusTime; // 0x270
		::System::Single SpringChargeDistanceRatioX; // 0x274
		::System::Single SpringChargeDistanceRatioY; // 0x278
		::UnityEngine::AnimationCurve* SpringChargeDistanceCurve; // 0x280
		::System::Single SpringDelayTime; // 0x288
		::System::Single SpringPathStartTime; // 0x28C
		::System::Single SpringPathDelayTime; // 0x290
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_RangeCurveItem*>* SpringCameraMoveCurveGroup; // 0x298
		::System::Single SpringCameraMoveAddtionalTime; // 0x2A0
		::System::Single SpringFinalOverTime; // 0x2A4
		::System::Single SpringFinalOverDistanceRatioX; // 0x2A8
		::System::Single SpringFinalOverDistanceRatioY; // 0x2AC
		::UnityEngine::AnimationCurve* SpringFinalOverDistanceCurve; // 0x2B0
		::System::Single StringFinalShakeDelay; // 0x2B8
		::System::String* StringFinalShakeR2L; // 0x2C0
		::System::String* StringFinalShakeL2R; // 0x2C8
		::System::String* StringFinalShakeB2U; // 0x2D0
		::System::String* StringFinalShakeU2B; // 0x2D8
		::System::Single PushAsPlayerDelayTime; // 0x2E0
		::System::Boolean IsSyncPathTextureSheet; // 0x2E4
		::System::Collections::Generic::List_1<::ProtoScript::NodeState>* NodeStateShowLinkView; // 0x2E8
		::System::Collections::Generic::List_1<::ProtoScript::NodeVisible>* VisibleStateShowLinkView; // 0x2F0
		::System::Collections::Generic::List_1<::Enum_3_C6E8F7731271F88A>* SubStateShowLinkView; // 0x2F8
		::System::Boolean IsOpenPathLinkView; // 0x300
		::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>* PathLinkResDict; // 0x308
		::System::Boolean IsOpenPathLinkViewFinished; // 0x310
		::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>* PathLinkResDictFinished; // 0x318
		::System::Boolean IsOpenPathLinkViewStamina; // 0x320
		::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>* PathLinkResDictStamina; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardPathConfig*>* GlobalPathLinkResDict; // 0x330
		::System::Single FrameReflectionRadius; // 0x338
		::System::Single FrameReflectionIntensity; // 0x33C
		::System::String* VideoBlendTextureSheet; // 0x340
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_TvSwitchType, ::MoleMole::Config::ConfigHollowChessboard_TvSwitchConfig*>* TvSwitchConfigDic; // 0x348
		::MoleMole::Config::ConfigHollowChessboard_TvMoveConfig* tvMoveConfig; // 0x350
		::System::Single fishTVDuration; // 0x358
		::UnityEngine::AnimationCurve* fishTVCurve; // 0x360
		::System::Single fishUpDelta; // 0x368
		::System::Single fishTVDownDuration; // 0x36C
		::UnityEngine::AnimationCurve* fishTVDownCurve; // 0x370
		::System::Single ChessboardInitZ; // 0x378
		::System::Single ChessboardDistance; // 0x37C
		::MoleMole::Vector2Int TeamChessboardSize; // 0x380
		::System::String* TeamChessboardTextureSheetConfigKey; // 0x388
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>* addHp; // 0x390
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>* reduceHp; // 0x398
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>* addStanima; // 0x3A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>* reduceStanima; // 0x3A8
		::MoleMole::Config::ChessboardCoinSoundConfig* addCoin1; // 0x3B0
		::MoleMole::Config::ChessboardCoinSoundConfig* addCoin2; // 0x3B8
		::System::Boolean EnableAcceleration; // 0x3C0
		::MoleMole::Config::ChessboardScreenEffectConfigV2* AccelerationConfig; // 0x3C8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::String*>*>* effectReplaceDic; // 0x3D0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* chessboardEffectAudioIDDic; // 0x3D8
		::System::Int32 SwitchToPlayerAudioID; // 0x3E0
		::System::Int32 SwitchToIconAudioID; // 0x3E4
		::UnityEngine::Color SoldOutColor; // 0x3E8
		::UnityEngine::Color CurseColor1; // 0x3F8
		::UnityEngine::Color CurseColor2; // 0x408
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>* OtherStructBubbleConfig; // 0x418
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowChessboard_BubbleReasonType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BubbleConfig*>*>* BubbleConfigMap; // 0x420
		::System::Single OpenEventDelay; // 0x428
		::System::Single CloseEventDelay; // 0x42C
		::System::Boolean EnableTimeScale; // 0x430
		::UnityEngine::Vector2 PlayerVisibleRegionW; // 0x434
		::UnityEngine::Vector2 PlayerVisibleRegionH; // 0x43C
		::System::Boolean PlayerVisibleRegionDebugToggle; // 0x444
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::MoleMole::Config::ConfigHollowChessboard_ConfigHollowChessPieceEdge>* chessPieceEdge; // 0x448
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>* AnimationCurveDict; // 0x450
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowChessboard_WeightedPerformingConfig*>* WeightedPerformingConfigs; // 0x458
		::MoleMole::Config::ConfigHollowChangeChessboard* HollowChangeChessboardConfig; // 0x460
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData* ItemCollectConfig; // 0x468
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChessboardFilter*>* ChessboardFilter; // 0x470
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* DefaultFilter; // 0x478
		::System::String* TestKey; // 0x480
		::MoleMole::Config::HollowBigWorldConfig* BigWorldConfig; // 0x488
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowEffectConfig*>* hollowEffectsData; // 0x490
		::System::Single FirstFallAsleepDelay; // 0x498
		::UnityEngine::Vector2 FallAsleepDurationRange; // 0x49C
		::System::Single ReFallAsleepDelay; // 0x4A4
		::System::Int32 FinalSleepNeedTimes; // 0x4A8
		::System::Int32 FallAsleepSoundID; // 0x4AC
		::System::Int32 AwakeFromSleepSoundID; // 0x4B0
		::System::Boolean UseBlessAsOverload; // 0x4B4
		::System::Boolean ClearAccelerate; // 0x4B5
		::System::Int32 PushBoxPlayerMoveAudioID; // 0x4B8
		::System::Int32 PushBoxPushAudioID; // 0x4BC
		::System::Int32 PushBoxBoxSlideAudioID; // 0x4C0
		::System::Int32 PushBoxBoxImpactAudioID; // 0x4C4
		::System::String* BattleToHollowLoop; // 0x4C8
		::System::String* BattleToHollowFakeLoading; // 0x4D0
		::System::String* BattleToHollowChangeLayerFakeLoading; // 0x4D8
		::System::String* ResultLoadingTitle_I18TImageKey; // 0x4E0
		::MoleMole::HollowChessboard::EffectRoleTableConfig* EffectRoleTableConfig; // 0x4E8
		::MoleMole::Config::ConfigHollowChessboardScreenUI* ScreenUIConfig; // 0x4F0
		::MoleMole::Config::ConfigHollowChessboardIndicatorLight* IndicatorLightConfig; // 0x4F8
		::UnityEngine::Vector3 HudOffset; // 0x500
		::System::Boolean LoopBlendEnd; // 0x50C
		::MoleMole::HollowChessboard::CellDiffusionTableConfig* DiffusionTableConfig; // 0x510
		::System::Single BeatsTime; // 0x518
		::System::Boolean OpenBeatsLog; // 0x51C
		::MoleMole::Config::ConfigHollowChessboardObservation* ObservationConfig; // 0x520
		::MoleMole::Config::ConfigHollowNpcPushBack* HollowNpcPushBackConfig; // 0x528
		::MoleMole::Config::ConfigHollowMoveEvent* HollowMoveEventConfig; // 0x530
		::MoleMole::HollowChessboard::HollowTipConfig* TipConfig; // 0x538
		::MoleMole::Config::ConfigHollowChessboardLOD* ChessboardLODConfig; // 0x540
		::MoleMole::Config::ConfigHollowChessboardSystem* ChessboardSystemConfig; // 0x548
		::MoleMole::Config::ConfigHollowAssetPath* HollowAssetPathConfig; // 0x550
		::MoleMole::Config::ConfigHollowChessboardPerformID* PerformID; // 0x558
		::MoleMole::Config::ConfigHollowPathIconTextureID* HollowPathIconTextureIDConfig; // 0x560
		::MoleMole::Config::ConfigHollowOpenDialogAnimPreset* PresetConfig; // 0x568
		::MoleMole::HollowChessboard::PieceMaterialChangeConfig* PieceMaterialChangeConfigData; // 0x570
		::MoleMole::Config::ConfigHollowWaterFlowQTE* HollowWaterFlowQTEConfig; // 0x578
		::MoleMole::Config::ConfigHollowHackerGame* HollowHackerGameConfig; // 0x580
		::MoleMole::Config::ConfigHollowOutChessboard* HollowOutChessboardConfig; // 0x588
		::MoleMole::Config::ConfigHollowPopInteract* HollowPopInteractConfig; // 0x590
		::MoleMole::Config::ChessboardJoystickConfig* JoystickConfig; // 0x598

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_normalTvOverlayEffs()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GET_NORMALTVOVERLAYEFFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_coreTvOverlayEffs()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GET_CORETVOVERLAYEFFS_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_TVScc()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GET_TVSCC_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* GetPushDistanceCameraMoveCurve(::System::Int32 pathStepCount)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETPUSHDISTANCECAMERAMOVECURVE_OFFSET))(this, pathStepCount);
		}

		::UnityEngine::AnimationCurve* GetConveyerBeltCameraMoveCurve(::System::Int32 pathStepCount)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETCONVEYERBELTCAMERAMOVECURVE_OFFSET))(this, pathStepCount);
		}

		::UnityEngine::AnimationCurve* GetSpringCameraMoveCurve(::System::Int32 pathStepCount)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETSPRINGCAMERAMOVECURVE_OFFSET))(this, pathStepCount);
		}

		::MoleMole::Config::ChessboardPathConfig* get_DefaultPathLinkRes()
		{
			return ((::MoleMole::Config::ChessboardPathConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GET_DEFAULTPATHLINKRES_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetAnimListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETANIMLISTVALUEDROPDOWN_OFFSET))(this);
		}

		::System::Single GetChessboardPathZ(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETCHESSBOARDPATHZ_OFFSET))(this, index);
		}

		::System::Single GetChessboardPathZDelta(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GETCHESSBOARDPATHZDELTA_OFFSET))(this, index);
		}

		::System::Void TestFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TESTFILTER_OFFSET))(this);
		}
	};
}
