#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_Status_TypeDefinitionIndex = 38059;

	enum class Player_Status : ::System::Int32
	{
		Stop = 0,
		Dechead = 1,
		WaitPrep = 2,
		Prep = 3,
		Ready = 4,
		Playing = 5,
		PlayEnd = 6,
		Error = 7,
		StopProcessing = 8,
		ReadyForRendering = 9,
	};
}
