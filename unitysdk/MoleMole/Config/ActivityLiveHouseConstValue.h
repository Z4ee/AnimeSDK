#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseLongPressSoundData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityLivehouseRhythmBeatmapConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ACTIVITYLIVEHOUSECONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x159DA4F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ActivityLiveHouseConstValue_TypeDefinitionIndex = 54663;

	class ActivityLiveHouseConstValue : public ::System::Object
	{
	public:
		::System::Int32 GeneralLevelID_TutorialLevel; // 0x10
		::System::String* Normal_Left_TriggerSound; // 0x18
		::System::String* Normal_Right_TriggerSound; // 0x20
		::MoleMole::MusicGame::FLiveHouseLongPressSoundData Hold_Left_SoundData; // 0x28
		::MoleMole::MusicGame::FLiveHouseLongPressSoundData Hold_Right_SoundData; // 0x40
		::System::String* Double_TriggerSound; // 0x58
		::MoleMole::MusicGame::FLiveHouseLongPressSoundData DoubleHold_SoundData; // 0x60
		::System::String* Roll_TriggerSound; // 0x78
		::System::String* MultiRoll_TriggerSound; // 0x80
		::System::String* Heal_TriggerSound; // 0x88
		::System::String* MultiDoubleBig_TriggerSound; // 0x90
		::System::String* PerfectSound; // 0x98
		::System::String* GreatSound; // 0xA0
		::System::String* MissSound; // 0xA8
		::System::String* BombSound; // 0xB0
		::System::String* EmptyClickSound; // 0xB8
		::System::String* SkillHealSound; // 0xC0
		::System::Int32 StageSpineCount; // 0xC8
		::System::String* StageSoloEffectName; // 0xD0
		::System::Single ClickEffectAnimLength; // 0xD8
		::System::String* PerformGaussianBlurKey; // 0xE0
		::System::String* PerformVREffectKey; // 0xE8
		::System::String* EndNormalTextureSheetKey; // 0xF0
		::System::String* EndPerfectTextureSheetKey; // 0xF8
		::MoleMole::ActivityLivehouseRhythmBeatmapConfig* FeverBeatMapConfig; // 0x100
		::MoleMole::ActivityLivehouseRhythmBeatmapConfig* EnterBeatMapConfig; // 0x108
		::MoleMole::ActivityLivehouseRhythmBeatmapConfig* EndBeatMapConfig; // 0x110
		::System::Int32 MismatchCharacterID; // 0x118
		::System::Single MismatchBeat; // 0x11C
		::System::Single MismatchTransitionTime; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ACTIVITYLIVEHOUSECONSTVALUE__CTOR_OFFSET))(this);
		}
	};
}
