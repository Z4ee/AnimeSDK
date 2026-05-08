#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ESettingPlatform_TypeDefinitionIndex = 62960;

	enum class ESettingPlatform : ::System::Int32
	{
		PC = 1,
		Kid = 5,
		None = 0,
		IOS = 2,
		PS5 = 4,
		ALL = 999,
		Android = 3,
		Demara = 6,
	};
}
