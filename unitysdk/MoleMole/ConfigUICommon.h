#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/Enum_3_6F714FF477D2D093.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/ConfigSpecialDamageText.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/I18nImageCollection.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/ProtoScript/HollowShopCurrencyType.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BubbleProgressColor;
namespace Foundation { class ConfigDiffPatcher; }
namespace MoleMole { class BattleEvaluteConfigs; }
namespace MoleMole { class BuddyCameraConfig; }
namespace MoleMole { class BuddyChangeDepthConfig; }
namespace MoleMole { class CardOptionConfigs; }
namespace MoleMole { class CardOptionRarityConfigs; }
namespace MoleMole { class ConfigCurveDataInfo; }
namespace MoleMole { class ConfigDownloader; }
namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class ConfigMobileSetting; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class FeverV3MaterialParam; }
namespace MoleMole { class HollowCardCombineAnimationConfigs; }
namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class InterknotPostHeightDic; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class ItemRarityConfigs; }
namespace MoleMole { class NewConfigUICommon; }
namespace MoleMole { class PropBgLevel; }
namespace MoleMole { class RoleHudSpColorConfig; }
namespace MoleMole { class RoleRarityIconConfigs; }
namespace MoleMole { class UITextTypesettingLanSettings; }
namespace MoleMole { class UITextTypesettingSettings; }
namespace MoleMole { class UITokenDialogConfig; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIGUICOMMON_INITINTERKNOTPOSTHEIGHT_OFFSET UNITYSDK_OFFSET(0x17E47970)
#define MOLEMOLE_CONFIGUICOMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x17E481C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_TypeDefinitionIndex = 70274;

	class ConfigUICommon : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::NewConfigUICommon* NewConfigUICommon; // 0x58
		::UnityEngine::Texture2D* cursorTexture; // 0x60
		::System::Single skillLevelUpDelay; // 0x68
		::System::Single weaponRefineRefreshDelay; // 0x6C
		::MoleMole::RoleRarityIconConfigs* RoleRarityIconConfig; // 0x70
		::MoleMole::ItemRarityConfigs* ItemRarityConfigs; // 0x78
		::MoleMole::DepositoryPageTabConfigs* DepositoryTabConfigs; // 0x80
		::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>* YorozuyaQuestColors; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::UITokenDialogConfig*>* UITokenDialogConfigs; // 0x90
		::MoleMole::ItemIconTweenConfig* ItemTweenConfig; // 0x98
		::MoleMole::BattleEvaluteConfigs* BattleEvaluateConfigs; // 0xA0
		::MoleMole::CardOptionConfigs* CardOptionConfigs; // 0xA8
		::MoleMole::CardOptionRarityConfigs* CardOptionRarityConfigs; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* GeneralColorConfigs; // 0xB8
		::System::Single LoadingFadeInTime; // 0xC0
		::System::Single LoadingFadeOutTime; // 0xC4
		::System::Single EventClickTime; // 0xC8
		::System::String* QuestColor; // 0xD0
		::System::Int32 MaxDelta; // 0xD8
		::System::Single MinDelta; // 0xDC
		::System::Single AnimTime; // 0xE0
		::UnityEngine::AnimationCurve* BiggerCurve; // 0xE8
		::UnityEngine::AnimationCurve* SmallerCurve; // 0xF0
		::UnityEngine::Color DefaultColor; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>* IconOverrideSizeMap; // 0x108
		::MoleMole::PropBgLevel* CustomPropConfig; // 0x110
		::System::Single perfectSwitchLine; // 0x118
		::UnityEngine::Color grayRampColorA; // 0x11C
		::UnityEngine::Color grayRampColorB; // 0x12C
		::MoleMole::RoleHudSpColorConfig* firstStageSpColorConfig; // 0x140
		::MoleMole::RoleHudSpColorConfig* secondStageSpColorConfig; // 0x148
		::MoleMole::RoleHudSpColorConfig* fullStageSpColorConfig; // 0x150
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>* payConfigs; // 0x158
		::UnityEngine::Color ActiveRampColorA; // 0x160
		::UnityEngine::Color ActiveRampColorB; // 0x170
		::UnityEngine::Color UnActiveRampColorA; // 0x180
		::UnityEngine::Color UnActiveRampColorB; // 0x190
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StanimaOverloadStartEffect; // 0x1A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StanimaOverloadEndEffect; // 0x1A8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StanimaOverloadLoopEffect; // 0x1B0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>* virtualCameraConfig; // 0x1B8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>* generalIconColorConfig; // 0x1C0
		::System::Single MinLoadingTime; // 0x1C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* RamenPerformDict; // 0x1D0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CafePerformDict; // 0x1D8
		::System::String* CoffeeBindingTrackName; // 0x1E0
		::System::String* CoffeeBindingCupMaterialTrackName; // 0x1E8
		::System::String* CoffeeBindingSaucerMaterialTrackName; // 0x1F0
		::System::String* CoffeeBindingCoffeeMaterialTrackName; // 0x1F8
		::System::String* CoffeeDynamicLayer; // 0x200
		::System::Single CafePerformanceBMFadeInTime; // 0x208
		::System::Single CafePerformanceBMFadeOutTime; // 0x20C
		::System::Single EquipRTRotateSpeed; // 0x210
		::System::Single WeaponRTRotateSpeed; // 0x214
		::System::Single WeaponRTTriggerPerformRotateAngle; // 0x218
		::System::Single ToPageFadeInTime; // 0x21C
		::System::Single SkipTime; // 0x220
		::System::Single GamepadSliderPressSpeedUpMaxSpeedRatio; // 0x224
		::System::Single GamepadSliderPressSpeedUpStartTime; // 0x228
		::System::Single GamepadSliderPressSpeedUpReachMaxSpeedTime; // 0x22C
		::UnityEngine::AnimationCurve* GamepadSliderPressSpeedUpAnimationCurve; // 0x230
		::System::Single GamepadSliderPressSpeedUpResetTimerMaxTime; // 0x238
		::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>* MainCityLogicInputAccessDict; // 0x240
		::System::String* ManualQTEOffVideoPath; // 0x248
		::System::String* ManualQTEOnVideoPath; // 0x250
		::System::String* MainQuestDifficultyNormalImagePath; // 0x258
		::System::String* MainQuestDifficultyChallengeImagePath; // 0x260
		::System::Int32 DamageTextMaxDamageNum; // 0x268
		::System::Single DamageTextPositionYOffset; // 0x26C
		::UnityEngine::Vector2 DamageTextReferTargetXRange; // 0x270
		::UnityEngine::Vector2 DamageTextReferTargetYRange; // 0x278
		::UnityEngine::Vector2 DamageTextScreenSpaceRangeMin; // 0x280
		::UnityEngine::Vector2 DamageTextScreenSpaceRangeMax; // 0x288
		::UnityEngine::AnimationCurve* RandomDamageTextRadiusCurve; // 0x290
		::UnityEngine::AnimationCurve* DamageTextLengthScaleCurve; // 0x298
		::System::String* SelfBeHitDamageFontMaterialPath; // 0x2A0
		::System::String* IneffectiveResistDamageFontMaterialPath; // 0x2A8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>* DamageElementTypeFontMaterialPath; // 0x2B0
		::System::Boolean DamageTextFollowDampingEnabled; // 0x2B8
		::System::Single DamageTextFollowDampingSpeed; // 0x2BC
		::Enum_3_6F714FF477D2D093 DamageTextTargetFollow; // 0x2C0
		::UnityEngine::AnimationCurve* DamageTextScreenSpaceYOffsetCurve; // 0x2C8
		::System::Single DamageTextCharWidthOffset; // 0x2D0
		::System::Single DamageTextNormalScale; // 0x2D4
		::System::Single DamageTextCriticalScale; // 0x2D8
		::System::Single DamageTextSpecialScale; // 0x2DC
		::System::Single DamageTextUniqueSkillScale; // 0x2E0
		::System::Single DamageTextUniqueSkillBlinkInterval; // 0x2E4
		::System::Single DamageTextUniqueSkillBlinkDuration; // 0x2E8
		::System::Int32 DamageTextUniqueSkillBlinkTimes; // 0x2EC
		::System::Single DamageTextNormalShowTime; // 0x2F0
		::System::Single DamageTextCriticalShowTime; // 0x2F4
		::System::Single DamageTextSpecialShowTime; // 0x2F8
		::System::Single DamageTextUniqueSkillShowTime; // 0x2FC
		::System::Single DamageTextFadeAnim02ShowTimeDelta; // 0x300
		::System::Single DamageTextEffectiveShowTimeDelta; // 0x304
		::UnityEngine::AnimationCurve* DamageTextCharacterFadeInIntervalCurve; // 0x308
		::UnityEngine::AnimationCurve* DamageTextCharacterFadeOutIntervalCurve; // 0x310
		::UnityEngine::AnimationCurve* DamageTextCharacterFadeIn02IntervalCurve; // 0x318
		::UnityEngine::AnimationCurve* DamageTextCharacterFadeOut02IntervalCurve; // 0x320
		::System::Single DamageTextCharacterFadeInTime; // 0x328
		::System::Single DamageTextCharacterFadeOutTime; // 0x32C
		::System::Single DamageTextCharacterFadeIn02Time; // 0x330
		::System::Single DamageTextCharacterFadeOut02Time; // 0x334
		::System::Single SpecialDamageTextV3ScaleRatio; // 0x338
		::System::Single SpecialDamageTextV3ShowTime; // 0x33C
		::System::Single SpecialDamageTextV3Length; // 0x340
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictEN; // 0x348
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictSC; // 0x350
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictTC; // 0x358
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictJP; // 0x360
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictKR; // 0x368
		::System::Single SpecialDamageTextV2ScaleRatio; // 0x370
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>* SpecialDamageV2EffectAnimTimeDict; // 0x378
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>* SpecialDamageV2TextLengthDict; // 0x380
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>* DamageTextSpecialDamageConfigDict; // 0x388
		::UnityEngine::Color knowledgeOnProgress; // 0x390
		::UnityEngine::Color knowledgeGotColor; // 0x3A0
		::System::Single replyminHeight; // 0x3B0
		::System::Single replyTime; // 0x3B4
		::System::Single replyInterval; // 0x3B8
		::UnityEngine::Color questPostColor; // 0x3BC
		::UnityEngine::Color questReadPostColor; // 0x3CC
		::System::Single LevelUpDelay; // 0x3DC
		::System::Single ChangeTimeDelay; // 0x3E0
		::System::Single stickTapesMaxSpeed; // 0x3E4
		::UnityEngine::AnimationCurve* stickTapesSpeedCurve; // 0x3E8
		::System::Single stickTapesPlusSpeedTime; // 0x3F0
		::System::Single stickPressInteval; // 0x3F4
		::System::Single stickPressPercent; // 0x3F8
		::UnityEngine::AnimationCurve* gamepadTapesSinglePressDragSpeedCurve; // 0x400
		::System::Single gamepadTapesSinglePressDragMaxSpeed; // 0x408
		::System::Single gamepadTapesSinglePressDragMinSpeed; // 0x40C
		::System::Single FairyMinInterval; // 0x410
		::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>* FairyColors; // 0x418
		::System::Single buttonClickColdDown; // 0x420
		::System::Single ArcadeFarPosTextureSheetLoopTime; // 0x424
		::System::Single ArcadeEntranceFadeOutAnimDelayTime; // 0x428
		::System::Single ArcadeEntranceFadeInAnimAdvanceTime; // 0x42C
		::System::Single ArcadeMenuShopSpecialFadeInAdvanceTime; // 0x430
		::System::Single ArcadeGamingSpecialFadeInAdvanceTime; // 0x434
		::System::String* ArcadeEntranceCountDownActivityIconPath; // 0x438
		::System::String* ArcadeEntranceCountDownShopIconPath; // 0x440
		::System::UInt32 ArcadeGameRankUserNum; // 0x448
		::UnityEngine::Color ArcadeRankOneTextColor; // 0x44C
		::UnityEngine::Color ArcadeRankTwoTextColor; // 0x45C
		::UnityEngine::Color ArcadeRankThreeTextColor; // 0x46C
		::UnityEngine::Color ArcadeRankHundredTextColor; // 0x47C
		::UnityEngine::AnimationCurve* ArcadeSpinningTableRotateMapCurve; // 0x490
		::System::Single ArcadeSpinningTableRotateFrequency; // 0x498
		::System::Single ArcadeSpinningTableRotateHalfLife; // 0x49C
		::System::Single ArcadeActivityListFixLerpSpeed; // 0x4A0
		::UnityEngine::Color ArcadeActivityItemCenterTextColor; // 0x4A4
		::UnityEngine::Color ArcadeActivityItemNoCenterTextColor; // 0x4B4
		::System::Int32 ArcadeActivityCenterItemCanvasOrder; // 0x4C4
		::System::Single ArcadeActivityListItemMinScale; // 0x4C8
		::UnityEngine::AnimationCurve* ArcadeActivityListItemScaleCurve; // 0x4D0
		::System::Single ArcadeActivityListScaleRange; // 0x4D8
		::System::Boolean ArcadeActivityListWheelDebug; // 0x4DC
		::System::Boolean ArcadeActivityListWheelIsRhombus; // 0x4DD
		::System::Single ArcadeActivityListItemNumOnWheel; // 0x4E0
		::System::Single ArcadeActivityListWheelDistanceToCamera; // 0x4E4
		::UnityEngine::Vector2 ArcadeActivityListWheelRhombusSize; // 0x4E8
		::UnityEngine::AnimationCurve* ArcadeActivityListWheelRhombusShapeCurve; // 0x4F0
		::UnityEngine::AnimationCurve* ArcadeActivityListWheelLogicPosition2ViewPositionCurve; // 0x4F8
		::System::Single ArcadeActivityListWheelRadius; // 0x500
		::System::Single ArcadeActivityListWheelZScale; // 0x504
		::UnityEngine::Vector2 ArcadeActivityListItemFadeOutAngle; // 0x508
		::UnityEngine::AnimationCurve* ArcadeActivityListItemFadeOutCurve; // 0x510
		::UnityEngine::AnimationCurve* yScreenOffset_Top; // 0x518
		::UnityEngine::AnimationCurve* yScreenOffset_Buttom; // 0x520
		::UnityEngine::AnimationCurve* xScreenOffset_left; // 0x528
		::UnityEngine::AnimationCurve* xScreenOffset_Right; // 0x530
		::UnityEngine::Vector2 buddyTVScreenSize; // 0x538
		::System::Int32 rtCameraSize; // 0x540
		::UnityEngine::Vector2 buddyTVScreenPosition; // 0x544
		::UnityEngine::Vector3 buddyTVRotation; // 0x54C
		::UnityEngine::Vector3 buddyTVPosition; // 0x558
		::System::Boolean isOpenEditor; // 0x564
		::MoleMole::BuddyCameraConfig* BuddyBornCameraConfig; // 0x568
		::System::Single buddySwitchTime; // 0x570
		::System::Single buddySwitchTime_Out; // 0x574
		::System::Single buddySwitchMaskTime; // 0x578
		::System::Single buddySwitchMaskTime_GamePad; // 0x57C
		::MoleMole::BuddyChangeDepthConfig* buddyChangeDepthConfig; // 0x580
		::MoleMole::BuddyCameraConfig* BuddyEditorCameraConfig; // 0x588
		::System::Single AdsorbedSpeed; // 0x590
		::System::Single BuddyBagItemLongPressTime; // 0x594
		::System::Single HollowLayerProgressAnimDurtaion; // 0x598
		::System::Boolean IsHollowLayerProgressCustomAnim; // 0x59C
		::DG::Tweening::Ease HollowLayerProgressTweenEase; // 0x5A0
		::UnityEngine::AnimationCurve* HollowLayerProgressCustomCurve; // 0x5A8
		::System::Single RoleLevelupProgressAnimDurtaion; // 0x5B0
		::System::Single RoleLevelupProgressMinAnimDurtaion; // 0x5B4
		::System::Boolean IsRoleLevelupProgressCustomAnim; // 0x5B8
		::DG::Tweening::Ease RoleLevelupProgressTweenEase; // 0x5BC
		::UnityEngine::AnimationCurve* RoleLevelupProgressCustomCurve; // 0x5C0
		::System::Single GeneralSmallTipsLifeTime; // 0x5C8
		::System::Single MaskWaitTime; // 0x5CC
		::System::Single FeverShowRatio; // 0x5D0
		::System::Single FeverShowLerpNum; // 0x5D4
		::System::Single FeverShowMinAddNum; // 0x5D8
		::System::String* FeverPtsMaterialPath; // 0x5E0
		::System::String* FeverOperationMaterialPath; // 0x5E8
		::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>* FeverV3MaterialParams; // 0x5F0
		::System::String* PerfectSwitchMaterialPath; // 0x5F8
		::System::String* PerfectSwitchEmptyMaterialPath; // 0x600
		::System::Single InLevelVirtualJoystickFadeOutDelayTime; // 0x608
		::System::String* WeaponVideoScreenPrefabPath; // 0x610
		::System::String* WeaponEmptyStartFrameTextureKey; // 0x618
		::System::String* WeaponEmptyLoopFrameTextureKey; // 0x620
		::System::String* WeaponUnequippedStartFrameTextureKey; // 0x628
		::System::String* WeaponUnequippedLoopFrameTextureKey; // 0x630
		::System::String* WeaponInitTextureFrameKey; // 0x638
		::System::String* WeaponTransitionTextureFrameKey; // 0x640
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>* CurveDataInfo; // 0x648
		::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>* HollowShopIcon; // 0x650
		::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>* HollowShopPriceColor; // 0x658
		::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>* WorkbenchInformationRTRotateSpeedDic; // 0x660
		::System::Single WorkbenchInformationRTRotateAcceleration; // 0x668
		::System::Single WorkbenchInformationRTRotateMaxDeltaPos; // 0x66C
		::MoleMole::HollowCardCombineConfig* CardCombineConfig; // 0x670
		::MoleMole::HollowCardCombineAnimationConfigs* CardCombineAnimConfig; // 0x678
		::MoleMole::InterknotPostHeightDic* InterknotPostHeight; // 0x680
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* floorOffset; // 0x688
		::System::Collections::Generic::List_1<::System::Int32>* floorMapIndex; // 0x690
		::System::Int32 TowerDefenseBuddyID; // 0x698
		::System::Int32 TowerDefenseBuddyPopGroup; // 0x69C
		::System::Int32 TowerDefenseEnhanceID; // 0x6A0
		::System::Int32 TowerDefenseEnhancePopGroup; // 0x6A4
		::UnityEngine::Vector2 SortBtnSizeMobile; // 0x6A8
		::UnityEngine::Vector2 SortBtnOffsetMobile; // 0x6B0
		::UnityEngine::Vector2 SortBtnSizePC; // 0x6B8
		::UnityEngine::Vector2 SortBtnOffsetPC; // 0x6C0
		::UnityEngine::Vector2 SortBtnSizeConsole; // 0x6C8
		::UnityEngine::Vector2 SortBtnOffsetConsole; // 0x6D0
		::UnityEngine::Vector2 WholeEffectBtnSizeMobile; // 0x6D8
		::UnityEngine::Vector2 WholeEffectBtnOffsetMobile; // 0x6E0
		::UnityEngine::Vector2 WholeEffectBtnSizePC; // 0x6E8
		::UnityEngine::Vector2 WholeEffectBtnOffsetPC; // 0x6F0
		::UnityEngine::Vector2 WholeEffectBtnSizeConsole; // 0x6F8
		::UnityEngine::Vector2 WholeEffectBtnOffsetConsole; // 0x700
		::System::String* infoBox; // 0x708
		::Foundation::AssetPath SupportAttackBtnIconPath; // 0x710
		::System::Single HudDynamicOffsetYSpeed; // 0x720
		::System::Single HudDynamicOffsetThresholdY; // 0x724
		::System::Single HudDynamicOffsetXSpeed; // 0x728
		::System::Single HudDynamicOffsetThresholdX; // 0x72C
		::System::Single ShieldHudDynamicOffsetYSpeed; // 0x730
		::System::Single ShieldHudDynamicOffsetThresholdY; // 0x734
		::System::Single ShieldHudDynamicOffsetXSpeed; // 0x738
		::System::Single ShieldHudDynamicOffsetThresholdX; // 0x73C
		::MoleMole::ConfigDownloader* DownloaderConfig; // 0x740
		::Foundation::ConfigDiffPatcher* DiffPatcherConfig; // 0x748
		::MoleMole::UITextTypesettingSettings* GenericTypesetSettings; // 0x750
		::System::Collections::Generic::List_1<::MoleMole::UITextTypesettingLanSettings*>* LangaugeTypesetSettings; // 0x758
		::System::Collections::Generic::HashSet_1<::MoleMole::LanguageType>* DisableNoWordBreakLanguages; // 0x760
		::System::Int32 MalePhoneDelay; // 0x768
		::System::Int32 FemalePhoneDelay; // 0x76C
		::System::Single RewardShowInterval; // 0x770
		::UnityEngine::AnimationCurve* RewardShowTextureSheetCurve; // 0x778
		::UnityEngine::AnimationCurve* RewardDisappearMotionCurve; // 0x780
		::System::Single RewardDisappearFirstTime; // 0x788
		::System::Single RewardAfterDisappearMoveTime; // 0x78C
		::System::Single RewardAfterMoveEnterTime; // 0x790
		::System::Single RewardDisappearGapTime; // 0x794
		::UnityEngine::Vector2 RewardTipsWidgetRect; // 0x798
		::System::Single RewardTipsWidgetGap; // 0x7A0
		::UnityEngine::AnimationCurve* RewardAccelerateCurve; // 0x7A8
		::MoleMole::ConfigMobileSetting* ConfigMobileSetting; // 0x7B0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::I18nImageCollection>* I18NImageCollections; // 0x7B8
		::System::String* RoleSpecialWeaponDemoVideoPath1; // 0x7C0
		::System::String* RoleSpecialWeaponDemoVideoPath2; // 0x7C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON__CTOR_OFFSET))(this);
		}

		::System::Void InitInterknotPostHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INITINTERKNOTPOSTHEIGHT_OFFSET))(this);
		}
	};
}
