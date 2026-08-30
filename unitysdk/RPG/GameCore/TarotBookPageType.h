#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookPageType_TypeDefinitionIndex = 24339;

	enum class TarotBookPageType : ::System::Int32
	{
		Invalid = 0,
		Main = 1,
		Close = 2,
		Open = 3,
		Booklet = 4,
		Sign = 5,
		Delete = 6,
	};
}
