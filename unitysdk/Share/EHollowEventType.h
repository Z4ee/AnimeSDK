#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventType_TypeDefinitionIndex = 17760;

	enum class EHollowEventType : ::System::Int16
	{
		Dialog_Special = 43,
		ChangeLevel_Interact = 23,
		Battle_Normal = 31,
		All = 1,
		Dialog_Positive = 41,
		InteractEnd = 21,
		ChangeLevel_Fight = 24,
		Dialog = 40,
		Begin = 10,
		End = 20,
		Battle = 30,
		Dialog_Negative = 42,
		Battle_Elite = 32,
		BattleEnd = 22,
		Battle_Boss = 33,
		None = 0,
	};
}
