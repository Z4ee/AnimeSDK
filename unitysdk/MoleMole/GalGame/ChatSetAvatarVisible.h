#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatSetAvatarVisible_TypeDefinitionIndex = 76960;

	enum class ChatSetAvatarVisible : ::System::Int32
	{
		None = 0,
		Visible = 2,
		Hide = 1,
	};
}
