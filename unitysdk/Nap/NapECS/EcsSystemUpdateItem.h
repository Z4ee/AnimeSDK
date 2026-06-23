#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsSystem; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemUpdateItem_TypeDefinitionIndex = 37303;

	struct alignas(8) EcsSystemUpdateItem
	{
		::Nap::NapECS::EcsSystem* System; // 0x10
		::System::Boolean FixedFrameRate60; // 0x18
	};
}
