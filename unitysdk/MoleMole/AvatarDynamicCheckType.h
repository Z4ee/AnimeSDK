#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarDynamicCheckType_TypeDefinitionIndex = 79740;

	enum class AvatarDynamicCheckType : ::System::Int32
	{
		LocalAvatar = 1,
		None = 0,
		TeamAvatar = 2,
		AllAvatar = 3,
	};
}
