#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeEffect_TypeDefinitionIndex = 83186;

	enum class ENodeEffect : ::System::Int32
	{
		None = 0,
		FadeIn = 1,
		FadeOut = 2,
	};
}
