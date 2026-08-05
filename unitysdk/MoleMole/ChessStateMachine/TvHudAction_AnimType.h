#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TvHudAction_AnimType_TypeDefinitionIndex = 47198;

	enum class TvHudAction_AnimType : ::System::Int32
	{
		FadeInAndLoop = 0,
		FadeOut = 1,
	};
}
