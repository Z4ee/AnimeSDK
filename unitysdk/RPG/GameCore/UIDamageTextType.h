#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIDamageTextType_TypeDefinitionIndex = 21429;

	enum class UIDamageTextType : ::System::Int32
	{
		DamageText = 0,
		BuffText = 1,
	};
}
