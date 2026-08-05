#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaMixerBehaviour_MovieMixerState_TypeDefinitionIndex = 35034;

	enum class CriManaMixerBehaviour_MovieMixerState : ::System::Int32
	{
		Preloading = 0,
		Ready = 1,
		Playing = 2,
		Stopping = 3,
		Stopped = 4,
	};
}
