#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArmorTypeEnum.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/EFootIKMode.h"
#include "unitysdk/RPG/GameCore/EHitDirectionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/WeaponTypeEnum.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class CharacterCameraConfig; }
namespace RPG::GameCore { class CharacterEmoContextConfig; }
namespace RPG::GameCore { class CharacterEntityColliderConfig; }
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class CharacterPhaseConfig; }
namespace RPG::GameCore { class CustomTeamFormationConfig; }
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class FieldEffectAdaptionConfig; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class MonsterConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillTransitAnimConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17067710)
#define RPG_GAMECORE_CHARACTERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17067350)
#define RPG_GAMECORE_CHARACTERCONFIG_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1706AFA0)
#define RPG_GAMECORE_CHARACTERCONFIG_GETEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1706AE30)
#define RPG_GAMECORE_CHARACTERCONFIG_GETEFFECTATTACHPOINTREDIRECT_OFFSET UNITYSDK_OFFSET(0x1706B0F0)
#define RPG_GAMECORE_CHARACTERCONFIG_GETSKILLINDEXBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x1706AD30)
#define RPG_GAMECORE_CHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17067610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterConfig_TypeDefinitionIndex = 15125;

	class CharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsHero; // 0x10
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x14
		::RPG::GameCore::BodySize CharacterBodySize; // 0x18
		::RPG::MVector3 CharacterHUDOffset; // 0x1C
		::RPG::MVector3 BuffPanelOffset; // 0x28
		::RPG::MVector3 HitBoxOffset; // 0x34
		::System::Int32 TargetSelectGroup; // 0x40
		::Il2CppArray<::RPG::GameCore::CharacterCameraConfig*>* CameraConfigList; // 0x48
		::RPG::GameCore::CharacterCollisionType HitBoxType; // 0x50
		::System::Single HitBoxWidth; // 0x54
		::System::Single HitBoxLength; // 0x58
		::System::Single HitBoxHeight; // 0x5C
		::System::String* HitBoxAttachPoint; // 0x60
		::RPG::GameCore::ResilienceEnum Resilience; // 0x68
		::RPG::GameCore::LocationConfig* Location; // 0x70
		::System::Single VisualRadius; // 0x78
		::System::Single LookAtIKEnableRadius; // 0x7C
		::System::Boolean AutoFlipModel; // 0x80
		::System::Boolean SaveModelWhenDead; // 0x81
		::System::Boolean DeadPerform; // 0x82
		::System::Boolean PreloadUltraSkill; // 0x83
		::RPG::GameCore::BoolEx IsSpecialVisualCharacter; // 0x84
		::System::Boolean HideInTimeline; // 0x88
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x90
		::Il2CppArray<::RPG::GameCore::SkillConfig*>* SkillList; // 0x98
		::Il2CppArray<::System::String*>* AbilityList; // 0xA0
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* SkillAbilityList; // 0xA8
		::Class_1_2CAAA2FDF9170110* DynamicValues; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* CustomValues; // 0xC0
		::RPG::GameCore::WeaponTypeEnum WeaponType; // 0xC8
		::RPG::GameCore::ArmorTypeEnum ArmorType; // 0xCC
		::Il2CppArray<::RPG::GameCore::SkillTransitAnimConfig*>* SkillReadyTransits; // 0xD0
		::RPG::GameCore::CharacterPhaseAnimConfig* PhaseAnimConfig; // 0xD8
		::System::String* AnimZoneConfigPath; // 0xE0
		::System::String* InitAnimStateName; // 0xE8
		::Il2CppArray<::System::String*>* WhitelistSkillStateForInterrupt; // 0xF0
		::System::Single ModifierPerformTimeFactor; // 0xF8
		::RPG::GameCore::TaskConfig* AsAidAttackTask; // 0x100
		::RPG::GameCore::TaskConfig* AsAidDefenderTask; // 0x108
		::RPG::GameCore::TaskConfig* AsAidProtectorTask; // 0x110
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x118
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EHitDirectionType, ::RPG::GameCore::EFootIKMode>* OnHitEditFootIKModeMap; // 0x120
		::System::Single RepeatOccurAnimWhenBeHitNormalizedTime; // 0x128
		::System::String* CameraNamedDynamicOffset; // 0x130
		::System::Boolean IgnoreDynamicOffsetBySelf; // 0x138
		::System::Single OverrideHeightForCameraOffset; // 0x13C
		::System::Boolean MonsterIgnoreGlobalDymanicOffset; // 0x140
		::System::UInt32 MaxMonsterPhase; // 0x144
		::Il2CppArray<::RPG::GameCore::CharacterPhaseConfig*>* PhaseList; // 0x148
		::System::String* OverrideWaveMonsterPerform; // 0x150
		::System::String* OverrideColliderCameraByName; // 0x158
		::System::String* OverrideColliderCameraByNameOnLeave; // 0x160
		::RPG::GameCore::CharacterEntityColliderConfig* EntityColliderConfig; // 0x168
		::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* EffectAdaptionList; // 0x170
		::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>* AttachPointEffectAdaptionList; // 0x178
		::Il2CppArray<::RPG::GameCore::FieldEffectAdaptionConfig*>* FieldEffectAdaptionList; // 0x180
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EffectAttachPointRedirect; // 0x188
		::RPG::GameCore::MonsterConfig* MonsterConfig; // 0x190
		::System::String* ElationConfigPath; // 0x198
		::System::String* ResidentEffectKey; // 0x1A0
		::System::String* ResidentPossessionKey; // 0x1A8
		::System::String* EmotionCharacterID; // 0x1B0
		::System::String* GraphEmotionAsset; // 0x1B8
		::System::String* CharacterReplaceMaterialConfigPath; // 0x1C0
		::Class_1_2CAAA2FDF9170110* AITagList; // 0x1C8
		::RPG::GameCore::CharacterEmoContextConfig* ReplaceEmoConfig; // 0x1D0
		::System::Boolean WillUnstage; // 0x1D8
		::System::UInt32 ViewModeSortPriority; // 0x1DC
		::System::UInt32 ViewModeExtraEffectID; // 0x1E0
		::System::String* ReplaceAnimtorControllerPath; // 0x1E8
		::RPG::GameCore::BoolEx CastShadow; // 0x1F0
		::System::Boolean AlwaysCutOnSkillTargetTeamChange; // 0x1F4
		::System::Boolean IsPuppetCharacter; // 0x1F5
		::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>* CustomTeamFormationConfigs; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CharacterConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CharacterConfig* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_FROMBINARYIMPL_OFFSET))(array, val);
		}

		::System::Int32 GetSkillIndexByTriggerKey(::System::String* sTriggerKey)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_GETSKILLINDEXBYTRIGGERKEY_OFFSET))(this, sTriggerKey);
		}

		::RPG::GameCore::EffectAdaptionConfig* GetEffectAdaptionConfig(::System::String* effectPath)
		{
			return ((::RPG::GameCore::EffectAdaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_GETEFFECTADAPTIONCONFIG_OFFSET))(this, effectPath);
		}

		::RPG::GameCore::AttachPointEffectAdaptionConfig* GetAttachPointEffectAdaptionConfig(::System::String* effectPath, ::System::String* attachPointName)
		{
			return ((::RPG::GameCore::AttachPointEffectAdaptionConfig*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET))(this, effectPath, attachPointName);
		}

		::System::String* GetEffectAttachPointRedirect(::System::String* attachPointName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_GETEFFECTATTACHPOINTREDIRECT_OFFSET))(this, attachPointName);
		}
	};
}
