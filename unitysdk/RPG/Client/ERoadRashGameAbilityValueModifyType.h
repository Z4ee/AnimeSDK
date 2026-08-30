#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ERoadRashGameAbilityValueModifyType_TypeDefinitionIndex = 10311;

	enum class ERoadRashGameAbilityValueModifyType : ::System::Int32
	{
		None = 0,
		Add = 1,
		Multi = 2,
		Override = 3,
	};
}
