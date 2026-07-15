#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItem_ItemType_TypeDefinitionIndex = 65801;

	enum class MonoTrainPartyBuildItem_ItemType : ::System::Int32
	{
		Static = 0,
		Dynamic = 1,
	};
}
