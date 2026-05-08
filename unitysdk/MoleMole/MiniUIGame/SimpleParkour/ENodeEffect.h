#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeEffect_TypeDefinitionIndex = 40821;

	enum class ENodeEffect : ::System::Int32
	{
		FadeIn = 1,
		None = 0,
		FadeOut = 2,
	};
}
