#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int RhythmEventType_TypeDefinitionIndex = 64607;

	enum class RhythmEventType : ::System::Int32
	{
		InteractEvent = 99,
		SwitchGuideSound = 4,
		ClassicBeat = 0,
		FinishLevel = 2,
		PlayEffect = 3,
		SwitchInteractSound = 5,
		ShowLongPressText = 7,
		ShowSpeedUpText = 6,
		SoundEvent = 98,
		ResetPattern = 1,
	};
}
