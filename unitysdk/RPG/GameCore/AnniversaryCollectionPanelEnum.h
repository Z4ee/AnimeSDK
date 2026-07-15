#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnniversaryCollectionPanelEnum_TypeDefinitionIndex = 12182;

	enum class AnniversaryCollectionPanelEnum : ::System::Int32
	{
		None = 0,
		SignIn = 1,
		BookActivity = 2,
		Shopping = 3,
		WebActivity = 4,
		InGameActivity = 5,
		LiveStreamActivity = 6,
		RoleActivity = 7,
	};
}
