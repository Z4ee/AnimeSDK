#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialSubmissionType_TypeDefinitionIndex = 11546;

	enum class MaterialSubmissionType : ::System::Int32
	{
		Default = 0,
		BelobogShop = 1,
		AmphoreusCurio = 2,
	};
}
