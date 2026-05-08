#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RhythmEventType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct_TypeDefinitionIndex = 72794;

	struct alignas(8) ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct
	{
		::System::Int32 bar; // 0x10
		::System::Single beat; // 0x14
		::MoleMole::RhythmEventType eventType; // 0x18
		::System::Single beatPerTick; // 0x1C
		::System::Single swing; // 0x20
		::System::Single holdBeat; // 0x24
		::System::Collections::Generic::List_1<::System::Boolean>* patternList; // 0x28
		::System::String* effectName; // 0x30
		::System::Boolean isOn; // 0x38
		::System::String* SwitchGuideSoundName; // 0x40
		::System::String* SwitchInteractSoundName; // 0x48
		::System::Boolean speedUpTextOn; // 0x50
		::System::Boolean LongPressTextOn; // 0x51
		::System::Int32 row; // 0x54
		::System::Int32 y; // 0x58
	};
}
