#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/SocialPostSizeType.h"
#include "unitysdk/ProtoScript/HollowShopCurrencyType.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BubbleProgressColor;
namespace MoleMole { class BuddyCameraConfig; }
namespace MoleMole { class BuddyChangeDepthConfig; }
namespace MoleMole { class ConfigUICommon_UIPage_StreamingPagePauseGameLogic; }
namespace MoleMole { class FeverV3MaterialParam; }
namespace MoleMole { class InterknotPostHeightDic; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_INITINTERKNOTPOSTHEIGHT_OFFSET UNITYSDK_OFFSET(0x183E4A00)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x183E5260)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_UIPage_TypeDefinitionIndex = 52154;

	class ConfigUICommon_UIPage : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single RoleLevelupProgressAnimDurtaion; // 0x58
		::System::Single RoleLevelupProgressMinAnimDurtaion; // 0x5C
		::System::Boolean IsRoleLevelupProgressCustomAnim; // 0x60
		::DG::Tweening::Ease RoleLevelupProgressTweenEase; // 0x64
		::UnityEngine::AnimationCurve* RoleLevelupProgressCustomCurve; // 0x68
		::System::Single FeverShowRatio; // 0x70
		::System::Single FeverShowLerpNum; // 0x74
		::System::Single FeverShowMinAddNum; // 0x78
		::System::String* FeverPtsMaterialPath; // 0x80
		::System::String* FeverOperationMaterialPath; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>* FeverV3MaterialParams; // 0x90
		::System::String* PerfectSwitchMaterialPath; // 0x98
		::System::String* PerfectSwitchEmptyMaterialPath; // 0xA0
		::System::String* WeaponVideoScreenPrefabPath; // 0xA8
		::System::String* WeaponEmptyStartFrameTextureKey; // 0xB0
		::System::String* WeaponEmptyLoopFrameTextureKey; // 0xB8
		::System::String* WeaponUnequippedStartFrameTextureKey; // 0xC0
		::System::String* WeaponUnequippedLoopFrameTextureKey; // 0xC8
		::System::String* WeaponInitTextureFrameKey; // 0xD0
		::System::String* WeaponTransitionTextureFrameKey; // 0xD8
		::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>* HollowShopIcon; // 0xE0
		::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>* HollowShopPriceColor; // 0xE8
		::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>* WorkbenchInformationRTRotateSpeedDic; // 0xF0
		::MoleMole::InterknotPostHeightDic* InterknotPostHeight; // 0xF8
		::UnityEngine::Color knowledgeOnProgress; // 0x100
		::UnityEngine::Color knowledgeGotColor; // 0x110
		::System::Single replyminHeight; // 0x120
		::System::Single replyTime; // 0x124
		::System::Single replyInterval; // 0x128
		::UnityEngine::Color questPostColor; // 0x12C
		::UnityEngine::Color questReadPostColor; // 0x13C
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SocialPostEmptySize; // 0x150
		::System::Collections::Generic::Dictionary_2<::MoleMole::SocialPostSizeType, ::System::Single>* SocialPostSize; // 0x158
		::System::Single LevelUpDelay; // 0x160
		::System::Single ChangeTimeDelay; // 0x164
		::System::Single stickTapesMaxSpeed; // 0x168
		::UnityEngine::AnimationCurve* stickTapesSpeedCurve; // 0x170
		::System::Single stickTapesPlusSpeedTime; // 0x178
		::System::Single stickPressInteval; // 0x17C
		::System::Single stickPressPercent; // 0x180
		::UnityEngine::AnimationCurve* gamepadTapesSinglePressDragSpeedCurve; // 0x188
		::System::Single gamepadTapesSinglePressDragMaxSpeed; // 0x190
		::System::Single gamepadTapesSinglePressDragMinSpeed; // 0x194
		::System::Single FairyMinInterval; // 0x198
		::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>* FairyColors; // 0x1A0
		::System::Single buttonClickColdDown; // 0x1A8
		::System::Single ArcadeFarPosTextureSheetLoopTime; // 0x1AC
		::System::Single ArcadeEntranceFadeOutAnimDelayTime; // 0x1B0
		::System::Single ArcadeEntranceFadeInAnimAdvanceTime; // 0x1B4
		::System::Single ArcadeMenuShopSpecialFadeInAdvanceTime; // 0x1B8
		::System::Single ArcadeGamingSpecialFadeInAdvanceTime; // 0x1BC
		::System::String* ArcadeEntranceCountDownActivityIconPath; // 0x1C0
		::System::String* ArcadeEntranceCountDownShopIconPath; // 0x1C8
		::System::UInt32 ArcadeGameRankUserNum; // 0x1D0
		::UnityEngine::Color ArcadeRankOneTextColor; // 0x1D4
		::UnityEngine::Color ArcadeRankTwoTextColor; // 0x1E4
		::UnityEngine::Color ArcadeRankThreeTextColor; // 0x1F4
		::UnityEngine::Color ArcadeRankHundredTextColor; // 0x204
		::UnityEngine::AnimationCurve* ArcadeSpinningTableRotateMapCurve; // 0x218
		::System::Single ArcadeSpinningTableRotateFrequency; // 0x220
		::System::Single ArcadeSpinningTableRotateHalfLife; // 0x224
		::System::Single ArcadeActivityListFixLerpSpeed; // 0x228
		::UnityEngine::Color ArcadeActivityItemCenterTextColor; // 0x22C
		::UnityEngine::Color ArcadeActivityItemNoCenterTextColor; // 0x23C
		::System::Int32 ArcadeActivityCenterItemCanvasOrder; // 0x24C
		::System::Single ArcadeActivityListItemMinScale; // 0x250
		::UnityEngine::AnimationCurve* ArcadeActivityListItemScaleCurve; // 0x258
		::System::Single ArcadeActivityListScaleRange; // 0x260
		::System::Boolean ArcadeActivityListWheelDebug; // 0x264
		::System::Boolean ArcadeActivityListWheelIsRhombus; // 0x265
		::System::Single ArcadeActivityListItemNumOnWheel; // 0x268
		::System::Single ArcadeActivityListWheelDistanceToCamera; // 0x26C
		::UnityEngine::Vector2 ArcadeActivityListWheelRhombusSize; // 0x270
		::UnityEngine::AnimationCurve* ArcadeActivityListWheelRhombusShapeCurve; // 0x278
		::UnityEngine::AnimationCurve* ArcadeActivityListWheelLogicPosition2ViewPositionCurve; // 0x280
		::System::Single ArcadeActivityListWheelRadius; // 0x288
		::System::Single ArcadeActivityListWheelZScale; // 0x28C
		::UnityEngine::Vector2 ArcadeActivityListItemFadeOutAngle; // 0x290
		::UnityEngine::AnimationCurve* ArcadeActivityListItemFadeOutCurve; // 0x298
		::UnityEngine::AnimationCurve* yScreenOffset_Top; // 0x2A0
		::UnityEngine::AnimationCurve* yScreenOffset_Buttom; // 0x2A8
		::UnityEngine::AnimationCurve* xScreenOffset_left; // 0x2B0
		::UnityEngine::AnimationCurve* xScreenOffset_Right; // 0x2B8
		::UnityEngine::Vector2 buddyTVScreenSize; // 0x2C0
		::System::Int32 rtCameraSize; // 0x2C8
		::UnityEngine::Vector2 buddyTVScreenPosition; // 0x2CC
		::UnityEngine::Vector3 buddyTVRotation; // 0x2D4
		::UnityEngine::Vector3 buddyTVPosition; // 0x2E0
		::System::Boolean isOpenEditor; // 0x2EC
		::MoleMole::BuddyCameraConfig* BuddyBornCameraConfig; // 0x2F0
		::System::Single buddySwitchTime; // 0x2F8
		::System::Single buddySwitchTime_Out; // 0x2FC
		::System::Single buddySwitchMaskTime; // 0x300
		::System::Single buddySwitchMaskTime_GamePad; // 0x304
		::MoleMole::BuddyChangeDepthConfig* buddyChangeDepthConfig; // 0x308
		::MoleMole::BuddyCameraConfig* BuddyEditorCameraConfig; // 0x310
		::System::Single AdsorbedSpeed; // 0x318
		::System::Single BuddyBagItemLongPressTime; // 0x31C
		::System::Single HollowLayerProgressAnimDurtaion; // 0x320
		::System::Boolean IsHollowLayerProgressCustomAnim; // 0x324
		::DG::Tweening::Ease HollowLayerProgressTweenEase; // 0x328
		::UnityEngine::AnimationCurve* HollowLayerProgressCustomCurve; // 0x330
		::System::Single RewardShowInterval; // 0x338
		::UnityEngine::AnimationCurve* RewardShowTextureSheetCurve; // 0x340
		::UnityEngine::AnimationCurve* RewardDisappearMotionCurve; // 0x348
		::System::Single RewardDisappearFirstTime; // 0x350
		::System::Single RewardAfterDisappearMoveTime; // 0x354
		::System::Single RewardAfterMoveEnterTime; // 0x358
		::System::Single RewardDisappearGapTime; // 0x35C
		::UnityEngine::Vector2 RewardTipsWidgetRect; // 0x360
		::System::Single RewardTipsWidgetGap; // 0x368
		::UnityEngine::AnimationCurve* RewardAccelerateCurve; // 0x370
		::System::Collections::Generic::List_1<::System::String*>* NoPauseGamePopWndCtlIdStrList; // 0x378
		::System::Collections::Generic::List_1<::System::String*>* PauseGamePopWndCtlIdStrList; // 0x380
		::System::Collections::Generic::List_1<::MoleMole::ConfigUICommon_UIPage_StreamingPagePauseGameLogic*>* CustomPauseLogicGamePageCtlIdList; // 0x388
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* FadeInDisablePageCtlIdStrList; // 0x390
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* FadeOutDisablePageCtlIdStrList; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE__CTOR_OFFSET))(this);
		}

		::System::Void InitInterknotPostHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_INITINTERKNOTPOSTHEIGHT_OFFSET))(this);
		}
	};
}
