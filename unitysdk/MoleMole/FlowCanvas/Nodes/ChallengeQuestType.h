#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChallengeQuestType_TypeDefinitionIndex = 49861;

	enum class ChallengeQuestType : ::System::Int32
	{
		NormallChallenge = 0,
		BuffChallenge = 2,
		TimeLimitChallenge = 1,
	};
}
