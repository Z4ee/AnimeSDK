#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCFadeAction_FadeType_TypeDefinitionIndex = 50746;

	enum class GalGameNPCFadeAction_FadeType : ::System::Byte
	{
		FadeIn = 0x0,
		FadeOut = 0x1,
	};
}
