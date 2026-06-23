#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int BallGameRoleLocalData_TypeDefinitionIndex = 45134;

	struct alignas(4) BallGameRoleLocalData
	{
		::System::Int32 roleID; // 0x10
		::System::Int32 archiveID; // 0x14
	};
}
