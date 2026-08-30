#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1286D0)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseExternalStopLoopSFXConfig_TypeDefinitionIndex = 49298;

	class WwiseExternalStopLoopSFXConfig : public ::System::Object
	{
	public:
		::System::Boolean StopAll; // 0x10
		::System::UInt32 StopSFXId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCONFIG__CTOR_OFFSET))(this);
		}
	};
}
