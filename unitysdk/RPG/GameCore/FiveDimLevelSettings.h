#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"
#include "unitysdk/RPG/GameCore/FiveDimDifficulty.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelSettings.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEditorLoadStageConfig; }
namespace RPG::GameCore { class FiveDimExtraLevelGraphConfig; }
namespace RPG::GameCore { class FiveDimLevelAudioConfig; }
namespace RPG::GameCore { class FiveDimMusicJumpConfig; }
namespace RPG::GameCore { class FiveDimTrainLevelConfig; }
namespace RPG::GameCore { class FiveDimWaterReflectionLevelConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class MiniGameCollectCoinConfig; }
namespace RPG::GameCore { class MiniGameFlappyBirdConfig; }
namespace RPG::GameCore { class MiniGameHundredFloorConfig; }

#define RPG_GAMECORE_FIVEDIMLEVELSETTINGS_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D8671C0)
#define RPG_GAMECORE_FIVEDIMLEVELSETTINGS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D867170)
#define RPG_GAMECORE_FIVEDIMLEVELSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8671B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelSettings_TypeDefinitionIndex = 18302;

	class FiveDimLevelSettings : public ::RPG::GameCore::LittleGameLevelSettings
	{
	public:
		::RPG::GameCore::HoyoTagContainer* Tags; // 0x10
		::System::UInt32 UnitLengthIndex; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimExtraLevelGraphConfig*>* ExtraLevelGraphConfigList; // 0x20
		::System::Boolean UseLevelSpaceGravity; // 0x28
		::System::Boolean ReverseCameraGravity; // 0x29
		::System::Boolean LightFollowCameraDir; // 0x2A
		::System::UInt32 AvatarID; // 0x2C
		::RPG::GameCore::FiveDimLevelAudioConfig* LevelAudioConfig; // 0x30
		::RPG::GameCore::FiveDimMusicJumpConfig* MusicJumpConfig; // 0x38
		::RPG::GameCore::FiveDimGameplayMode GameplayMode; // 0x40
		::System::Single WaterLevel; // 0x44
		::RPG::GameCore::FiveDimWaterReflectionLevelConfig* WaterLevelConfig; // 0x48
		::RPG::GameCore::MiniGameCollectCoinConfig* CollectCoinConfig; // 0x50
		::RPG::GameCore::MiniGameFlappyBirdConfig* FlappyBirdConfig; // 0x58
		::RPG::GameCore::FiveDimEditorLoadStageConfig* EditorLoadStageConfig; // 0x60
		::RPG::GameCore::FiveDimTrainLevelConfig* TrainConfig; // 0x68
		::RPG::GameCore::MiniGameHundredFloorConfig* HundredFloorConfig; // 0x70
		::RPG::GameCore::FiveDimDifficulty Difficulty; // 0x78
		::RPG::Client::TextID SimpleGameLevelTips; // 0x80
		::RPG::Client::TextID SimepleGameLevelDesc; // 0x90
		::System::Boolean CameraCullingOptimization; // 0xA0
		::System::Boolean EnableEffectSimulateInSurface; // 0xA1
		::System::Boolean UnlimitedJumpEnergy; // 0xA2
		::RPG::GameCore::FiveDimCustomScreenTransferStyle LoadingViewStyle; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelSettings*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelSettings*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELSETTINGS_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelSettings* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELSETTINGS_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
