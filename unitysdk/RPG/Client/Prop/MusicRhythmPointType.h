#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MusicRhythmPointType_TypeDefinitionIndex = 63636;

	enum class MusicRhythmPointType : ::System::Int32
	{
		None = 0,
		FireMiss = 1,
	};
}
