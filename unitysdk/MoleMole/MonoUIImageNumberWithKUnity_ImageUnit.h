#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI { class Image; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageNumberWithKUnity_ImageUnit_TypeDefinitionIndex = 41979;

	struct alignas(8) MonoUIImageNumberWithKUnity_ImageUnit
	{
		::System::Int32 digitIndex; // 0x10
		::UnityEngine::UI::Image* digitImg; // 0x18
	};
}
