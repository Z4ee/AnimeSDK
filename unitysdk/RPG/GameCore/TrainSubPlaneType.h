#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainSubPlaneType_TypeDefinitionIndex = 13519;

	enum class TrainSubPlaneType : ::System::Int32
	{
		Unknown = 0,
		Default = 1,
		TrainParty = 2,
	};
}
