#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BeatType.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BlockType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIGRHYTHMMOVEBEATMAP_BEATMAP_BEATITEM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x4269D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRhythmMoveBeatMap_BeatMap_BeatItem_TypeDefinitionIndex = 65974;

	struct alignas(4) ConfigRhythmMoveBeatMap_BeatMap_BeatItem
	{
		::System::Single time; // 0x10
		::System::Single beat; // 0x14
		::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType type; // 0x18
		::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType blockType; // 0x1C
		::System::Int32 stayBeat; // 0x20
		::System::Int32 _x; // 0x24
		::System::Int32 _y; // 0x28

		/*
		::MoleMole::Vector2Int get_position()
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRHYTHMMOVEBEATMAP_BEATMAP_BEATITEM_GET_POSITION_OFFSET))(this);
		}
		*/
	};
}
