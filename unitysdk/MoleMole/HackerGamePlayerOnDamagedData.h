#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int HackerGamePlayerOnDamagedData_TypeDefinitionIndex = 62059;

	struct alignas(8) HackerGamePlayerOnDamagedData
	{
		::MoleMole::HackerGameDamageData Data; // 0x10
		::System::Int32 DamageIn; // 0x38
	};
}
