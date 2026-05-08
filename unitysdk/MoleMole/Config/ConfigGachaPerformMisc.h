#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigColor.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_PlatformHeight.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceScreenEffect.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceSummon.h"
#include "unitysdk/MoleMole/Config/WeaponEuler.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x141F0E50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformMisc_TypeDefinitionIndex = 43325;

	class ConfigGachaPerformMisc : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::WeaponEuler>* WeaponEulers; // 0x10
		::MoleMole::Config::ConfigHollowCameraShake* WeaponShakeConfig; // 0x18
		::System::String* NonGachaCamFovCurve; // 0x20
		::System::String* UITextIntensityCurve; // 0x28
		::MoleMole::Config::ConfigEntityGaussianBlurEffect* GaussianBlurResetParams; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* RaritySScreenEffects; // 0x38
		::System::String* WeaponLightColorIntensityCurve; // 0x40
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::MoleMole::Config::ConfigColor>* UITextColors; // 0x48
		::UnityEngine::AnimationCurve* ActivateAnimCurve; // 0x50
		::System::String* BangbooCamShakeKey; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>* TvRarityEffAnimShowOffset; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceSummon>*>* Summons; // 0x68
		::System::String* WeaponRotCurve; // 0x70
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_PlatformHeight, ::System::Single>* PlatformHeights; // 0x78
		::System::String* CamRarityEff_Common; // 0x80
		::System::String* SpeedUpCurve; // 0x88
		::System::String* UITextTwinkleCurve; // 0x90
		::System::String* WeaponCamShakeKey; // 0x98
		::System::String* CamRotAxisYCurve_Circle; // 0xA0
		::System::String* CamRarityEff_Openning; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* RaritySScreenEffects_ItemStage; // 0xB0
		::System::String* CamRarityEff_ItemStage; // 0xB8
		::System::String* CamEff_Rotate; // 0xC0
		::System::String* NonGachaFadeInBlackCurtainCurve; // 0xC8
		::System::String* CamShakeKey; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* WeaponTriggerAnimDelayOffsets; // 0xD8
		::System::String* UITextMoveCurve; // 0xE0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>* TvRarityEffShowOffset; // 0xE8
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* PersistentScreenEffects; // 0xF0
		::System::String* CamRotAxisYCurve_HalfCircle; // 0xF8
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* StageRotateScreenEffects; // 0x100
		::System::String* TvCommonEffAnim_ItemStage; // 0x108
		::System::String* GachaRewardWindowEffect; // 0x110
		::System::String* UITextFadeInCurve; // 0x118
		::System::String* BlackCurtainCurve; // 0x120
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>* TvRarityEffAnimations; // 0x128
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::UnityEngine::Color>* ItemLightColors; // 0x130
		::System::Single CamEff_Rotate_Delay_Circle; // 0x138
		::System::Single AnimationKeyDelay_HalfCircle; // 0x13C
		::System::Single NonGachaFadeInBlackCurtainDuration; // 0x140
		::System::Single RaritySScreenEffectsOffset; // 0x144
		::System::Single ShowConfirmBtnDelay; // 0x148
		::System::Single NonGachaFovDuration; // 0x14C
		::System::Single RolePoolBlackMaskTime; // 0x150
		::System::Single BlackCurtainDuration; // 0x154
		::System::Single CamRotAxisYDuartion_Circle; // 0x158
		::System::Single SkipAllSRarityStartRotTimeOffset; // 0x15C
		::System::Single WeaponPerlinScale; // 0x160
		::System::Single AvatarTextshotTLDelay; // 0x164
		::System::Single WeaponFloatingStrength; // 0x168
		::System::Single ShowGachaRewardWindowEffectDelay; // 0x16C
		::System::Single WeaponLightColorIntensityDuration; // 0x170
		::System::Single WeaponRotDuration; // 0x174
		::System::Single UITextMoveThinkInterval; // 0x178
		::System::Single WeaponPosY; // 0x17C
		::System::Single NonGachaCamFromFov; // 0x180
		::System::Single WeaponLightColorIntensity; // 0x184
		::System::Single GaussianBlurTilling; // 0x188
		::System::Single DelayShowRewardsTime; // 0x18C
		::System::Single First4ShotsProtectTime; // 0x190
		::System::Single NonGachaAnimationKeyDelay; // 0x194
		::System::Single CamEff_Rotate_Delay_HalfCircle; // 0x198
		::System::Single WeaponAngleFloatingDelay; // 0x19C
		::System::Single ActivateAnimInterval; // 0x1A0
		::System::Single CommonWeaponTriggerAnimDelayOffset; // 0x1A4
		::System::Single UITextMoveDistance2; // 0x1A8
		::System::Single TvShowInterval; // 0x1AC
		::System::Single OpenningDelayEnd; // 0x1B0
		::System::Single NonGachaRarityScreenEffTLStartOffset; // 0x1B4
		::System::Single WeaponAngleFloatingStrength; // 0x1B8
		::UnityEngine::Vector3 WeaponStayEuler; // 0x1BC
		::System::Boolean MainLightsUseCutscene; // 0x1C8
		::System::Boolean ClockwiseRot; // 0x1C9
		::System::Single BangbooScale; // 0x1CC
		::System::Single CamRotAxisYDuartion_HalfCircle; // 0x1D0
		::System::Single UITextMoveDuration; // 0x1D4
		::System::Int32 GachaPerformTemplateID; // 0x1D8
		::System::Single WeaponFloatingDelay; // 0x1DC
		::System::Single SkipAllDelay; // 0x1E0
		::System::Single RewardItemPlaySoundDelay; // 0x1E4
		::System::Single ShowRewardInterval; // 0x1E8
		::System::Single UITextSpeedUpScale; // 0x1EC
		::System::Single UITextIntensityDuration; // 0x1F0
		::System::Single WeaponScale; // 0x1F4
		::UnityEngine::Vector3 WeaponInitEuler; // 0x1F8
		::System::Single WeaponAnglePerlinScale; // 0x204
		::System::Single AnimationKeyDelay_Circle; // 0x208
		::System::Single AvatarAnimationPlayOffset; // 0x20C
		::System::Single NextItemProtectTime; // 0x210
		::System::Single UITextMoveDistance3; // 0x214
		::System::Single OpenningFirst3TvInterval; // 0x218
		::System::Single UITextTwinkleDuration; // 0x21C
		::System::Single UITextMoveDistance1; // 0x220
		::System::Single NonGachaCamToFov; // 0x224

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMMISC__CTOR_OFFSET))(this);
		}
	};
}
