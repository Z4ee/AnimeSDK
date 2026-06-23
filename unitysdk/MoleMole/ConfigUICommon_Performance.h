#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class ConfigMobileSetting; }
namespace MoleMole { class ConfigSummerMainPageGyro; }
namespace MoleMole { class ConfigWeakPanel; }
namespace MoleMole { class PropBgLevel; }
namespace MoleMole { class RoleHudSpColorConfig; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E49670)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Performance_TypeDefinitionIndex = 43115;

	class ConfigUICommon_Performance : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Color grayRampColorA; // 0x58
		::UnityEngine::Color grayRampColorB; // 0x68
		::MoleMole::RoleHudSpColorConfig* secondStageSpColorConfig; // 0x78
		::MoleMole::RoleHudSpColorConfig* fullStageSpColorConfig; // 0x80
		::UnityEngine::Color rpGrayRampColorA; // 0x88
		::UnityEngine::Color rpGrayRampColorB; // 0x98
		::MoleMole::RoleHudSpColorConfig* secondStageRpColorConfig; // 0xA8
		::MoleMole::RoleHudSpColorConfig* fullStageRpColorConfig; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>* IconOverrideSizeMap; // 0xB8
		::MoleMole::PropBgLevel* CustomPropConfig; // 0xC0
		::System::Single perfectSwitchLine; // 0xC8
		::MoleMole::RoleHudSpColorConfig* firstStageSpColorConfig; // 0xD0
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>* payConfigs; // 0xD8
		::UnityEngine::Color ActiveRampColorA; // 0xE0
		::UnityEngine::Color ActiveRampColorB; // 0xF0
		::UnityEngine::Color UnActiveRampColorA; // 0x100
		::UnityEngine::Color UnActiveRampColorB; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StanimaOverloadStartEffect; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StanimaOverloadEndEffect; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StanimaOverloadLoopEffect; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>* virtualCameraConfig; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>* generalIconColorConfig; // 0x140
		::System::Single MinLoadingTime; // 0x148
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* RamenPerformDict; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CafePerformDict; // 0x158
		::System::String* CoffeeBindingTrackName; // 0x160
		::System::String* CoffeeBindingCupMaterialTrackName; // 0x168
		::System::String* CoffeeBindingSaucerMaterialTrackName; // 0x170
		::System::String* CoffeeBindingCoffeeMaterialTrackName; // 0x178
		::System::String* CoffeeDynamicLayer; // 0x180
		::System::Single CafePerformanceBMFadeInTime; // 0x188
		::System::Single CafePerformanceBMFadeOutTime; // 0x18C
		::System::Single EquipRTRotateSpeed; // 0x190
		::System::Single WeaponRTRotateSpeed; // 0x194
		::System::Single WeaponRTTriggerPerformRotateAngle; // 0x198
		::System::Int32 ZhenzhenSpecialWeaponItemID; // 0x19C
		::System::Single ZhenzhenWeaponRootRotateSpeed; // 0x1A0
		::System::Single ToPageFadeInTime; // 0x1A4
		::System::Single SkipTime; // 0x1A8
		::System::Single GamepadSliderPressSpeedUpMaxSpeedRatio; // 0x1AC
		::System::Single GamepadSliderPressSpeedUpStartTime; // 0x1B0
		::System::Single GamepadSliderPressSpeedUpReachMaxSpeedTime; // 0x1B4
		::UnityEngine::AnimationCurve* GamepadSliderPressSpeedUpAnimationCurve; // 0x1B8
		::System::Single GamepadSliderPressSpeedUpResetTimerMaxTime; // 0x1C0
		::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>* MainCityLogicInputAccessDict; // 0x1C8
		::System::String* ManualQTEOffVideoPath; // 0x1D0
		::System::String* ManualQTEOnVideoPath; // 0x1D8
		::System::String* MainQuestDifficultyNormalImagePath; // 0x1E0
		::System::String* MainQuestDifficultyChallengeImagePath; // 0x1E8
		::System::Single GeneralSmallTipsLifeTime; // 0x1F0
		::System::Single MaskWaitTime; // 0x1F4
		::System::Single InLevelVirtualJoystickFadeOutDelayTime; // 0x1F8
		::System::String* infoBox; // 0x200
		::System::Single DirectionSkillPhaseChangeCDTime; // 0x208
		::System::Single DirectionSkillDirectionChangeCDTime; // 0x20C
		::Foundation::AssetPath DirectionSkillUpBtnIconPath; // 0x210
		::Foundation::AssetPath DirectionSkillDownBtnIconPath; // 0x220
		::Foundation::AssetPath DirectionSkillLeftBtnIconPath; // 0x230
		::Foundation::AssetPath DirectionSkillRightBtnIconPath; // 0x240
		::System::Single DirectionSkillUpHoldTime; // 0x250
		::System::Single DirectionSkillDownHoldTime; // 0x254
		::System::Single DirectionSkillLeftHoldTime; // 0x258
		::System::Single DirectionSkillRightHoldTime; // 0x25C
		::Foundation::AssetPath DirectionSkillButtonSelectProgressMatPath; // 0x260
		::Foundation::AssetPath SupportAttackBtnIconPath; // 0x270
		::Foundation::AssetPath RemielleSupportAttackBtnIconPath; // 0x280
		::Foundation::AssetPath ForbiddenAreaSwordBtnIconPath; // 0x290
		::Foundation::AssetPath GoldenBangbooCommonBtnIconPath; // 0x2A0
		::System::Single HudDynamicOffsetYSpeed; // 0x2B0
		::System::Single HudDynamicOffsetThresholdY; // 0x2B4
		::System::Single HudDynamicOffsetXSpeed; // 0x2B8
		::System::Single HudDynamicOffsetThresholdX; // 0x2BC
		::System::Single ShieldHudDynamicOffsetYSpeed; // 0x2C0
		::System::Single ShieldHudDynamicOffsetThresholdY; // 0x2C4
		::System::Single ShieldHudDynamicOffsetXSpeed; // 0x2C8
		::System::Single ShieldHudDynamicOffsetThresholdX; // 0x2CC
		::System::Int32 MalePhoneDelay; // 0x2D0
		::System::Int32 FemalePhoneDelay; // 0x2D4
		::MoleMole::ConfigMobileSetting* ConfigMobileSetting; // 0x2D8
		::MoleMole::ConfigWeakPanel* ConfigWeakPanel; // 0x2E0
		::Foundation::AssetPath HitBackAttackCommonBtnIconPath; // 0x2E8
		::System::String* HitBackAttackCommonBtnReadyMaterialPath; // 0x2F8
		::System::String* HitBackAttackCommonBtnCoolDownMaterialPath; // 0x300
		::MoleMole::ConfigSummerMainPageGyro* ConfigSummerMainPageGyro; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE__CTOR_OFFSET))(this);
		}
	};
}
