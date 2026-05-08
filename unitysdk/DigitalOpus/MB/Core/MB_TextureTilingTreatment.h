#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_TextureTilingTreatment_TypeDefinitionIndex = 85028;

	enum class MB_TextureTilingTreatment : ::System::Int32
	{
		none = 0,
		considerUVs = 1,
		edgeToEdgeX = 2,
		edgeToEdgeY = 3,
		edgeToEdgeXY = 4,
		unknown = 5,
	};
}
