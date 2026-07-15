#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ENpcLookAtMode.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/LevelNPCComplexity.h"
#include "unitysdk/RPG/GameCore/LevelNPCLodType.h"
#include "unitysdk/RPG/GameCore/LevelNPCOverrideBehaviorType.h"
#include "unitysdk/RPG/GameCore/LevelNPCUseAnimationType.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIConfigInfo; }
namespace RPG::GameCore { class AIVariableValueSource; }
namespace RPG::GameCore { class AdventureCharacterFloatingConfig; }
namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace RPG::GameCore { class LevelEntityHoyoTagContainerOverrideConfig; }
namespace RPG::GameCore { class LevelEntityReferenceInfo; }
namespace RPG::GameCore { class LevelEntityVCameraConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelLookAtPositionInfo; }
namespace RPG::GameCore { class LevelNPCModelPresetConfig; }
namespace RPG::GameCore { class LevelNPCNearbyAnimConfig; }
namespace RPG::GameCore { class LevelNPCNearbyConfig; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }
namespace RPG::GameCore { class LevelNPCOverrideBehaviorParameter; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class LevelNPCSpawnConfig; }
namespace RPG::GameCore { class LevelNpcLookAtTargetInfo; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class SOConfigInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B074890)
#define RPG_GAMECORE_LEVELNPCINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B074730)
#define RPG_GAMECORE_LEVELNPCINFO_GETSERIESID_OFFSET UNITYSDK_OFFSET(0x1B076750)
#define RPG_GAMECORE_LEVELNPCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0747F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCInfo_TypeDefinitionIndex = 16590;

	class LevelNPCInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::RPG::GameCore::LevelNPCComplexity Complexity; // 0x38
		::System::String* StillGradeAnimID; // 0x40
		::System::Boolean StillGradeStandOnGround; // 0x48
		::System::Single RotX; // 0x4C
		::System::Single RotZ; // 0x50
		::System::UInt32 NPCID; // 0x54
		::System::String* LevelGraph; // 0x58
		::System::Boolean LoadOnInitial; // 0x60
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0x68
		::System::UInt32 CampID; // 0x70
		::RPG::GameCore::LevelTriggerInfo* Trigger; // 0x78
		::RPG::GameCore::AIConfigInfo* AIConfig; // 0x80
		::RPG::GameCore::AIVariableValueSource* AIVariableSource; // 0x88
		::RPG::GameCore::SOConfigInfo* SOConfig; // 0x90
		::System::Boolean StaticNPC; // 0x98
		::RPG::GameCore::EntityLodTemplateName OverrideLodTemplate; // 0x9C
		::System::UInt32 DialogueTriggerAngle; // 0xA0
		::Il2CppArray<::System::UInt32>* DialogueGroups; // 0xA8
		::Il2CppArray<::System::UInt32>* ServerInteractVerificationIDList; // 0xB0
		::System::String* DefaultIdleStateName; // 0xB8
		::System::String* DefaultBlendShapeConfigName; // 0xC0
		::System::String* BoneEmotionName; // 0xC8
		::System::String* AtlasFaceSetKey; // 0xD0
		::System::Boolean IsOverrideAtlasEmotion; // 0xD8
		::RPG::GameCore::CharacterAtlasFaceEmotion* OverrideAtlasEmotion; // 0xE0
		::RPG::GameCore::ENpcLookAtMode DefaultLookAtMode; // 0xE8
		::RPG::GameCore::LevelNpcLookAtTargetInfo* DefaultLookAtTargetInfo; // 0xF0
		::RPG::GameCore::LevelLookAtPositionInfo* DefaultLookAtPositionInfo; // 0xF8
		::System::UInt32 MappingInfoID; // 0x100
		::System::UInt32 SubMapID; // 0x104
		::System::Boolean OverrideTriggerSound; // 0x108
		::System::Single SoundRange; // 0x10C
		::RPG::GameCore::LevelNPCLodType NPCLodType; // 0x110
		::RPG::GameCore::LevelNPCPossessionInfo* PossessionConfig; // 0x118
		::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* AdditivePossessionInfos; // 0x120
		::Il2CppArray<::System::Int32>* BoardShowList; // 0x128
		::RPG::Client::TextID OverrideNPCName; // 0x130
		::RPG::Client::TextID OverrideNPCTitle; // 0x140
		::System::UInt32 FirstDialogueGroupID; // 0x150
		::RPG::GameCore::TalkChosenType TalkChosenType; // 0x154
		::Il2CppArray<::System::UInt32>* TalkDialogGroupIDList; // 0x158
		::RPG::GameCore::LevelNPCUseAnimationType DefaultAnimationType; // 0x160
		::System::UInt32 DefaultIdleFreeStyleMotionID; // 0x164
		::System::String* FreeStyleAnimGraphName; // 0x168
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* AdditiveResidentEffect; // 0x170
		::System::UInt32 OverrideSeriesID; // 0x178
		::System::Boolean IsMapContent; // 0x17C
		::System::UInt32 MiniMapIconType; // 0x180
		::System::Boolean IsNeedFade; // 0x184
		::System::Boolean IsInitialHidden; // 0x185
		::Il2CppArray<::System::String*>* InitialHiddenNodeList; // 0x188
		::RPG::GameCore::LevelDialogInfo* Dialog; // 0x190
		::RPG::GameCore::JsonEnum* InteractIconType; // 0x198
		::System::Boolean DialogueTriggerSkipFakeAvatar; // 0x1A0
		::RPG::GameCore::LevelNPCOverrideBehaviorType OverrideBehaviorType; // 0x1A4
		::RPG::GameCore::LevelNPCOverrideBehaviorParameter* OverrideBehaviorParameter; // 0x1A8
		::Il2CppArray<::System::String*>* OverrideReplaceMaterialKeyList; // 0x1B0
		::System::UInt32 NearestTeleportMappingInfoID; // 0x1B8
		::System::UInt32 RaidID; // 0x1BC
		::Il2CppArray<::System::UInt32>* ActivityMapConditionIDList; // 0x1C0
		::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>* CameraCenterEntityList; // 0x1C8
		::RPG::GameCore::LevelEntityVCameraConfig* CameraConfig; // 0x1D0
		::System::String* SFXOnLoad; // 0x1D8
		::Il2CppArray<::RPG::GameCore::LevelNPCNearbyConfig*>* NearByConfigs; // 0x1E0
		::RPG::GameCore::LevelNPCNearbyAnimConfig* NearbyAnimConfig; // 0x1E8
		::RPG::GameCore::LevelNPCNearbyEventConfig* NearbyEventConfig; // 0x1F0
		::RPG::GameCore::LevelNPCSpawnConfig* SpawnConfig; // 0x1F8
		::RPG::GameCore::LevelNPCModelPresetConfig* ModelPresetConfig; // 0x200
		::System::String* FloatingTemplateName; // 0x208
		::System::Boolean IsFloatingOverride; // 0x210
		::RPG::GameCore::AdventureCharacterFloatingConfig* FloatingConfig; // 0x218
		::System::Boolean IsClientOnly; // 0x220
		::System::UInt32 SoundProfileOverrideID; // 0x224
		::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig* TagOverrideConfig; // 0x228

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

		::System::UInt32 GetSeriesID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFO_GETSERIESID_OFFSET))(this);
		}
	};
}
