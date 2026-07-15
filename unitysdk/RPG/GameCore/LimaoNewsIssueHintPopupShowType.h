#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsIssueHintPopupShowType_TypeDefinitionIndex = 13457;

	enum class LimaoNewsIssueHintPopupShowType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		PressConference = 2,
	};
}
