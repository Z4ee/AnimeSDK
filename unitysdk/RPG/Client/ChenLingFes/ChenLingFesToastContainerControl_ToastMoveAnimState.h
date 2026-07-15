#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastContainerControl_ToastMoveAnimState_TypeDefinitionIndex = 76393;

	struct alignas(4) ChenLingFesToastContainerControl_ToastMoveAnimState
	{
		::System::Single StartY; // 0x10
		::System::Single TargetY; // 0x14
		::System::Single Elapsed; // 0x18
		::System::Single Duration; // 0x1C
	};
}
