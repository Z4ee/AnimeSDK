#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoHollowResultPageConfig_LightConfig.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MONOHOLLOWRESULTPAGECONFIG_RESUTLLIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x162F82C0)

inline static constexpr unsigned int MonoHollowResultPageConfig_ResutlLights_TypeDefinitionIndex = 41014;

class MonoHollowResultPageConfig_ResutlLights : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* startToPeakCurve; // 0x10
	::UnityEngine::AnimationCurve* peakToEndCurve; // 0x18
	::System::Single peakToEndDuration; // 0x20
	::MonoHollowResultPageConfig_LightConfig start; // 0x24
	::MonoHollowResultPageConfig_LightConfig peakVal; // 0x6C
	::System::Single startToPeakDuration; // 0xB4
	::MonoHollowResultPageConfig_LightConfig end; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_RESUTLLIGHTS__CTOR_OFFSET))(this);
	}
};
