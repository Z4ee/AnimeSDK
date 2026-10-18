#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline
{
	inline static constexpr unsigned int MechCraftPerfUnitType_TypeDefinitionIndex = 79795;

	enum class MechCraftPerfUnitType : ::System::Int32
	{
		TargetReaching = 0,
		TargetReached = 1,
		ValueChanged = 2,
	};
}
