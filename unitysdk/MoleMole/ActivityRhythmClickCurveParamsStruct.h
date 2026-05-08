#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigHollowCameraShake; }

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRhythmClickCurveParamsStruct_TypeDefinitionIndex = 46550;

	struct alignas(8) ActivityRhythmClickCurveParamsStruct
	{
		::MoleMole::Config::ConfigHollowCameraShake* cameraClickShakeCurve; // 0x10
		::System::Single cameraClickDuration; // 0x18
	};
}
