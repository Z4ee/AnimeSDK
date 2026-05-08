#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BeatItem.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGRHYTHMMOVEBEATMAP_BEATMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18F390A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRhythmMoveBeatMap_BeatMap_TypeDefinitionIndex = 47555;

	class ConfigRhythmMoveBeatMap_BeatMap : public ::System::Object
	{
	public:
		::System::Single bpm; // 0x10
		::System::Single time; // 0x14
		::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* beatItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRHYTHMMOVEBEATMAP_BEATMAP__CTOR_OFFSET))(this);
		}
	};
}
