#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearClip_FaceTearState_TypeDefinitionIndex = 46302;

	enum class VFXTearClip_FaceTearState : ::System::Int32
	{
		None = 0,
		Single = 1,
		Flood = 2,
		FloodCover = 3,
	};
}
