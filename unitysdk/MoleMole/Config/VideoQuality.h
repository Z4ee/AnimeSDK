#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int VideoQuality_TypeDefinitionIndex = 83521;

	enum class VideoQuality : ::System::Int32
	{
		LD = 3,
		HD = 1,
		CD = 2,
		SD = 0,
	};
}
