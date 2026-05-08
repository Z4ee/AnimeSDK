#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITYRHYTHMCLICKBEATMAPCONFIG_BEATMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xFAE1CB0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRhythmClickBeatmapConfig_BeatMap_TypeDefinitionIndex = 72793;

	class ActivityRhythmClickBeatmapConfig_BeatMap : public ::System::Object
	{
	public:
		::System::String* songPath; // 0x10
		::System::Single bpm; // 0x18
		::System::Single time; // 0x1C
		::System::Single offset; // 0x20
		::System::Boolean isLoop; // 0x24
		::System::Int32 beatPerBar; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* RowIndexList; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct>* rhythmEventList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYRHYTHMCLICKBEATMAPCONFIG_BEATMAP__CTOR_OFFSET))(this);
		}
	};
}
