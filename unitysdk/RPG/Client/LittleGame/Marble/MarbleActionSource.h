#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int MarbleActionSource_TypeDefinitionIndex = 40512;

	enum class MarbleActionSource : ::System::Int32
	{
		None = 0,
		PaoPao = 1,
	};
}
