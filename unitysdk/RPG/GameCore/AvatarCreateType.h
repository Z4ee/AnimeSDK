#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarCreateType_TypeDefinitionIndex = 56873;

	enum class AvatarCreateType : ::System::Int32
	{
		Normal = 0,
		GridFight = 1,
	};
}
