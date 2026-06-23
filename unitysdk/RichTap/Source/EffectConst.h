#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RICHTAP_SOURCE_EFFECTCONST_AMPLITUDECHECK_OFFSET UNITYSDK_OFFSET(0x1DE18B70)
#define RICHTAP_SOURCE_EFFECTCONST_FREQUENCYCHECK_OFFSET UNITYSDK_OFFSET(0x1DE18B80)
#define RICHTAP_SOURCE_EFFECTCONST_LOOPCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x1DE1A060)
#define RICHTAP_SOURCE_EFFECTCONST_LOOPINTERVALCHECK_OFFSET UNITYSDK_OFFSET(0x1DE18BA0)
#define RICHTAP_SOURCE_EFFECTCONST_TRIGGERSETTINGCHECK_OFFSET UNITYSDK_OFFSET(0x1DE1A070)

namespace RichTap::Source
{
	inline static constexpr unsigned int EffectConst_TypeDefinitionIndex = 38086;

	class EffectConst : public ::System::Object
	{
	public:
		// static const ::System::String* NAME_LOOP_ENABLED; // 0x0
		// static const ::System::String* NAME_LOOP_INFINITY; // 0x0
		// static const ::System::String* NAME_LOOP_COUNT; // 0x0
		// static const ::System::String* NAME_LOOP_INTERVAL; // 0x0
		// static const ::System::Int32 MAX_AMPLITUDE = 0x1FF; // 0x0
		// static const ::System::Int32 MIN_AMPLITUDE = 0x0; // 0x0
		// static const ::System::Int32 DEFAULT_AMPLITUDE = 0xFF; // 0x0
		// static const ::System::Int32 MAX_FREQUENCY = 0x64; // 0x0
		// static const ::System::Int32 MIN_FREQUENCY = 0xFFFFFF9C; // 0x0
		// static const ::System::Int32 MIN_LOOP_COUNT = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MIN_LOOP_INTERVAL = 0x0; // 0x0
		// static const ::System::Int32 DEFAULT_FREQUENCY = 0x0; // 0x0
		// static const ::System::Int32 DEFAULT_PRIORITY = 0x28; // 0x0
		// static const ::System::Int32 LOWEST_PRIORITY = 0x64; // 0x0
		// static const ::System::Int32 HIGHEST_PRIORITY = 0x0; // 0x0
		// static const ::System::Int32 MIN_TRIGGER_SETTING_VALUE = 0x0; // 0x0
		// static const ::System::Int32 MAX_TRIGGER_SETTING_VALUE = 0x64; // 0x0

		static ::System::Int32 AmplitudeCheck(::System::Int32 amplitude)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_EFFECTCONST_AMPLITUDECHECK_OFFSET))(amplitude);
		}

		static ::System::Int32 FrequencyCheck(::System::Int32 frequency)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_EFFECTCONST_FREQUENCYCHECK_OFFSET))(frequency);
		}

		static ::System::Int32 LoopCountCheck(::System::Int32 loopCount)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_EFFECTCONST_LOOPCOUNTCHECK_OFFSET))(loopCount);
		}

		static ::System::Int32 LoopIntervalCheck(::System::Int32 loopInterval)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_EFFECTCONST_LOOPINTERVALCHECK_OFFSET))(loopInterval);
		}

		static ::System::Int32 TriggerSettingCheck(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_EFFECTCONST_TRIGGERSETTINGCHECK_OFFSET))(value);
		}
	};
}
