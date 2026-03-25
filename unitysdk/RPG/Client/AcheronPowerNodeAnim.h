#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AcheronPowerNodeAnim_TypeDefinitionIndex = 58848;

	enum class AcheronPowerNodeAnim : ::System::Int32
	{
		Normal = 0,
		Active = 1,
		ActiveToNormal = 2,
	};
}
