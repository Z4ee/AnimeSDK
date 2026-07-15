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

class Class_1_1C30CE192ABE4C54;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class CharacterCameraConfig; }
namespace RPG::GameCore { class CharacterEmoContextConfig; }
namespace RPG::GameCore { class CharacterEntityColliderConfig; }
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class CharacterPhaseConfig; }
namespace RPG::GameCore { class CharacterUIConfig; }
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHARACTERCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B71E760)
#define RPG_GAMECORE_CHARACTERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B71DF70)
#define RPG_GAMECORE_CHARACTERCONFIG_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1B722390)
#define RPG_GAMECORE_CHARACTERCONFIG_GETEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1B722250)
#define RPG_GAMECORE_CHARACTERCONFIG_GETEFFECTATTACHPOINTREDIRECT_OFFSET UNITYSDK_OFFSET(0x1B7224D0)
#define RPG_GAMECORE_CHARACTERCONFIG_GETSKILLINDEXBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x1B722150)
#define RPG_GAMECORE_CHARACTERCONFIG_TRYAPPLYPATH_OFFSET UNITYSDK_OFFSET(0x1B7225C0)
#define RPG_GAMECORE_CHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71E670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterConfig_TypeDefinitionIndex = 15868;

	class CharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsHero; // 0x10
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x14
		::RPG::GameCore::BodySize CharacterBodySize; // 0x18
		::RPG::MVector3 CharacterHUDOffset; // 0x1C
		::System::String* CustomHUDAttachPointName; // 0x28
		::RPG::MVector3 BuffPanelOffset; // 0x30
		::RPG::MVector3 HitBoxOffset; // 0x3C
		::System::Int32 TargetSelectGroup; // 0x48
		::Il2CppArray<::RPG::GameCore::CharacterCameraConfig*>* CameraConfigList; // 0x50
		::RPG::GameCore::CharacterCollisionType HitBoxType; // 0x58
		::System::Single HitBoxWidth; // 0x5C
		::System::Single HitBoxLength; // 0x60
		::System::Single HitBoxHeight; // 0x64
		::System::String* HitBoxAttachPoint; // 0x68
		::RPG::GameCore::ResilienceEnum Resilience; // 0x70
		::RPG::GameCore::LocationConfig* Location; // 0x78
		::System::Single VisualRadius; // 0x80
		::System::Single LookAtIKEnableRadius; // 0x84
		::System::Boolean AutoFlipModel; // 0x88
		::System::Boolean SaveModelWhenDead; // 0x89
		::System::Boolean DeadPerform; // 0x8A
		::System::Boolean PreloadUltraSkill; // 0x8B
		::RPG::GameCore::BoolEx IsSpecialVisualCharacter; // 0x8C
		::System::Boolean HideInTimeline; // 0x90
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x98
		::Il2CppArray<::RPG::GameCore::SkillConfig*>* SkillList; // 0xA0
		::Il2CppArray<::System::String*>* AbilityList; // 0xA8
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* SkillAbilityList; // 0xB0
		::Class_1_1C30CE192ABE4C54* DynamicValues; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* CustomValues; // 0xC8
		::RPG::GameCore::WeaponTypeEnum WeaponType; // 0xD0
		::RPG::GameCore::ArmorTypeEnum ArmorType; // 0xD4
		::Il2CppArray<::RPG::GameCore::SkillTransitAnimConfig*>* SkillReadyTransits; // 0xD8
		::RPG::GameCore::CharacterPhaseAnimConfig* PhaseAnimConfig; // 0xE0
		::System::String* AnimZoneConfigPath; // 0xE8
		::System::String* InitAnimStateName; // 0xF0
		::Il2CppArray<::System::String*>* WhitelistSkillStateForInterrupt; // 0xF8
		::System::Single ModifierPerformTimeFactor; // 0x100
		::RPG::GameCore::TaskConfig* AsAidAttackTask; // 0x108
		::RPG::GameCore::TaskConfig* AsAidDefenderTask; // 0x110
		::RPG::GameCore::TaskConfig* AsAidProtectorTask; // 0x118
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x120
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EHitDirectionType, ::RPG::GameCore::EFootIKMode>* OnHitEditFootIKModeMap; // 0x128
		::System::Single RepeatOccurAnimWhenBeHitNormalizedTime; // 0x130
		::System::String* CameraNamedDynamicOffset; // 0x138
		::System::Boolean IgnoreDynamicOffsetBySelf; // 0x140
		::System::Single OverrideHeightForCameraOffset; // 0x144
		::System::Boolean MonsterIgnoreGlobalDymanicOffset; // 0x148
		::System::UInt32 MaxMonsterPhase; // 0x14C
		::Il2CppArray<::RPG::GameCore::CharacterPhaseConfig*>* PhaseList; // 0x150
		::System::String* OverrideWaveMonsterPerform; // 0x158
		::System::String* OverrideColliderCameraByName; // 0x160
		::System::String* OverrideColliderCameraByNameOnLeave; // 0x168
		::RPG::GameCore::CharacterEntityColliderConfig* EntityColliderConfig; // 0x170
		::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* EffectAdaptionList; // 0x178
		::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>* AttachPointEffectAdaptionList; // 0x180
		::System::String* FieldEffectAdaptionTemplateName; // 0x188
		::Il2CppArray<::RPG::GameCore::FieldEffectAdaptionConfig*>* FieldEffectAdaptionList; // 0x190
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EffectAttachPointRedirect; // 0x198
		::RPG::GameCore::MonsterConfig* MonsterConfig; // 0x1A0
		::System::String* ElationConfigPath; // 0x1A8
		::System::String* ResidentEffectKey; // 0x1B0
		::System::String* ResidentPossessionKey; // 0x1B8
		::System::String* EmotionCharacterID; // 0x1C0
		::System::String* GraphEmotionAsset; // 0x1C8
		::System::String* CharacterReplaceMaterialConfigPath; // 0x1D0
		::Class_1_1C30CE192ABE4C54* AITagList; // 0x1D8
		::RPG::GameCore::CharacterEmoContextConfig* ReplaceEmoConfig; // 0x1E0
		::System::Boolean WillUnstage; // 0x1E8
		::System::UInt32 ViewModeSortPriority; // 0x1EC
		::System::UInt32 ViewModeExtraEffectID; // 0x1F0
		::System::String* ReplaceAnimtorControllerPath; // 0x1F8
		::RPG::GameCore::BoolEx CastShadow; // 0x200
		::System::Boolean AlwaysCutOnSkillTargetTeamChange; // 0x204
		::System::Boolean IsPuppetCharacter; // 0x205
		::System::Boolean UseSummonerStencil; // 0x206
		::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>* CustomTeamFormationConfigs; // 0x208
		::RPG::GameCore::CharacterUIConfig* UIConfig; // 0x210
		::System::Collections::Generic::List_1<::System::String*>* ApplyDLCPaths; // 0x218

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

		::System::Int32 GetSkillIndexByTriggerKey(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_GETSKILLINDEXBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::RPG::GameCore::EffectAdaptionConfig* GetEffectAdaptionConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::EffectAdaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_GETEFFECTADAPTIONCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttachPointEffectAdaptionConfig* GetAttachPointEffectAdaptionConfig(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::AttachPointEffectAdaptionConfig*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET))(this, a1, a2);
		}

		::System::String* GetEffectAttachPointRedirect(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_GETEFFECTATTACHPOINTREDIRECT_OFFSET))(this, a1);
		}

		::System::Boolean TryApplyPath(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCONFIG_TRYAPPLYPATH_OFFSET))(this, a1);
		}
	};
}
