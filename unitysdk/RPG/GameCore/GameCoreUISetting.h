#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionBarStyleSizeSetting; }
namespace RPG::GameCore { class DamageTextPoolMaxSizeOfGraphicsQuality; }
namespace RPG::GameCore { class ElationLevelSetting; }
namespace RPG::GameCore { class HighlightOutlineSetting; }
namespace RPG::GameCore { class ModifierDestroyTextInfo; }
namespace RPG::GameCore { class MonsterEnergyBarNumColorSetting; }
namespace RPG::GameCore { class PluralityHPBarSetting; }
namespace RPG::GameCore { class PluralityStanceBarSetting; }
namespace RPG::GameCore { class RedModeStanceBarSetting; }
namespace RPG::GameCore { class UIPanelGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GAMECOREUISETTING_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B995AC0)
#define RPG_GAMECORE_GAMECOREUISETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A10F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreUISetting_TypeDefinitionIndex = 16456;

	class GameCoreUISetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID TauntBattleMessageTextmapID; // 0x10
		::System::String* TauntBattleMessageIcon; // 0x20
		::System::Single TauntBattleMessageTime; // 0x28
		::System::String* InvalidSkillTargetBattleMessageIcon; // 0x30
		::System::Single SkillButtonTime; // 0x38
		::Il2CppArray<::System::String*>* ItemRarityColorStr; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TextID>* EffectMessageTypeToTextID; // 0x48
		::System::Single SkillButtonGapTime; // 0x50
		::System::Single MobileSkillButtonGapTime; // 0x54
		::System::Single ButtonClickTime; // 0x58
		::System::Single MobileButtonClickTime; // 0x5C
		::System::Single ButtonHoldTime; // 0x60
		::System::Single MobileButtonHoldTime; // 0x64
		::System::Single ButtonHoldTimeForMonster; // 0x68
		::System::Single ButtonHoldDistanceThreshold; // 0x6C
		::System::Single ButtonHoldHintScale; // 0x70
		::System::Single MobileButtonHoldHintScale; // 0x74
		::System::Single DamageTextInterval; // 0x78
		::System::Single PropertyAdsorptions; // 0x7C
		::RPG::MVector3 DamageTextOffset; // 0x80
		::System::Single DamageTextDitherRangeX; // 0x8C
		::System::Single DamageTextDitherRangeY; // 0x90
		::System::String* BattleEventEntityHeadIcon; // 0x98
		::System::String* AllyOutlineAnimPath; // 0xA0
		::System::String* EnemyOutlineAnimPath; // 0xA8
		::System::String* AllySubOutlineAnimPath; // 0xB0
		::System::String* EnemySubOutlineAnimPath; // 0xB8
		::System::String* AllyOutlineLoopAnimPath; // 0xC0
		::System::String* EnemyOutlineLoopAnimPath; // 0xC8
		::RPG::GameCore::HighlightOutlineSetting* LightSubOutlineSetting; // 0xD0
		::RPG::GameCore::HighlightOutlineSetting* DarkSubOutlineSetting; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TextID>* AbilityPropertyToTextID; // 0xE0
		::RPG::Client::TextID SkillButtonStunTextID; // 0xE8
		::RPG::Client::TextID SkillButtonSilenceTextID; // 0xF8
		::RPG::Client::TextID SkillButtonBPNotEnoughTextID; // 0x108
		::RPG::Client::TextID SkillButtonSPNotEnoughTextID; // 0x118
		::RPG::Client::TextID SkillButtonNoTargetTextID; // 0x128
		::RPG::Client::TextID SkillButtonDisableTextID; // 0x138
		::RPG::Client::TextID SkillButtonAssistSkillNotEnoughEnergyTextID; // 0x148
		::RPG::MVector3 SkillInfoOffset01; // 0x158
		::RPG::MVector3 SkillInfoOffset02; // 0x164
		::RPG::MVector3 SkillInfoOffset03; // 0x170
		::RPG::MVector3 SkillInfoOffset04; // 0x17C
		::RPG::MVector3 SkillInfoOffset05; // 0x188
		::RPG::MVector3 SkillInfoOffset06; // 0x194
		::RPG::MVector3 TeamSkillInfoOffset01; // 0x1A0
		::RPG::MVector3 TeamSkillInfoOffset02; // 0x1AC
		::RPG::MVector3 TeamSkillInfoOffset03; // 0x1B8
		::RPG::MVector3 TeamSkillInfoOffset04; // 0x1C4
		::RPG::MVector3 ColossusSkillInfoOffset; // 0x1D0
		::RPG::MVector3 CharacterHUDOffsetDefault; // 0x1DC
		::System::Single JoystickWalkRange; // 0x1E8
		::System::Single PlayerFootprintSpawnInterval; // 0x1EC
		::System::Single PlayerFootprintLifetime; // 0x1F0
		::System::String* PlayerFootprintPath; // 0x1F8
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TextID, ::System::String*>* SkillTypeColor; // 0x200
		::System::Single HPBarCameraOffsetYFar; // 0x208
		::System::Single HPBarCameraOffsetYNear; // 0x20C
		::System::Single HPBarCameraDistanceMax; // 0x210
		::System::Single HPBarCameraDistanceMin; // 0x214
		::System::Single ShowBuffGapTime; // 0x218
		::System::Single ShowBuffDamageTextGapTime; // 0x21C
		::System::Boolean CheckUIFollow3DTargetVisibility; // 0x220
		::System::Single DelayTextShowDuration; // 0x224
		::System::String* MinimapMapCirclePrefabPath; // 0x228
		::System::String* MinimapMapBackgroundPrefabPath; // 0x230
		::System::String* MinimapMapTraceMissionEffectPath; // 0x238
		::System::Single AnchorWaypointHeight; // 0x240
		::System::String* WaypointTargetAttachPoint; // 0x248
		::System::Single WaypointAttachPointOffset; // 0x250
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* AttackDamageTypeToEnergyBarDot; // 0x258
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* AttackDamageTypeToSummonerEnergyBarDot; // 0x260
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* AttackDamageTypeToUltraFrameColor; // 0x268
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* AttackDamageTypeToEnhancePrefab; // 0x270
		::RPG::GameCore::ActionBarStyleSizeSetting* ActionBarStyleSize; // 0x278
		::System::Single ActionBarHorizontalSpace; // 0x280
		::System::Single ActionBarVerticalSpace; // 0x284
		::RPG::MVector2 TargetPreviewSize; // 0x288
		::System::Single TargetPreviewMoveTimeLength; // 0x290
		::System::Single HpRedRatio; // 0x294
		::System::Single DotDamageOutline1Width; // 0x298
		::System::String* HPHurtColor; // 0x2A0
		::System::String* HPHealColor; // 0x2A8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::RPG::Client::TextID>* DispelStatusTypeToTextID; // 0x2B0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::RPG::Client::TextID>* ResistStatusTypeToTextID; // 0x2B8
		::RPG::GameCore::RedModeStanceBarSetting* RedModeStanceBarSetting; // 0x2C0
		::RPG::GameCore::PluralityStanceBarSetting* PluralityStanceBarSetting; // 0x2C8
		::RPG::GameCore::PluralityHPBarSetting* PluralityHPBarSetting; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* AttackDamageTypeToEnergyBarColor; // 0x2D8
		::Il2CppArray<::RPG::GameCore::ModifierDestroyTextInfo*>* ModifierDestroyTextID; // 0x2E0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::UIPanelGroup*>* UIPanelGroups; // 0x2E8
		::System::Single HPRefreshMaxInterval; // 0x2F0
		::Il2CppArray<::RPG::GameCore::StageType>* GlobalBuffBtnStageTypeBlackList; // 0x2F8
		::RPG::GameCore::MonsterEnergyBarNumColorSetting* MonsterEnergyBarNumColorSetting; // 0x300
		::System::UInt32 MaxShowBPCount; // 0x308
		::RPG::GameCore::DamageTextPoolMaxSizeOfGraphicsQuality* DamageTextPoolMaxSize; // 0x310
		::RPG::GameCore::ElationLevelSetting* ElationLevelSetting; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOREUISETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameCoreUISetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameCoreUISetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECOREUISETTING_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
