#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarDynamicCheckType_TypeDefinitionIndex = 50805;

	enum class AvatarDynamicCheckType : ::System::Int32
	{
		AllAvatar = 3,
		None = 0,
		TeamAvatar = 2,
		LocalAvatar = 1,
	};
}
