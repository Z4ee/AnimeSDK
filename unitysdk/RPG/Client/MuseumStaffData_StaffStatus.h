#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumStaffData_StaffStatus_TypeDefinitionIndex = 63404;

	enum class MuseumStaffData_StaffStatus : ::System::Int32
	{
		None = 0,
		Available = 1,
		Owned = 2,
		Settled = 3,
		Dispatch = 4,
	};
}
