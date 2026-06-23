#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_UIRoleInfo_SubType_TypeDefinitionIndex = 73104;

	enum class UIRoleInfoPageController_UIRoleInfo_SubType : ::System::Int32
	{
		SKILL = 1,
		EQUIP = 2,
		BASIC = 0,
		COUNT = 3,
		NONE = -1,
	};
}
