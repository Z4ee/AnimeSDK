#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int VideoQuality_TypeDefinitionIndex = 78775;

	enum class VideoQuality : ::System::Int32
	{
		SD = 0,
		CD = 2,
		LD = 3,
		HD = 1,
	};
}
