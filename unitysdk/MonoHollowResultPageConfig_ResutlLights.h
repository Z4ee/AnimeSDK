#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoHollowResultPageConfig_LightConfig.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MONOHOLLOWRESULTPAGECONFIG_RESUTLLIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x139E4060)

inline static constexpr unsigned int MonoHollowResultPageConfig_ResutlLights_TypeDefinitionIndex = 74967;

class MonoHollowResultPageConfig_ResutlLights : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* peakToEndCurve; // 0x10
	::UnityEngine::AnimationCurve* startToPeakCurve; // 0x18
	::MonoHollowResultPageConfig_LightConfig end; // 0x20
	::System::Single startToPeakDuration; // 0x68
	::MonoHollowResultPageConfig_LightConfig start; // 0x6C
	::System::Single peakToEndDuration; // 0xB4
	::MonoHollowResultPageConfig_LightConfig peakVal; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_RESUTLLIGHTS__CTOR_OFFSET))(this);
	}
};
