#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChallengeQuestType_TypeDefinitionIndex = 50360;

	enum class ChallengeQuestType : ::System::Int32
	{
		BuffChallenge = 2,
		TimeLimitChallenge = 1,
		NormallChallenge = 0,
	};
}
