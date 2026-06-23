#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChallengeQuestType_TypeDefinitionIndex = 72965;

	enum class ChallengeQuestType : ::System::Int32
	{
		TimeLimitChallenge = 1,
		BuffChallenge = 2,
		NormallChallenge = 0,
	};
}
