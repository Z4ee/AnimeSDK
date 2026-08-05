#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaMixerBehaviour_ClipState_TypeDefinitionIndex = 35035;

	enum class CriManaMixerBehaviour_ClipState : ::System::Int32
	{
		Idle = 0,
		Prepare = 1,
		Play = 2,
		Seek = 3,
	};
}
