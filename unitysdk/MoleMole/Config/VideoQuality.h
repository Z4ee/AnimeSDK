#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int VideoQuality_TypeDefinitionIndex = 40898;

	enum class VideoQuality : ::System::Int32
	{
		LD = 3,
		HD = 1,
		SD = 0,
		CD = 2,
	};
}
