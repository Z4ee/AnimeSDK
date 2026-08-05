#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SerializedScriptableObjectBase.h"

namespace MoleMole { class ConfigRhythmMoveBeatMap_BeatMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGRHYTHMMOVEBEATMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6C140)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRhythmMoveBeatMap_TypeDefinitionIndex = 65970;

	class ConfigRhythmMoveBeatMap : public ::MoleMole::SerializedScriptableObjectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigRhythmMoveBeatMap_BeatMap*>* beatMaps; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRHYTHMMOVEBEATMAP__CTOR_OFFSET))(this);
		}
	};
}
