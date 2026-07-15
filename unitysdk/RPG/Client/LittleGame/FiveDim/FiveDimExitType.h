#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimExitType_TypeDefinitionIndex = 40959;

	enum class FiveDimExitType : ::System::Int32
	{
		Manual = 0,
		Portal = 1,
		PipePortal = 2,
		Graph = 3,
		Entry = 4,
	};
}
