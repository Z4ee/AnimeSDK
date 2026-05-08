#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_UIRoleInfo_SubType_TypeDefinitionIndex = 67732;

	enum class UIRoleInfoPageController_UIRoleInfo_SubType : ::System::Int32
	{
		COUNT = 3,
		SKILL = 1,
		BASIC = 0,
		NONE = -1,
		EQUIP = 2,
	};
}
