#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelItemVendor_TypeDefinitionIndex = 11127;

	enum class ChimeraDuelItemVendor : ::System::Int32
	{
		None = 0,
		Default = 1,
		MasterAglaea = 2,
		MasterCastorice = 3,
	};
}
