#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData_RoleExpiredStatus_TypeDefinitionIndex = 60511;

	enum class GridFightGameRefData_RoleExpiredStatus : ::System::Int32
	{
		None = 0,
		Warning = 1,
		Error = 2,
	};
}
