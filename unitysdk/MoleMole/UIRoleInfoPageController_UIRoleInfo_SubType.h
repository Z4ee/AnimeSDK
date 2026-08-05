#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_UIRoleInfo_SubType_TypeDefinitionIndex = 72188;

	enum class UIRoleInfoPageController_UIRoleInfo_SubType : ::System::Int32
	{
		BASIC = 0,
		EQUIP = 2,
		COUNT = 3,
		SKILL = 1,
		NONE = -1,
	};
}
