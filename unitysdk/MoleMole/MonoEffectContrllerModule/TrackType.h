#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TrackType_TypeDefinitionIndex = 90064;

	enum class TrackType : ::System::Int32
	{
		Disable = 0,
		FixedSpeed = 2,
		Immediately = 1,
	};
}
