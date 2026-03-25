#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Patch
{
	inline static constexpr unsigned int PatchType_TypeDefinitionIndex = 64556;

	enum class PatchType : ::System::Int32
	{
		Source = 0,
		HDiff = 1,
	};
}
