#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventType_TypeDefinitionIndex = 9982;

	enum class EHollowEventType : ::System::Int16
	{
		Begin = 10,
		None = 0,
		Battle_Normal = 31,
		Dialog_Special = 43,
		ChangeLevel_Fight = 24,
		BattleEnd = 22,
		Dialog_Positive = 41,
		Dialog = 40,
		All = 1,
		Battle_Elite = 32,
		Battle_Boss = 33,
		ChangeLevel_Interact = 23,
		Dialog_Negative = 42,
		End = 20,
		InteractEnd = 21,
		Battle = 30,
	};
}
