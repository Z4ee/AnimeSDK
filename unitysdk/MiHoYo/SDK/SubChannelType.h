#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SubChannelType_TypeDefinitionIndex = 8039;

	enum class SubChannelType : ::System::Int32
	{
		Default = 0,
		Official = 1,
		NoTapTap = 2,
		Epic = 3,
		SamSung = 4,
		Steam = 5,
		Google = 6,
		MAX = 7,
	};
}
