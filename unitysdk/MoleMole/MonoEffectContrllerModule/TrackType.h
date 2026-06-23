#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TrackType_TypeDefinitionIndex = 68133;

	enum class TrackType : ::System::Int32
	{
		Disable = 0,
		Immediately = 1,
		FixedSpeed = 2,
	};
}
