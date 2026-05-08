#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int FadeAnimationData_TypeDefinitionIndex = 71537;

	struct alignas(8) FadeAnimationData
	{
		::System::String* FadeInAnimationName; // 0x10
		::System::String* FadeOutAnimationName; // 0x18
	};
}
