#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackController_AlleyPackInputPosParam_TypeDefinitionIndex = 73979;

	struct alignas(4) AlleyPackController_AlleyPackInputPosParam
	{
		::System::Boolean IsValid; // 0x10
		::System::Single PosX; // 0x14
		::System::Single PosY; // 0x18
		::System::Single PosZ; // 0x1C
	};
}
