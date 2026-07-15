#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RTSizeScale_TypeDefinitionIndex = 36343;

	enum class RTSizeScale : ::System::Int32
	{
		Full = 0,
		Half = 1,
		Quarter = 2,
	};
}
