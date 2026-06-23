#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ESettingPlatform_TypeDefinitionIndex = 85296;

	enum class ESettingPlatform : ::System::Int32
	{
		Demara = 6,
		ALL = 999,
		None = 0,
		PS5 = 4,
		Android = 3,
		Kid = 5,
		IOS = 2,
		PC = 1,
	};
}
