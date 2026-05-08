#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ArcanaType_TypeDefinitionIndex = 65057;

	enum class ArcanaType : ::System::Int32
	{
		Shield = 1,
		FieldRange = 4,
		FireBall = 2,
		BeatBack = 3,
	};
}
