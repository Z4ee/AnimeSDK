#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int RhythmEventType_TypeDefinitionIndex = 53917;

	enum class RhythmEventType : ::System::Int32
	{
		SwitchInteractSound = 5,
		ShowSpeedUpText = 6,
		ShowLongPressText = 7,
		SoundEvent = 98,
		SwitchGuideSound = 4,
		PlayEffect = 3,
		ResetPattern = 1,
		InteractEvent = 99,
		ClassicBeat = 0,
		FinishLevel = 2,
	};
}
