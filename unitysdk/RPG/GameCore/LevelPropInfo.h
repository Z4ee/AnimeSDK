#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelAdvEffectOverrideInfo; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace RPG::GameCore { class LevelEntityHoyoTagContainerOverrideConfig; }
namespace RPG::GameCore { class LevelEntityReferenceInfo; }
namespace RPG::GameCore { class LevelEntityVCameraConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelPropParameter; }
namespace RPG::GameCore { class LevelPropSpawnConfig; }
namespace RPG::GameCore { class LevelPropStateConfig; }
namespace RPG::GameCore { class LevelPropStateIcon; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class PropTagComponentCollection; }
namespace RPG::GameCore { class StageObjectCapture; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LEVELPROPINFO_METHOD_4_8891414C4A335FB2_OFFSET UNITYSDK_OFFSET(0x1B07F800)
#define RPG_GAMECORE_LEVELPROPINFO_METHOD_4_8A8E2471DB7D15B3_OFFSET UNITYSDK_OFFSET(0x1B086F80)
#define RPG_GAMECORE_LEVELPROPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07F730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropInfo_TypeDefinitionIndex = 16574;

	class LevelPropInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::Single RotX; // 0x38
		::System::Single RotZ; // 0x3C
		::RPG::MVector3 Scale; // 0x40
		::System::UInt32 PropID; // 0x4C
		::System::String* DynamicResName; // 0x50
		::System::Boolean LoadOnInitial; // 0x58
		::System::Boolean IsOverrideInitLevelGraph; // 0x59
		::System::String* InitLevelGraph; // 0x60
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0x68
		::RPG::GameCore::LevelTriggerInfo* Trigger; // 0x70
		::System::UInt32 CampID; // 0x78
		::RPG::GameCore::PropState State; // 0x7C
		::System::UInt32 EventID; // 0x80
		::System::Single OverrideHintRange; // 0x84
		::System::Single OverrideSoundRange; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* CustomTriggerMap; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* CustomTriggerMapV2; // 0x98
		::Il2CppArray<::RPG::GameCore::LevelPropStateConfig*>* StateConfigs; // 0xA0
		::System::UInt32 AnchorGroupID; // 0xA8
		::System::UInt32 AnchorID; // 0xAC
		::System::UInt32 ChestID; // 0xB0
		::System::UInt32 MappingInfoID; // 0xB4
		::System::UInt32 SubMapID; // 0xB8
		::System::UInt32 DialogueTriggerAngle; // 0xBC
		::Il2CppArray<::System::UInt32>* DialogueGroups; // 0xC0
		::System::UInt32 FirstDialogueGroupID; // 0xC8
		::Il2CppArray<::System::UInt32>* TalkDialogGroupIDList; // 0xD0
		::RPG::GameCore::TalkChosenType TalkChosenType; // 0xD8
		::Il2CppArray<::System::UInt32>* ServerInteractVerificationIDList; // 0xE0
		::System::Boolean HideInCutScene; // 0xE8
		::System::Boolean HideInStory; // 0xE9
		::System::UInt16 PerformanceHideFlags; // 0xEA
		::System::Boolean DisableDither; // 0xEC
		::RPG::GameCore::StageObjectCapture* StageObjectCapture; // 0xF0
		::System::UInt32 RaidID; // 0xF8
		::System::UInt32 FarmElementID; // 0xFC
		::System::UInt32 CocoonID; // 0x100
		::Il2CppArray<::System::UInt32>* ActivityMapConditionIDList; // 0x108
		::System::Int32 OverrideMapIconType; // 0x110
		::Il2CppArray<::RPG::GameCore::LevelPropStateIcon*>* OverrideMapStateIcons; // 0x118
		::RPG::Client::TextID OverridePropName; // 0x120
		::RPG::GameCore::LevelDialogInfo* Dialog; // 0x130
		::RPG::GameCore::JsonEnum* InteractIconType; // 0x138
		::System::Boolean DialogueTriggerSkipFakeAvatar; // 0x140
		::Il2CppArray<::System::UInt32>* DialogueTriggerSkipSpecifiedFakeAvatarList; // 0x148
		::RPG::Client::TextID InteractTitle; // 0x150
		::RPG::GameCore::LevelPropParameter* CustomParameter; // 0x160
		::RPG::GameCore::LevelPropParameter* MapCustomParameter; // 0x168
		::System::UInt32 NearestTeleportMappingInfoID; // 0x170
		::Il2CppArray<::System::Int32>* OverrideBoardShowList; // 0x178
		::System::Boolean IsClientOnly; // 0x180
		::System::Boolean OverrideTriggerValidGuestConfig; // 0x181
		::RPG::GameCore::TriggerValidGuestConfig* TriggerValidGuest; // 0x188
		::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig* TagOverrideConfig; // 0x190
		::RPG::MVector3 CameraCollisionPoint; // 0x198
		::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>* CameraCenterEntityList; // 0x1A8
		::RPG::GameCore::LevelEntityVCameraConfig* CameraConfig; // 0x1B0
		::System::Boolean IsOverrideAudioSwitch; // 0x1B8
		::System::String* AudioSwitchGroupName; // 0x1C0
		::System::String* AudioSwitchName; // 0x1C8
		::System::String* OverrideReplaceMaterialKey; // 0x1D0
		::System::UInt32 SoundProfileOverrideID; // 0x1D8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* OverrideAdvEffectMap; // 0x1E0
		::RPG::GameCore::PropTagComponentCollection* TagOverrideComponents; // 0x1E8
		::System::Boolean LookAtPlayer; // 0x1F0
		::System::Single LookAtPlayerTriggerRadius; // 0x1F4
		::System::Boolean IsOverrideLockRaycastOffset; // 0x1F8
		::System::Single OverrideLockRaycastOffset; // 0x1FC
		::RPG::GameCore::LevelPropSpawnConfig* SpawnConfig; // 0x200
		::System::Boolean IsTrackRealtimePositionInMap; // 0x208

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8A8E2471DB7D15B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPINFO_METHOD_4_8A8E2471DB7D15B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8891414C4A335FB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPINFO_METHOD_4_8891414C4A335FB2_OFFSET))(a1, a2);
		}
	};
}
