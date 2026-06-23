#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatSetAvatarVisible_TypeDefinitionIndex = 70857;

	enum class ChatSetAvatarVisible : ::System::Int32
	{
		Visible = 2,
		None = 0,
		Hide = 1,
	};
}
