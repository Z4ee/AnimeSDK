#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigHollowCameraShake; }

namespace MoleMole
{
	inline static constexpr unsigned int CinemaSingleClickCurveParamsStruct_TypeDefinitionIndex = 76758;

	struct alignas(8) CinemaSingleClickCurveParamsStruct
	{
		::MoleMole::Config::ConfigHollowCameraShake* singleCameraSuperBubbleClickCurve; // 0x10
		::System::Single singleCameraSuperBubbleClickDuration; // 0x18
	};
}
