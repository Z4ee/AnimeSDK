#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AudioTriggerInfo.h"
#include "unitysdk/AudioTriggerMode.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/EdgeDetectionMode.h"
#include "unitysdk/StageHarmonyBaseDemodulator_1.h"

namespace System { class String; }

#define STAGEHARMONYAUDIODEMODULATOR_METHOD_3_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xD095520)
#define STAGEHARMONYAUDIODEMODULATOR_METHOD_3_E1105A7D5DEEC97F_OFFSET UNITYSDK_OFFSET(0xD095420)
#define STAGEHARMONYAUDIODEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET UNITYSDK_OFFSET(0xD0953D0)
#define STAGEHARMONYAUDIODEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD095560)

inline static constexpr unsigned int StageHarmonyAudioDemodulator_TypeDefinitionIndex = 44811;

class StageHarmonyAudioDemodulator : public ::StageHarmonyBaseDemodulator_1<::AudioTriggerInfo>
{
public:
	::System::Single Threshold; // 0x28
	::System::Boolean InvertThreshold; // 0x2C
	::EdgeDetectionMode EdgeDetection; // 0x30
	::System::String* AudioEventName; // 0x38
	::AudioTriggerMode TriggerMode; // 0x40
	::System::Boolean StopOnBelowThreshold; // 0x44
	::System::Single FadeOutTime; // 0x48
	::System::Single Cooldown; // 0x4C
	::System::Single _currentSignal; // 0x50
	::System::Boolean _isTriggered; // 0x54
	::System::Boolean _lastTriggered; // 0x55
	::System::Single _lastSignal; // 0x58
	::System::Boolean _isInitialized; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIODEMODULATOR__CTOR_OFFSET))(this);
	}

	::DemodulatorOutPutType Method_3_F4B1CC0F7E08D926()
	{
		return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIODEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET))(this);
	}

	::AudioTriggerInfo Method_3_E1105A7D5DEEC97F(::System::Single a1)
	{
		return ((::AudioTriggerInfo(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIODEMODULATOR_METHOD_3_E1105A7D5DEEC97F_OFFSET))(this, a1);
	}

	::System::String* Method_3_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIODEMODULATOR_METHOD_3_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
