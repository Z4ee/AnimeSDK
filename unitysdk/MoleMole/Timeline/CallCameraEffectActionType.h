#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CallCameraEffectActionType_TypeDefinitionIndex = 80202;

	enum class CallCameraEffectActionType : ::System::Int32
	{
		Stop = 1,
		Start = 0,
	};
}
