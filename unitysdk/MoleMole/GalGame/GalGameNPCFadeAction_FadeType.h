#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCFadeAction_FadeType_TypeDefinitionIndex = 68240;

	enum class GalGameNPCFadeAction_FadeType : ::System::Byte
	{
		FadeOut = 0x1,
		FadeIn = 0x0,
	};
}
