#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeEffect_TypeDefinitionIndex = 43270;

	enum class ENodeEffect : ::System::Int32
	{
		FadeOut = 2,
		None = 0,
		FadeIn = 1,
	};
}
