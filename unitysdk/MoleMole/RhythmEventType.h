#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int RhythmEventType_TypeDefinitionIndex = 49283;

	enum class RhythmEventType : ::System::Int32
	{
		FinishLevel = 2,
		ClassicBeat = 0,
		SoundEvent = 98,
		ShowSpeedUpText = 6,
		SwitchInteractSound = 5,
		ShowLongPressText = 7,
		SwitchGuideSound = 4,
		InteractEvent = 99,
		PlayEffect = 3,
		ResetPattern = 1,
	};
}
