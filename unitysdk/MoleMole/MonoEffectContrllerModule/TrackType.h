#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TrackType_TypeDefinitionIndex = 38235;

	enum class TrackType : ::System::Int32
	{
		Immediately = 1,
		FixedSpeed = 2,
		Disable = 0,
	};
}
