#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ArcanaType_TypeDefinitionIndex = 61625;

	enum class ArcanaType : ::System::Int32
	{
		FireBall = 2,
		FieldRange = 4,
		Shield = 1,
		BeatBack = 3,
	};
}
