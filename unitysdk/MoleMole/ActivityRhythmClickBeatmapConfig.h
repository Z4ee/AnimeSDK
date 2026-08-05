#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SerializedScriptableObjectBase.h"

namespace MoleMole { class ActivityRhythmClickBeatmapConfig_BeatMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ACTIVITYRHYTHMCLICKBEATMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16234900)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRhythmClickBeatmapConfig_TypeDefinitionIndex = 65342;

	class ActivityRhythmClickBeatmapConfig : public ::MoleMole::SerializedScriptableObjectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap*>* beatMaps; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYRHYTHMCLICKBEATMAPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
