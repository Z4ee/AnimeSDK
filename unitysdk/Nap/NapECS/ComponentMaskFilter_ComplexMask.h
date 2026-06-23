#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentAccessFilterMode.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentMaskFilter_ComplexMask_TypeDefinitionIndex = 37293;

	struct alignas(8) ComponentMaskFilter_ComplexMask
	{
		::Nap::NapECS::ComponentAccessFilterMode Mode; // 0x10
		::Nap::NapECS::ComponentMask Mask; // 0x18
	};
}
