#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleType_TypeDefinitionIndex = 74824;

	enum class PuzzleType : ::System::Int32
	{
		RubikCube = 0,
		LinkWire = 1,
		Compass = 2,
		Insertion = 3,
		Programming = 4,
		OpticalIllusion = 5,
		Pinball = 6,
		ReSha = 7,
		BlockProjection = 8,
		Oracle = 9,
		EraFlipperSearchLight = 10,
		FastDeliver = 11,
		WormCompass = 12,
		PuzzleTotalCnt = 13,
	};
}
