#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBuildMode_TypeDefinitionIndex = 77985;

	enum class ChimeraBuildMode : ::System::Int32
	{
		None = 0,
		Common = 1,
		Battle = 2,
	};
}
