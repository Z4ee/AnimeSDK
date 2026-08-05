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

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54C6D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformMisc_TypeDefinitionIndex = 63744;

	class ConfigGachaPerformMisc : public ::System::Object
	{
	public:
		::System::String* UITextMoveCurve; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* StageRotateScreenEffects; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_PlatformHeight, ::System::Single>* PlatformHeights; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* WeaponTriggerAnimDelayOffsets; // 0x28
		::System::String* WeaponLightColorIntensityCurve; // 0x30
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>* TvRarityEffAnimShowOffset; // 0x38
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>* TvRarityEffAnimations; // 0x40
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::UnityEngine::Color>* ItemLightColors; // 0x48
		::UnityEngine::AnimationCurve* ActivateAnimCurve; // 0x50
		::System::String* UITextTwinkleCurve; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>* TvRarityEffShowOffset; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::WeaponEuler>* WeaponEulers; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* PersistentScreenEffects; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* RaritySScreenEffects_ItemStage; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceSummon>*>* Summons; // 0x80
		::System::String* BangbooCamShakeKey; // 0x88
		::MoleMole::Config::ConfigHollowCameraShake* WeaponShakeConfig; // 0x90
		::MoleMole::Config::ConfigEntityGaussianBlurEffect* GaussianBlurResetParams; // 0x98
		::System::String* GachaRewardWindowEffect; // 0xA0
		::System::String* CamRarityEff_Common; // 0xA8
		::System::String* CamRotAxisYCurve_HalfCircle; // 0xB0
		::System::String* WeaponCamShakeKey; // 0xB8
		::System::String* SpeedUpCurve; // 0xC0
		::System::String* TvCommonEffAnim_ItemStage; // 0xC8
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* RaritySScreenEffects; // 0xD0
		::System::String* NonGachaFadeInBlackCurtainCurve; // 0xD8
		::System::String* BlackCurtainCurve; // 0xE0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::MoleMole::Config::ConfigColor>* UITextColors; // 0xE8
		::System::String* CamRotAxisYCurve_Circle; // 0xF0
		::System::String* UITextIntensityCurve; // 0xF8
		::System::String* NonGachaCamFovCurve; // 0x100
		::System::String* CamShakeKey; // 0x108
		::System::String* UITextFadeInCurve; // 0x110
		::System::String* CamRarityEff_Openning; // 0x118
		::System::String* CamEff_Rotate; // 0x120
		::System::String* CamRarityEff_ItemStage; // 0x128
		::System::String* WeaponRotCurve; // 0x130
		::System::Single WeaponLightColorIntensity; // 0x138
		::System::Single UITextSpeedUpScale; // 0x13C
		::System::Single BlackCurtainDuration; // 0x140
		::System::Single RolePoolBlackMaskTime; // 0x144
		::System::Single BangbooScale; // 0x148
		::UnityEngine::Vector3 WeaponInitEuler; // 0x14C
		::System::Single NonGachaFovDuration; // 0x158
		::System::Single WeaponFloatingDelay; // 0x15C
		::System::Single WeaponLightColorIntensityDuration; // 0x160
		::System::Single NonGachaRarityScreenEffTLStartOffset; // 0x164
		::System::Single CommonWeaponTriggerAnimDelayOffset; // 0x168
		::System::Single UITextMoveThinkInterval; // 0x16C
		::System::Single UITextTwinkleDuration; // 0x170
		::System::Single TvShowInterval; // 0x174
		::System::Single WeaponAngleFloatingStrength; // 0x178
		::System::Single WeaponPosY; // 0x17C
		::System::Single ShowGachaRewardWindowEffectDelay; // 0x180
		::System::Single WeaponScale; // 0x184
		::System::Single AvatarTextshotTLDelay; // 0x188
		::System::Single WeaponAnglePerlinScale; // 0x18C
		::System::Single First4ShotsProtectTime; // 0x190
		::System::Single ShowConfirmBtnDelay; // 0x194
		::System::Single AnimationKeyDelay_HalfCircle; // 0x198
		::System::Single RaritySScreenEffectsOffset; // 0x19C
		::UnityEngine::Vector3 WeaponStayEuler; // 0x1A0
		::System::Single SkipAllSRarityStartRotTimeOffset; // 0x1AC
		::System::Single UITextMoveDistance2; // 0x1B0
		::System::Single CamRotAxisYDuartion_HalfCircle; // 0x1B4
		::System::Single NonGachaFadeInBlackCurtainDuration; // 0x1B8
		::System::Single UITextMoveDistance3; // 0x1BC
		::System::Single UITextIntensityDuration; // 0x1C0
		::System::Single NonGachaCamFromFov; // 0x1C4
		::System::Single UITextMoveDuration; // 0x1C8
		::System::Single WeaponAngleFloatingDelay; // 0x1CC
		::System::Int32 GachaPerformTemplateID; // 0x1D0
		::System::Single CamEff_Rotate_Delay_Circle; // 0x1D4
		::System::Single RewardItemPlaySoundDelay; // 0x1D8
		::System::Single AvatarAnimationPlayOffset; // 0x1DC
		::System::Single GaussianBlurTilling; // 0x1E0
		::System::Single NextItemProtectTime; // 0x1E4
		::System::Single WeaponRotDuration; // 0x1E8
		::System::Single AnimationKeyDelay_Circle; // 0x1EC
		::System::Single ShowRewardInterval; // 0x1F0
		::System::Single DelayShowRewardsTime; // 0x1F4
		::System::Single OpenningFirst3TvInterval; // 0x1F8
		::System::Single UITextMoveDistance1; // 0x1FC
		::System::Single CamRotAxisYDuartion_Circle; // 0x200
		::System::Boolean MainLightsUseCutscene; // 0x204
		::System::Boolean ClockwiseRot; // 0x205
		::System::Single NonGachaAnimationKeyDelay; // 0x208
		::System::Single ActivateAnimInterval; // 0x20C
		::System::Single NonGachaCamToFov; // 0x210
		::System::Single WeaponPerlinScale; // 0x214
		::System::Single SkipAllDelay; // 0x218
		::System::Single WeaponFloatingStrength; // 0x21C
		::System::Single CamEff_Rotate_Delay_HalfCircle; // 0x220
		::System::Single OpenningDelayEnd; // 0x224

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMMISC__CTOR_OFFSET))(this);
		}
	};
}
