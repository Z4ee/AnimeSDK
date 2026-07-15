#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int SequenceMode_TypeDefinitionIndex = 37505;

	enum class SequenceMode : ::System::Int32
	{
		Hold = 0,
		Once = 1,
		Loop = 2,
		Pingpong = 3,
		OnceReverse = 4,
		LoopReverse = 5,
		PingpongReverse = 6,
	};
}
