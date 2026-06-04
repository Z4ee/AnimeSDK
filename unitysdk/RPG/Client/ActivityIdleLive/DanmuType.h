#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int DanmuType_TypeDefinitionIndex = 70209;

	enum class DanmuType : ::System::Int32
	{
		Text = 0,
		Image = 1,
		ImageEmoji = 2,
	};
}
