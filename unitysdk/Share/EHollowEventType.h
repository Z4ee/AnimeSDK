#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventType_TypeDefinitionIndex = 16650;

	enum class EHollowEventType : ::System::Int16
	{
		Dialog = 40,
		InteractEnd = 21,
		Dialog_Negative = 42,
		ChangeLevel_Fight = 24,
		ChangeLevel_Interact = 23,
		Dialog_Positive = 41,
		All = 1,
		None = 0,
		Dialog_Special = 43,
		End = 20,
		Battle_Normal = 31,
		Begin = 10,
		Battle_Elite = 32,
		Battle_Boss = 33,
		Battle = 30,
		BattleEnd = 22,
	};
}
