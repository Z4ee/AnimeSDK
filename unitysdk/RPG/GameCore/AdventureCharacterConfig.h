#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterMouthTalkType.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/RPG/GameCore/EAdvCharacterBreakRecoverStandByType.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AdventureAIConfig; }
namespace RPG::GameCore { class AdventureAIControllerConfig; }
namespace RPG::GameCore { class AdventureCharacterFootIKConfig; }
namespace RPG::GameCore { class AdventureCharacterIdleShowConfig; }
namespace RPG::GameCore { class AdventureSkillConfig; }
namespace RPG::GameCore { class AttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class EditorReplaceMaterialScheme; }
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class NPCMonsterHintSoundConfig; }
namespace RPG::GameCore { class NPCSoundConfig; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18673590)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18675580)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_GETEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18675410)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_GETEFFECTATTACHPOINTREDIRECT_OFFSET UNITYSDK_OFFSET(0x18675590)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERAICONFIG_GET_ADVAICONFIG_OFFSET UNITYSDK_OFFSET(0x18675640)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERAICONFIG_GET_AICONFIGOVERRIDELIST_OFFSET UNITYSDK_OFFSET(0x18675630)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_ANIMZONECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x186757B0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_BREAKRECOVERSTANDBYTYPE_OFFSET UNITYSDK_OFFSET(0x186757C0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_COMMONANIMZONECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x186757A0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_ENABLEFOOTIK_OFFSET UNITYSDK_OFFSET(0x18675710)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_ENABLEIDLESHOW_OFFSET UNITYSDK_OFFSET(0x18675720)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_FASTRUNSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x186756C0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_FOOTSCALE_OFFSET UNITYSDK_OFFSET(0x18675650)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_IDLESHOWCONFIG_OFFSET UNITYSDK_OFFSET(0x18675730)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_MAXFASTRUNANIMSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x186756D0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_MAXRUNANIMSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x186756B0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_MAXWALKANIMSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x186756A0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_OVERRIDEMOVEMENTSTEPTOGROUNDCURVENAME_OFFSET UNITYSDK_OFFSET(0x18675790)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_REFERENCEFASTRUNSPEED_OFFSET UNITYSDK_OFFSET(0x18675700)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_REFERENCERUNSPEED_OFFSET UNITYSDK_OFFSET(0x186756F0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_REFERENCEWALKSPEED_OFFSET UNITYSDK_OFFSET(0x186756E0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_ROOTMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x18675690)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_RUNSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x18675680)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_WALKSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x18675670)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_ADVENTURESOMATOTYPE_OFFSET UNITYSDK_OFFSET(0x186757D0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNBACKTURNSPEED_OFFSET UNITYSDK_OFFSET(0x18675810)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNSPEED_OFFSET UNITYSDK_OFFSET(0x18675800)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNBACKTURNSPEED_OFFSET UNITYSDK_OFFSET(0x186757F0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNSPEED_OFFSET UNITYSDK_OFFSET(0x186757E0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_USENAVJUMPLAYER_OFFSET UNITYSDK_OFFSET(0x18675820)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_ABILITYLIST_OFFSET UNITYSDK_OFFSET(0x18675860)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLABILITYLIST_OFFSET UNITYSDK_OFFSET(0x18675850)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLLIST_OFFSET UNITYSDK_OFFSET(0x18675840)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_USETYPEAHEADSKILLINPUT_OFFSET UNITYSDK_OFFSET(0x18675830)
#define RPG_GAMECORE_ADVENTURECHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18675040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterConfig_TypeDefinitionIndex = 16542;

	class AdventureCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsHero; // 0x10
		::RPG::MVector3 FootScale; // 0x14
		::System::Single WalkSpeedRatio; // 0x20
		::System::Single RunSpeedRatio; // 0x24
		::System::Single FastRunSpeedRatio; // 0x28
		::System::Single RootMotionScale; // 0x2C
		::System::Single MaxWalkAnimSpeedRatio; // 0x30
		::System::Single MaxRunAnimSpeedRatio; // 0x34
		::System::Single MaxFastRunAnimSpeedRatio; // 0x38
		::System::Single ReferenceWalkSpeed; // 0x3C
		::System::Single ReferenceRunSpeed; // 0x40
		::System::Single ReferenceFastRunSpeed; // 0x44
		::RPG::GameCore::BodySize CharacterBodySize; // 0x48
		::RPG::GameCore::NPCBodySize NpcBodySize; // 0x4C
		::System::Single NavTurnSpeed; // 0x50
		::System::Single NavTurnBackTurnSpeed; // 0x54
		::System::Single NavMovingSteerTurnSpeed; // 0x58
		::System::Single NavMovingSteerTurnBackTurnSpeed; // 0x5C
		::System::String* ShoesType; // 0x60
		::System::String* FreeStyleCharacterID; // 0x68
		::System::String* FreeStyleCharacterConfigPath; // 0x70
		::System::Single LockUIDistanceOffset; // 0x78
		::System::Single LockTargetDistance; // 0x7C
		::System::Single MazeSkillDistance; // 0x80
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x88
		::Il2CppArray<::System::String*>* AnimEventConfigListInPerformance; // 0x90
		::System::String* CommonAnimZoneConfigPath; // 0x98
		::System::String* AnimZoneConfigPath; // 0xA0
		::System::String* LookAtPhoneStartConfigPath; // 0xA8
		::System::String* LookAtPhoneEndConfigPath; // 0xB0
		::System::String* PhonePrefabPath; // 0xB8
		::Il2CppArray<::RPG::GameCore::AdventureSkillConfig*>* SkillList; // 0xC0
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* SkillAbilityList; // 0xC8
		::Il2CppArray<::System::String*>* AbilityList; // 0xD0
		::RPG::GameCore::NPCSoundConfig* NPCSound; // 0xD8
		::RPG::GameCore::NPCMonsterHintSoundConfig* NPCMonsterHintSound; // 0xE0
		::Class_1_2CAAA2FDF9170110* DynamicValues; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0xF0
		::System::Boolean BeHitRotate; // 0xF8
		::System::Boolean EnableFootIK; // 0xF9
		::RPG::GameCore::AdventureCharacterFootIKConfig* FootIKConfig; // 0x100
		::System::Boolean EnableMonsterLookAtIK; // 0x108
		::System::Boolean EnableIdleShow; // 0x109
		::RPG::GameCore::AdventureCharacterIdleShowConfig* IdleShowConfig; // 0x110
		::System::Single ModelScale; // 0x118
		::RPG::MVector3 ModelEffectScale; // 0x11C
		::System::Single ColliderScale; // 0x128
		::System::Single DieDelay; // 0x12C
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x130
		::RPG::GameCore::CharacterAdventureSomatoType AdventureSomatoType; // 0x138
		::System::Boolean UseDefaultSteerMode; // 0x13C
		::RPG::GameCore::AdventureCharacterMouthTalkType MouthTalkType; // 0x140
		::Il2CppArray<::System::String*>* HideWeaponList; // 0x148
		::Il2CppArray<::RPG::GameCore::AIVariable*>* AIConfigOverrideList; // 0x150
		::System::String* TalkEmotionAssetPath; // 0x158
		::RPG::GameCore::AdventureAIConfig* AdvAIConfig; // 0x160
		::RPG::GameCore::AdventureAIControllerConfig* AdvAIControllerConfig; // 0x168
		::Il2CppArray<::RPG::GameCore::AdventureModifierBehaviorFlag>* ImmuneBehaviorFlags; // 0x170
		::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* EffectAdaptionList; // 0x178
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EffectAttachPointRedirect; // 0x180
		::System::String* ResidentEffectKey; // 0x188
		::System::String* ResidentPossessionKey; // 0x190
		::RPG::GameCore::EAdvCharacterBreakRecoverStandByType BreakRecoverStandByType; // 0x198
		::System::String* EmotionCharacterID; // 0x1A0
		::System::String* AtlasFaceSetKey; // 0x1A8
		::System::String* CharacterReplaceMaterialConfigPath; // 0x1B0
		::Il2CppArray<::System::String*>* ReplaceMaterialKeyList; // 0x1B8
		::Il2CppArray<::RPG::GameCore::EditorReplaceMaterialScheme*>* EditorReplaceMaterialKeyList; // 0x1C0
		::Il2CppArray<::RPG::GameCore::EntityTag>* Tag; // 0x1C8
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* ButtonConfigs; // 0x1D0
		::System::Boolean UseTypeAheadSkillInput; // 0x1D8
		::RPG::GameCore::TriggerValidGuestConfig* TriggerValidGuest; // 0x1E0
		::System::Boolean ForceMoveRaycastLocalPlayer; // 0x1E8
		::System::Boolean ForbidNavigationMoveDeltaPositionConstraint; // 0x1E9
		::System::Single MoveDeltaPositionOtherDirectionConstraint; // 0x1EC
		::System::Boolean UseNavJumpLayer; // 0x1F0
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0x1F8
		::System::Boolean NoShadowCaster; // 0x200
		::System::Boolean HitBoxFollowRootPoint; // 0x201

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AdventureCharacterConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		::RPG::GameCore::EffectAdaptionConfig* GetEffectAdaptionConfig(::System::String* effectPath)
		{
			return ((::RPG::GameCore::EffectAdaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_GETEFFECTADAPTIONCONFIG_OFFSET))(this, effectPath);
		}

		::RPG::GameCore::AttachPointEffectAdaptionConfig* GetAttachPointEffectAdaptionConfig(::System::String* effectPath, ::System::String* attachPointName)
		{
			return ((::RPG::GameCore::AttachPointEffectAdaptionConfig*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET))(this, effectPath, attachPointName);
		}

		::System::String* GetEffectAttachPointRedirect(::System::String* attachPointName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_GETEFFECTATTACHPOINTREDIRECT_OFFSET))(this, attachPointName);
		}

		::Il2CppArray<::RPG::GameCore::AIVariable*>* RPG_GameCore_IAdventureCharacterAIConfig_get_AIConfigOverrideList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AIVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERAICONFIG_GET_AICONFIGOVERRIDELIST_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAIConfig* RPG_GameCore_IAdventureCharacterAIConfig_get_AdvAIConfig()
		{
			return ((::RPG::GameCore::AdventureAIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERAICONFIG_GET_ADVAICONFIG_OFFSET))(this);
		}

		::RPG::MVector3 RPG_GameCore_IAdventureCharacterAnimConfig_get_FootScale()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_FOOTSCALE_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_WalkSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_WALKSPEEDRATIO_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_RunSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_RUNSPEEDRATIO_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_RootMotionScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_ROOTMOTIONSCALE_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_MaxWalkAnimSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_MAXWALKANIMSPEEDRATIO_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_MaxRunAnimSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_MAXRUNANIMSPEEDRATIO_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_FastRunSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_FASTRUNSPEEDRATIO_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_MaxFastRunAnimSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_MAXFASTRUNANIMSPEEDRATIO_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_ReferenceWalkSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_REFERENCEWALKSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_ReferenceRunSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_REFERENCERUNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterAnimConfig_get_ReferenceFastRunSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_REFERENCEFASTRUNSPEED_OFFSET))(this);
		}

		::System::Boolean RPG_GameCore_IAdventureCharacterAnimConfig_get_EnableFootIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_ENABLEFOOTIK_OFFSET))(this);
		}

		::System::Boolean RPG_GameCore_IAdventureCharacterAnimConfig_get_EnableIdleShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_ENABLEIDLESHOW_OFFSET))(this);
		}

		::RPG::GameCore::AdventureCharacterIdleShowConfig* RPG_GameCore_IAdventureCharacterAnimConfig_get_IdleShowConfig()
		{
			return ((::RPG::GameCore::AdventureCharacterIdleShowConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_IDLESHOWCONFIG_OFFSET))(this);
		}

		::System::String* RPG_GameCore_IAdventureCharacterAnimConfig_get_OverrideMovementStepToGroundCurveName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_OVERRIDEMOVEMENTSTEPTOGROUNDCURVENAME_OFFSET))(this);
		}

		::System::String* RPG_GameCore_IAdventureCharacterAnimConfig_get_CommonAnimZoneConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_COMMONANIMZONECONFIGPATH_OFFSET))(this);
		}

		::System::String* RPG_GameCore_IAdventureCharacterAnimConfig_get_AnimZoneConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_ANIMZONECONFIGPATH_OFFSET))(this);
		}

		::RPG::GameCore::EAdvCharacterBreakRecoverStandByType RPG_GameCore_IAdventureCharacterAnimConfig_get_BreakRecoverStandByType()
		{
			return ((::RPG::GameCore::EAdvCharacterBreakRecoverStandByType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERANIMCONFIG_GET_BREAKRECOVERSTANDBYTYPE_OFFSET))(this);
		}

		::RPG::GameCore::CharacterAdventureSomatoType RPG_GameCore_IAdventureCharacterMoveConfig_get_AdventureSomatoType()
		{
			return ((::RPG::GameCore::CharacterAdventureSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_ADVENTURESOMATOTYPE_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavTurnBackTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNBACKTURNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavMovingSteerTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavMovingSteerTurnBackTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNBACKTURNSPEED_OFFSET))(this);
		}

		::System::Boolean RPG_GameCore_IAdventureCharacterMoveConfig_get_UseNavJumpLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_USENAVJUMPLAYER_OFFSET))(this);
		}

		::System::Boolean RPG_GameCore_IAdventureCharacterSkillConfig_get_UseTypeAheadSkillInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_USETYPEAHEADSKILLINPUT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AdventureSkillConfig*>* RPG_GameCore_IAdventureCharacterSkillConfig_get_SkillList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AdventureSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* RPG_GameCore_IAdventureCharacterSkillConfig_get_SkillAbilityList()
		{
			return ((::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLABILITYLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* RPG_GameCore_IAdventureCharacterSkillConfig_get_AbilityList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_ABILITYLIST_OFFSET))(this);
		}
	};
}
