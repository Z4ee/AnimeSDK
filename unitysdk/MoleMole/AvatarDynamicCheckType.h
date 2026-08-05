#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarDynamicCheckType_TypeDefinitionIndex = 59077;

	enum class AvatarDynamicCheckType : ::System::Int32
	{
		LocalAvatar = 1,
		None = 0,
		AllAvatar = 3,
		TeamAvatar = 2,
	};
}
