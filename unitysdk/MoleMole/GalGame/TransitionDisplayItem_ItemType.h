#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionDisplayItem_ItemType_TypeDefinitionIndex = 64105;

	enum class TransitionDisplayItem_ItemType : ::System::Int32
	{
		Text = 0,
		Condition = 1,
	};
}
