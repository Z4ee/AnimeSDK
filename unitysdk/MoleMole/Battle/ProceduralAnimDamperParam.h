#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CustomDamperUtility_DampingType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimDamperParam_TypeDefinitionIndex = 68021;

	struct alignas(4) ProceduralAnimDamperParam
	{
		::MoleMole::CustomDamperUtility_DampingType DamperType; // 0x10
		::System::Single HalfLife; // 0x14
		::System::Single Frequency; // 0x18
		::System::Single Damping; // 0x1C
	};
}
