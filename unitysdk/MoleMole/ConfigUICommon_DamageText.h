#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6F714FF477D2D093.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/ConfigSpecialDamageText.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94E130)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_DamageText_TypeDefinitionIndex = 57552;

	class ConfigUICommon_DamageText : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single DamageTextPositionYOffset; // 0x58
		::UnityEngine::Vector2 DamageTextReferTargetXRange; // 0x5C
		::UnityEngine::Vector2 DamageTextReferTargetYRange; // 0x64
		::UnityEngine::AnimationCurve* RandomDamageTextRadiusCurve; // 0x70
		::UnityEngine::AnimationCurve* DamageTextLengthScaleCurve; // 0x78
		::System::String* SelfBeHitDamageFontMaterialPath; // 0x80
		::System::String* IneffectiveResistDamageFontMaterialPath; // 0x88
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>* DamageElementTypeFontMaterialPath; // 0x90
		::System::Boolean DamageTextFollowDampingEnabled; // 0x98
		::System::Single DamageTextFollowDampingSpeed; // 0x9C
		::Enum_3_6F714FF477D2D093 DamageTextTargetFollow; // 0xA0
		::UnityEngine::AnimationCurve* DamageTextScreenSpaceYOffsetCurve; // 0xA8
		::System::Single DamageTextCharWidthOffset; // 0xB0
		::System::Single DamageTextNormalScale; // 0xB4
		::System::Single DamageTextCriticalScale; // 0xB8
		::System::Single DamageTextSpecialScale; // 0xBC
		::System::Single DamageTextUniqueSkillScale; // 0xC0
		::System::Single DamageTextUniqueSkillBlinkInterval; // 0xC4
		::System::Single DamageTextUniqueSkillBlinkDuration; // 0xC8
		::System::Int32 DamageTextUniqueSkillBlinkTimes; // 0xCC
		::System::Single DamageTextNormalShowTime; // 0xD0
		::System::Single DamageTextCriticalShowTime; // 0xD4
		::System::Single DamageTextSpecialShowTime; // 0xD8
		::System::Single DamageTextUniqueSkillShowTime; // 0xDC
		::System::Single DamageTextFadeAnim02ShowTimeDelta; // 0xE0
		::System::Single DamageTextEffectiveShowTimeDelta; // 0xE4
		::UnityEngine::AnimationCurve* DamageTextCharacterFadeInIntervalCurve; // 0xE8
		::UnityEngine::AnimationCurve* DamageTextCharacterFadeOutIntervalCurve; // 0xF0
		::UnityEngine::AnimationCurve* DamageTextCharacterFadeIn02IntervalCurve; // 0xF8
		::UnityEngine::AnimationCurve* DamageTextCharacterFadeOut02IntervalCurve; // 0x100
		::System::Single DamageTextCharacterFadeInTime; // 0x108
		::System::Single DamageTextCharacterFadeOutTime; // 0x10C
		::System::Single DamageTextCharacterFadeIn02Time; // 0x110
		::System::Single DamageTextCharacterFadeOut02Time; // 0x114
		::System::Single SpecialDamageTextV3ScaleRatio; // 0x118
		::System::Single SpecialDamageTextV3ShowTime; // 0x11C
		::System::Single SpecialDamageTextV3Length; // 0x120
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::String*>* SpecialDamageTextV3AudioEventDict; // 0x128
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictEN; // 0x130
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictSC; // 0x138
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictTC; // 0x140
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictJP; // 0x148
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* SpecialDamageV3TextPathDictKR; // 0x150
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra*>* SpecialDamageTextExtraConfigs; // 0x158
		::System::Single SpecialDamageTextV2ScaleRatio; // 0x160
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>* SpecialDamageV2EffectAnimTimeDict; // 0x168
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>* SpecialDamageV2TextLengthDict; // 0x170
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>* DamageTextSpecialDamageConfigDict; // 0x178
		::System::Single AllowCombineDamageTextTime; // 0x180
		::System::Single CombineDamageTextRefreshCDTime; // 0x184
		::System::Single CombineDamageTextRadiusRatio; // 0x188
		::System::Single CombineDamageTextScale; // 0x18C
		::System::Single CombineDamageTextAddTime; // 0x190
		::UnityEngine::AnimationCurve* CombineDamageTextAddScaleCurve; // 0x198
		::System::Single CombineDamageTextExtraScreenOffsetY; // 0x1A0
		::System::Boolean EnableCombineDamageTextMiscReferTarget; // 0x1A4
		::UnityEngine::Vector2 CombineDamageTextMiscReferTargetXRange; // 0x1A8
		::UnityEngine::Vector2 CombineDamageTextMiscReferTargetYRange; // 0x1B0
		::System::Single CombineTextAnimV2FadeInIntervalTime; // 0x1B8
		::System::Single CombineTextAnimV2FadeOutIntervalTime; // 0x1BC
		::System::Single CombineTextAnimV2FadeIn02IntervalTime; // 0x1C0
		::System::Single CombineTextAnimV2FadeOut02IntervalTime; // 0x1C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT__CTOR_OFFSET))(this);
		}
	};
}
