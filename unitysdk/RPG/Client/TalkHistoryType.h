#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TalkHistoryType_TypeDefinitionIndex = 65018;

	enum class TalkHistoryType : ::System::Int32
	{
		None = 0,
		Simple = 1,
		Option = 2,
		Aside = 3,
		Item = 4,
		Read = 5,
	};
}
